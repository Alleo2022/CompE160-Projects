Consider the following simple code that maintains two counters, unsigned int k and float x. Implement this code in your IDE, then modify this code to print out values for k and x. Intuitively, you would expect k and x to maintain numerical equality for loop duration. What do you observe? What is the first value of k that does not equal x? You can find this value when abs(k-(unsigned int)x) is not 0. Using the factorization method shown in class on Monday 12/5, find the IEEE-754 binary representation of the first value of x != k. Show your derivation (on paper) to your TA and explain to your TA why x != k. Second, modify the loop upper bound to be k <= UINT_MAX. Why does the modification of < to <= result in an infinite loop? Explain your reasoning to your TA for full credit on this assignment.

    #include <stdio.h>
    #include <stdlib.h>
    #include <limits.h>
    #include <math.h>

    int main(void) {
        float x = 0;
        for(unsigned int k = 0; k < UINT_MAX; ++k) {
           x = k;
        }
        return EXIT_SUCCESS;
    }
