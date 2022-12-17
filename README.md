For this programming assignment you will read two binary strings from the command line, each of length 32 characters (either '0' or '1').  

Example program invocation:

    ./bitmanip 00000000000000001000001000110101 11111111111111101101000000101111
    
Your program is to read the second and third arguments from the command line and set two unsigned integer variables with the binary equivalent of the two bit-strings. Your program is then to use bitwise AND, OR, and XOR to output bit-strings that represent the output of applying these three operators on both unsigned integer variables. For each output, separate octets (groups of 8 bits) by spaces and output the number of enabled (value == 1) bits in parentheses. 
Here is an example:

    ./bitmanip 00000000000000001000001000110101 11111111111111101101000000101111
    AND: 00000000 00000000 10000000 00100101 (4)
    OR : 11111111 11111110 11010010 00111111 (25)
    XOR: 11111111 11111110 01010010 00011010 (21)
