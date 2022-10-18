# CompE160-Projects
Projects made in class based on the week's lesson

Program: Pizza party weekend!
Program Specifications. Develop a program using the Eclipse or Visual Studio Code IDE to calculate the cost of hosting three pizza parties on Friday, Saturday, and Sunday. Read from standard input the number of people attending, the average number of slices per person, and the cost of one pizza. Dollar values are output with two decimals. For example, printf("Cost: $%.2f", cost);
Note: this program is designed for incremental development. Complete each step and verify algorithm correctness before starting the next step.

Step 1. Invoke your program from a shell (e.g., Cygwin64 on Windows, Terminal on macOS, or xterm on Linux) and read from standard input the number of people (int), average slices per person (double), and cost of one pizza (double). Calculate the number of whole pizzas needed (8 slices per pizza). There will likely be leftovers for breakfast. Hint: Use the ceil() function found in the math library (reference the C Standard Library PDF uploaded in this Canvas module) to round up to the nearest whole number and convert to an integer. Calculate and output the cost for all pizzas. Verify test 1 passes:

Ex: If the input is:

    10  2.6  10.50
    
The output is:

    Friday Night Party
    4 Pizzas: $42.00

Step 2. Calculate and output the sales tax (7.75% in San Diego). Calculate and output the delivery charge (20% of cost including tax). Verify test 2 passes:

Ex: If the input is:

    10  2.6  10.50
    
The output is:

    Friday Night Party
    4 Pizzas: $42.00 
    Tax: $3.25
    Delivery: $9.05 

Step 3. Calculate and output the total including pizza, tax, and delivery. Confirm test 3 passes:

Ex: If the input is:

    10  2.6  10.50

The output is:

    Friday Night Party
    4 Pizzas: $42.00
    Tax: $3.25
    Delivery: $9.05
    Total: $54.31

Step 4. Repeat steps 1 - 3 with additional inputs for Saturday night (one order per line). Maintain and output a separate total for both parties. Confirm test 4 passes:

Ex: If the input is:

    9   2.5   10.95
    14   3.2   14.95

The output is:

    Friday Night Party
    3 Pizzas: $32.85
    Tax: $2.55
    Delivery: $7.08
    Total: $42.48

    Saturday Night Party
    6 Pizzas: $89.70
    Tax: $6.95
    Delivery: $19.33
    Total: $115.98
    Weekend Total: $158.46 

Step 5. Repeat steps 1 - 3 with additional inputs for Sunday night (one order per line). Maintain and output a total for all parties. Confirm test 5 passes:

Ex: If the input is:

    6   2.8   10.95
    22   2.1   12.95
    12   1.8   14.95

The output is:

    Friday Night Party
    3 Pizzas: $32.85
    Tax: $2.55
    Delivery: $7.08
    Total: $42.48

    Saturday Night Party
    6 Pizzas: $77.70
    Tax: $6.02
    Delivery: $16.74
    Total: $100.47

    Sunday Night Party
    3 Pizzas: $44.85
    Tax: $3.48
    Delivery: $9.67
    Total: $57.99

    Weekend Total: $200.93

Demonstrate your program to your TA during your laboratory session who will then assign you a grade in Canvas.
