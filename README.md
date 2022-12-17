Using the Eclipse or VSCode IDE, complete the recursive function ReverseString() that takes in a string as a parameter and returns the string in reversed order. The main function is provided to read a string from the user and call the ReverseString() function. Assume the input string has a maximum of 20 characters.

Hint: The program declares a pointer to a char array, which is directly manipulated by the ReverseString() function. Move the first character to the end of the returning string and pass the remaining sub-string to the next ReverseString() function call. Since C does not have a sub-string function, a sub-string can be formed by assigning a char pointer to the first character of the sub-string. A string must end with a null character ('\0').

Ex: If the input of the program is:

    Hello
    the ReverseString() function returns and the program outputs:

    Reversed: olleH
Ex: If the input of the program is:

    Hello, world!
    the ReverseString() function returns and the program outputs:

    Reversed: !dlrow ,olleH
Here is the starter code to import into Eclipse or VSCode:

    #include <stdio.h> 
    #include <string.h>

    char* ReverseString(char* stringToReverse) {
       /* TODO: Complete recursive ReverseString() function here. */

    }

    int main(void) {
       char inStr[50];
       char* resultStr;
   
       fgets(inStr, 20, stdin);
       strtok(inStr, "\n");  // Remove newline character from input.
       resultStr = ReverseString(inStr);
       printf("Reversed: %s\n", resultStr);

       return 0;
    }
