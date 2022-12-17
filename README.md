In class we learned that on most computer systems, sizeof(float) returns 4 and sizeof(double) returns 8.  Suppose we wanted to implement a two-byte float.  One scheme is to partition the 16 bits of two bytes as follows:

    sign    |	      exponent            |	                 mantissa (significand)                                  |
    15	|14	13	12	11	10|	9	8	7	6	5	4	3	2	1	0|
This format is known as FP16 or IEEE half-precision. Bit 15 is the sign bit, five bits #14 through #10 encode an exponent, and the low ten bits #9 through #0 encode a fractional component.  We can implement the following three cases, depending on the value of the exponent:

Case 1: exponent = 00000_2
If all five exponent bits are 0, we can compute the floating-point value as (-1)^signbit * 2^-14 * (fractionbits/(2^10)

Case 2: exponent lies in the range [00001_2, …, 11110_2], inclusive. 
If the five exponent bits lie in the range 000012 to 111102, we can compute the floating-point value as (-1)^signbit * 2^exponent-15 * (1 + (fractionbits/2^10))

Case 3: exponent = 111112. If all five exponent bits are high, we can consider this number as ±∞, depending on the sign bit.

For this laboratory programming exercise, first test your program using the following 13 test bitstrings:

    char userInput[][16] = {
            {'0','0','0','0','0','0','0','0',    '0','0','0','0','0','0','0','0'}, // 0 00000 0000000000 = 0
            {'0','0','0','0','0','0','0','0',    '0','0','0','0','0','0','0','1'}, // 0 00000 0000000001 = 0.000000059604645
            {'0','0','0','0','0','0','1','1',    '1','1','1','1','1','1','1','1'}, // 0 00000 1111111111 = 0.000060975552
            {'0','0','0','0','0','1','0','0',    '0','0','0','0','0','0','0','0'}, // 0 00001 0000000000 = 0.00006103515625
            {'0','0','1','1','0','1','0','1',     '0','1','0','1','0','1','0','1'}, // 0 01101 0101010101 = 0.33325195, nearest value to 1/3
            {'0','0','1','1','1','0','1','1',    '1','1','1','1','1','1','1','1'}, // 0 01110 1111111111 = 0.99951172, largest number less than one
            {'0','0','1','1','1','1','0','0',    '0','0','0','0','0','0','0','0'}, // 0 01111 0000000000 = 1
            {'0','0','1','1','1','1','0','0',    '0','0','0','0','0','0','0','1'}, // 0 01111 0000000001 = 1.00097656, smallest number larger than one
            {'0','1','1','1','1','0','1','1',    '1','1','1','1','1','1','1','1'}, // 0 11110 1111111111 = 65504
            {'0','1','1','1','1','1','0','0',    '0','0','0','0','0','0','0','0'}, // 0 11111 0000000000 = infinity
            {'1','0','0','0','0','0','0','0',    '0','0','0','0','0','0','0','0'}, // 1 00000 0000000000 = -0
            {'1','1','0','0','0','0','0','0',    '0','0','0','0','0','0','0','0'}, // 1 10000 0000000000 = -2
            {'1','1','1','1','1','1','0','0',    '0','0','0','0','0','0','0','0'}  // 1 11111 0000000000 = -infinity
    };

Verify the floating point value you compute agrees with the value shown in the comment. You will need to convert each character bit string into a 16-bit value encoded in an unsigned short. Based on the sign, exponent, and fraction bits in the unsigned short, compute and output the encoded floating-point value. For ±∞, output the string “infinity” or “-infinity”. After you have the test bitstring values correctly computed, modify your program to accept two octets from the command line and then display the floating point value. 

Example:

    $ FP16/Debug/FP16.exe 00111011 11111111
    00111011 11111111 = 0.999511718750

If the user supplies only one octet or more than two octets, print a usage string. 

Example:

    $ FP16/Debug/FP16.exe 00111011 11111111 01010101
    usage: FP16 <msb> <lsb>

    $ FP16/Debug/FP16.exe 00111011
    usage: FP16 <msb> <lsb>
