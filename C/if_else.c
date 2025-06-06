#include <stdio.h>
#include <stdbool.h>

void voting(){
    int voting_Age = 18;
    int age = 9;
    if (age>voting_Age){
        printf("You are eligible to vote!");
    }
    else {
        printf("You are too young to vote.");
    }
}

void greetings(){
    int time = 1759;
    if (time > 1159 && time > 1800 && time >1930 && time <=2359){
        printf("Hello, its night time!");
    }
    else if (time > 1159 && time >=1800 && time < 1930){
        printf("Hello, its evening!");
    }
    else if (time >1159 && time <1800){
        printf("Good afternoon!");
    }
    else if (time <1200 && time >= 600){
        printf("Good morning!");
    }
    else{
        printf("Hello, its midnight!");
    }
}
int main(){
    // voting();
    greetings();
    return 0;
}