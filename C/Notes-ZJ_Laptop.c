#include <stdio.h> //importing files
#include <stdbool.h>
//Notes for C

// char : 1 byte, int : 4 byte, float :4 byte, double : 8 byte, string : depends on number of char.

// void for functions
// name files without spacing.
// remember put ';' after every line

// int,char,float,double,
// when print, %d or %i for int, %c for char, %f for float;, %lf for double
//use %.1f when needing to 1dp, can change number of dp accordingly
// Use single inverted comma('A') when assigning char
// Use double inverted commas("John") when assigning string 
//Use void if procedure and int/char/float/double/string if function

// const variables(int/float/double/string/char) value cannot be changed
// operations : '+','-','*','/','%','++','--'
// booleans : True = 1, False = 0
// if x > y && x>z (&& is and)
// if x > y || x > z (|| is or)
// if !(x > y && x > z) (! reverses the result, if result is true return false)
// use %lu when using sizeof() function to determine no.of bytes for a variable or array or string etc
// bool returns integer, therefore use %d when printing
// do while is while True in python, will execute at least once
// Array is {} in C, and initialising is int myNumbers[] = {1,2,3,4,5} etc
// Initialise 2D array as no.of rows and columns in the 2D array
// \"viking\"adds double quotation in output
// Memory address, printf("%p",&myName); the '&' is very important, int*ptr= &myName (ptr stores memory address of myName)
// Dereference: Output the value of myAge with the pointer (43)  printf("%d\n", *ptr);
// in C, the name of an array, is actually a pointer to the first element of the array.
//struct myStructure is basically OOP, int main() struct myStructure s1 then access from printf(""%s",s1.myName") example
// union same thing. but difference is for struct each variable has own memory address, union shares same address, so for union only can use one variable at a time.
// printf("Value of num : %.2f", num) round to 2dp

  
  
  

void tester(int num){ // put all additional procedures/functions above main functions.

    char greetings[] = "Hello"; // use %s when printing string
    int myNum = 10;
    bool isCGay = true;
    bool imCute = false;
    int val = imCute;
    printf("The number is %d \n",myNum);
    printf("Is %d > %d ? : %d\n",myNum,num,(myNum>=num || myNum > 20)); // when printing, put all variables at the end of the print.
    printf("%lu\n",sizeof(myNum)); // gives size of bytes for variable
    printf("Is C Gay ? %d\n",isCGay);
    printf("Am I cute ? %d\n",val);
    printf("Is %d > %d ? %d",isCGay,imCute,isCGay > imCute);
    
}

int main(){ // main program
    printf("Hello World!\n");
    tester(2); // call functions in main
    // tester(3);
    return 0; // always return 0
}



