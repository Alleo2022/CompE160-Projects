In this exercise you will develop a program to numerically integrate a function f(x) over a defined range [a,b]

The two simplest numerical integration methods are the rectangle method and the trapezoid method.  In the rectangle method, one discretizes the range [a,b] and computes the area under the function by summing the individual areas of rectangles that approximate the function f(x)

First, divide the range [a,b] into N intervals on the x-axis, delineated by points, x1, x2, x3, …, xN+1.

In the rectangle method, evaluate the function f(x) at the midpoint of xi and xi+1 to compute the height of the rectangle in the interval xi and xi+1,

The area of a trapezoid is given by: [(a+b)/2]* h

Define two functions,

    double rectangle_method(double a, double b, int N);
    double trapezoid_method(double a, double b, int N);
    
Using these two functions, write a program to integrate the function f(x) = 1/x over the range [1,2], for values of N = 10, 100, 1000, and 10000 and then sum the individual areas of each shape to compute the integral.  Print the result to 13 decimal places using each method.  Solve the integral analytically and print the error for each value of N.
