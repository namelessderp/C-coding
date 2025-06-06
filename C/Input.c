#include <stdio.h>

//scanf() can only be used once, so get all input before using scanf. String variables need not put &!!!!!

int main(){
    int myNum;
    char myAlphabet;
    char myString[30];
    // printf("Enter a number : \n");
    // scanf("%d",&myNum);
    printf("Enter a number and alphabet : \n"); // must be in the correct sequence.
    printf("Enter name : \n");
    scanf("%d %c %s",&myNum,&myAlphabet,myString); // must be in this format scanf(type,variable)
    printf("Number is : %d\n",myNum);
    printf("Alphabet is : %c\n",myAlphabet);
    printf("Name : %s",myString);
    return 0;
}