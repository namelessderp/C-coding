#include <stdio.h>
void game(){
    char p1[20] = "";
    char p2[20] = "";
    printf("This is a rock paper scissors game.\n");
    printf("Player 1, please enter your choice (Rock/Paper/Scissors) :");
    scanf("%s",p1);
    printf("Player 2, please enter your choice (Rock/Paper/Scissors) :");
    scanf("%s",p2);
    if (p1 == "Rock" && p2 == "Scissors" || p1 == "Paper" && p2 == "Rock" || p1 == "Scissors" || p2 == "Paper"){
        printf("Player 1 wins.");
    }
    else if (p1 == p2){
        printf("Draw");
    }
    else{
        printf("Player 2 wins.\n");
    }
    printf("Player 1 choice is %s and Player 2 choice is %s.",p1,p2);
}


int main(){
    game();
    return 0;
}
