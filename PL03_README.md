# CompE160-Projects
Project made in class based on the week's lesson.

Program Specifications. Develop a program using the Eclipse or Visual Studio Code IDE to calculate a course grade given points for homework, quizzes, midterm exam, and final exam. Grades are calculated differently for undergrads, grads and distance learners. 

Note: this program is designed for incremental development. Complete each step and verify algorithm correctness before starting the next step.

Step 1. Read from standard input student status (string), homework points, quiz points, midterm exam score, and final exam score (double). Valid student status includes undergrad (UG), grad (G), and distance leaner (DL). Calculate each category average using maximum points for homework (800), quizzes (400), midterm exam (150), and final exam (200). Output an error message if student status is not one of the three options. Otherwise, output category averages as a percentage using printf("Homework: %.1f%%\n", homework).

Ex: If the input is:

    UG  600.0  300.0  120.0  185.0
The output is:

    Homework: 75.0%
    Quizzes: 75.0%
    Midterm: 80.0%
    Final Exam: 92.5%
Ex: If the input is:

    TL 600 300 120 180
The output is:

    Error: student status must be UG, G or DL

Step 2. Set any average to 100% if average is above 100%.

Ex: If the input is:

    UG  700.0  300.0  200.0  205.0
The output is:

    Homework: 87.5%
    Quizzes: 75.0%
    Midterm: 100.0%
    Final Exam: 100.0%

Step 3. Calculate the course average based on student status using the table below. Output the course average.

    Category	UG	G	DL
    Homework	20%	15%	5%
    Quizzes	        20%	5%	5%
    Midterm	        30%	35%	40%
    Final Exam	30%	45%	50%

Ex: If the input is:

    G   800.0   400.0   100.0   100.0
The output is:

    Homework: 100.0%
    Quizzes: 100.0%
    Midterm: 66.7%
    Final Exam: 50.0%
    G average: 65.8%

Step 4. Identify the course letter grade based on the course average using the table below. Output the course letter grade.

    Average	Grade
    at least 90.0	                        A
    at least 80.0 and less than 90.0	B
    at least 70.0 and less than 80.0	C
    at least 60.0 and less than 70.0	D
    less than 60.0	                        F

Ex: If the input is:

    DL  600.0  300.0  120.0  150.0
The output is:

    Homework: 75.0%
    Quizzes: 75.0%
    Midterm: 80.0%
    Final Exam: 75.0%
    DL average: 77.0%
    Course grade: C
 
Demonstrate your program to your TA during your laboratory session who will then assign you a grade in Canvas.
