# CompE160-Projects
Project made in class based on the week's lesson.

Step 0. Declare and initialize an array with integers from input in an unsorted order. The first value indicates how many integers are to follow and be placed in the array.

Step 1. Use a loop to process each array element and output the minimum and maximum values.

Ex: If input is:

    6
    4 1 5 4 99 17
the output is:

    Minimum: 1
    Maximum: 99
Step 2. Use a loop to sum all array elements and calculate the mean (or average). Output the mean with one decimal place using printf("Mean: %.1f\n", mean);.

Ex: If input is:

    6
    4 1 5 4 99 17
the output is:

    Minimum: 1
    Maximum: 99
    Mean: 21.7
Step 3. Read from input the values into the same array but in an ascending order. Identify the median. The median is located in the middle of the array if the array's size is odd. Otherwise, the median is the average of the middle two values. Output the median with one decimal place. Note: The array is read two times, an unsorted array for Step 1 and Step 2 and a sorted array for Step 3 and Step 4.

Ex: If input is:

    6
    5 7 2 6 2 7
    2 2 5 6 7 7
the output is:

    Minimum: 2
    Maximum: 7
    Mean: 4.8
    Median: 5.5
Step 4. Identify the mode of the sorted array. The mode is the value that appears most frequently. Assume only one mode exists.

Ex: If input is:

    9
    4 2 3 2 6 1 3 2 5
    1 2 2 2 3 3 4 5 6
The output:

    Minimum: 1
    Maximum: 6
    Mean: 3.1
    Median: 3.0
    Mode: 2
Demonstrate your program to your TA during your laboratory session who will then assign you a grade in Canvas.
