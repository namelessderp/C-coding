#include <stdio.h>
#include <stdbool.h>

int main(){
    // int myNumbers[] = {1,2,3,4,5,6};
    // char myChars[] = {'A','B','C','D','E','F'};
    // int i;
    // // printf("First number in myNumbers is : %d \n",myNumbers[0]);
    // // printf("First alphabet in myChars is : %c \n",myChars[0]);

    // for (i = 0;i<6;i+=1){
    //     printf("Number at index %d is : %d\n",i,myNumbers[i]);
    //     printf("Character at index %d is : %c\n",i,myChars[i]);
    // }

    // int myNumbers[4];
    int i,j;
    int myNumbers[4][3] = {{1,2,3},{10,20,30},{300,400,500},{4000,5000,6000}}; // 2D array initialisation
    printf("Size of array in terms of bytes: %lu",sizeof(myNumbers));
    for (i = 0;i<sizeof(myNumbers)/12;i+=1){ // sizeof() returns byte. To loop 4x, take (total bytes)/(4*3) which is row x column which gives total number of elements in myNumbers
        printf("\n");
        myNumbers[0][0] = 11; // assign different number at that position.
        printf("List of numbers at index %d : \n",i);
        for (j = 0;j<3;j+=1){
            printf("Number at index %d : %d\n",j,myNumbers[i][j]);
    
        }
    }
    return 0;
}