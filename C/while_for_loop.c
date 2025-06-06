#include <stdio.h>
#include <stdbool.h>

void whileTest(){
    int i = 0; // will not run if condition is false
    while (i < 5){
        printf("i value now : %d\n", i);
        i+= 1; // or i++
    }
    printf("Successful run 1, i value now : %d\n\n",i);

}   

void doWhileTest(){ // like while True loop, will at least run once even if condition is false
    int i = 100; // notice the value of i is >=10, yet the code still execute once, making value of i to be 102 instead of remaining at 100
    do{
        printf("i value now : %d\n",i);
        i+=2;
    }
    while (i<10);
    printf("Successful run 2, i value now : %d\n\n",i);
}

void forTest(){
    int i;
    int a = 5, b = 3;
    int count = 0;
    for (i = 0; i<5 ;i+=1){ // loops 5 times ,01234
        if (a >= b){
            printf("Yao Wei is handsome \n");
            a -=1;
            b+=1;
        }
        else{
            break;// break out of loop[]
            printf("Yao Wei Chio asf\n");
        }
        printf("i value : %d\n",i);
        count+=1;
    }
    printf("Total number of loops : %d\n",count);
}
int main(){
    whileTest();
    doWhileTest();
    forTest();
    return 0;
}