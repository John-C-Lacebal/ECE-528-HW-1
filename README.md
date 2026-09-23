# ECE-528-HW-1
Submission for Homework 1 for ECE 528

1.
  a. A compiler translates the entire source code into machine code, while an interpreter translates and executes each statement one at a time.

  b. By default, the output of the main() function is 0.

2. Header files contain C declarations and macro definitions. The #include directive in C is used to insert the content of header files into a program.

3. Declaring and defining a function in C requires the function's name, the function's output's data type, and any input data types. The purpose of the return statement in a function is to terminate the function and send an output to the caller. A function can have multiple return statements, but only one statement will be run per call.

4. Type casting is converting a value's data type into another data type.

int DoubleSumToInt (double a, double b) {
    double sum = a + b;
    return int(sum);
}

5. Local variables are only usable in the function they are declared in, while global variables are declared outside of a function and can be used anywhere in the program. 

EXAMPLE:

int TOTAL_COUNT = 0;

void int ExampleFunction () {
    int increment = 1;
    TOTAL_COUNT = TOTAL_COUNT + increment;
}

In this example, increment is the local variable since it is declared inside a function, and is thus only usable within that function. TOTAL_COUNT is the global variable since it is declared outside a function, and can be used in other functions.

6. In C, a string is declared and initialized as an array of characters. The purpose of the null terminator '\0' is to signal the end of a character string.

7. A pointer is a variable that stores the memory address of another variable. In order to pass pointer to a function, the & operator must be used to indicate that the input is a pointer, and the function must be defined to accept pointers as inputs. Pointers are able to change the original variable, while references only work with a copy of the variable. Also, variables tied to pointers can be set to 'NULL', while references cannot.

8. The * operator returns the value stored at the memory address. The & operator returns the memory address of a variable.

9. A while loop checks if a condition is true before executing the loop body, and repeats that as long as the condition remains true. A do...while loop executes the loop body, then checks if the condition is true before continuing. This ensures that the loop body is executed at least once.

10. A break statement forces an exit from a loop, while a continue statement skips over the current iteration of a loop and starts the next iteration.

11. Bitwise operators are used to perform operations on binary numbers. | (OR) is used to set bits. & (AND) and ~ (NOT) are used to clear bits. ^ (XOR) is used to toggle bits.

12. The PxSEL0 and PxSEL1 registers select the function of the pin being configured. 

P1SEL0 &= ~(BIT0 | BIT7); 
P1SEL1 &= ~(BIT0 | BIT7);

13.

void P1_1_and_P1_4_Int (void) {

    // Configure P1.1 and P1.4 as inputs with pull-up resistors
    P1DIR &= ~(BIT1 | BIT4); 
    P1REN |= (BIT1 | BIT4); 
    P1OUT |= (BIT1 | BIT4); 

}

14.

void Buttons_Init(void) {

    // Configure P3.1 and P3.6 as inputs with pull-down resistors
    P3DIR &= ~(BIT1 | BIT6);   
    P3REN |= (BIT1 | BIT6);    
    P3OUT &= ~(BIT1 | BIT6);   

    // Configure P5.0 and P5.4 as inputs with pull-down resistors
    P5DIR &= ~(BIT0 | BIT4);   
    P5REN |= (BIT0 | BIT4);   
    P5OUT &= ~(BIT0 | BIT4);   

}

15.

void LEDs_Init(void) {

    P7DIR |= 0xFF;   // Configure P7.0 to P7.7 as outputs
    P7OUT &= ~0xFF;  // Initialize P7.0 to P7.7 to 0

}