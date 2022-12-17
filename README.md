In this exercise you will implement the Bubble Sort algorithm to sort arrays of increasing dimension.

Create a new Eclipse or VS Code project for this assignment and create a source file named bubble.c.  Declare array a to hold N=100 integers.  Use a #define to specify the array size.  Initialize the array with random numbers in the range [1,N], inclusive, using the srand, time, and rand functions.  Sort your random N-element array in ascending order using the Bubble Sort algorithm.  During an iteration of the inner loop, where the ith and i+1th elements are compared and swapped if needed, modify the element exchange code shown in red

    if (a[i] > a[i + 1]) {                       
        int hold = a[i];    - in red                              
        a[i] = a[i + 1];    - in red                        
        a[i + 1] = hold;    - in red                          
    }                                       
to instead call a function named swap() that accepts pointers to the two array elements to be exchanged.  The prototype of your swap function should be

    void swap(int *element1Ptr, int *element2Ptr);
Print out the initial random array and the sorted array and visually verify your algorithm is working correctly.

In your code, use counter variables to count the number of (1) comparisons, and (2) exchanges (swaps) performed.  After Bubble Sort finishes sorting the random array, print N and the number of comparisons and exchanges (swaps) performed. 

Next, modify the array size to be different powers of 10, say 104 = 1e4 = 10,000, 1e5 (100,000), and 1e6 (1,000,000), but don’t print the arrays, just print the number of comparisons and exchanges performed.  In your comment header block, explain how the number of comparisons and exchanges varies with N. You will need to run your program several times with each value of N to observe a relationship between N and the number of comparisons and exchanges performed by the Bubble Sort algorithm.
