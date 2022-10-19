# CompE160-Projects
Project made in class based on the week's lesson.

Given a positive integer n, the following rules will always create a sequence that ends with 1, called the hailstone sequence:

If n is even, divide it by 2
If n is odd, multiply it by 3 and add 1 (i.e. 3n +1)
Continue until n is 1
Write a program using the Eclipse or Visual Studio Code IDE that reads an integer as input and prints the hailstone sequence starting with the integer entered. Format the output so that ten integers, each separated by a tab character (\t), are printed per line.

The output format can be achieved as follows:

    printf("%d\t", n);

Ex: If the input is:

    25
the output is:

    25   76   38   19   58   29   88   44   22   11 
    34   17   52   26   13   40   20   10   5    16 
    8    4    2    1
