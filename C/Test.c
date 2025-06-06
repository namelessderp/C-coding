#include <stdio.h>


void test_num(int num, char myLetter,float num2){
    char letter = 'A';
    int num3 = 50,num4 = 20;
    double num5 = 13.555555555;
    int total = num + num3 + num4;
    int number1 = 9.99;
    float number2 = 10;
    printf("%i\n",num);
    printf("%c\n",letter);
    printf("%c\n",myLetter);
    printf("\n");
    printf("The sum is : %i \n",num + 10); // put %d at the end of the print statement
    printf("The total sum is : %i\n",total);
    printf("\n");
    printf("Double : %lf\n",num5);
    printf("Double with formatting to 1 dp: %.1lf\n",num5); // %.1lf
    printf("Float :%f\n",num2);
    printf("Float with formatting to 2 dp:%.2f\n",num2); // %.2f
    printf("\n");
    printf("Number 1 : %i\n",number1);//gives 9, not 10. Integer does not round up
    printf("Number 2 : %f\n",number2);//Adds dp behind the number
}

void test(char alpha, int num){
    printf("The number is %d\n",num);
    printf("The character is %c\n",alpha);
}


int main(){
    printf("Hello World!\n");
    printf("They call him 'Johnny'.\n");
    printf("They call her \"Alice\".\n"); // Notice the difference between the open inverted commas for Jonny and Alice.
    test('A',10);
    // test_num(2,'H',13.1111);
    return 0;
}