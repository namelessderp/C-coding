#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h> // to use malloc

//Linear Queue, FIFO. This code doesnt allow rejoining of queue

struct Queue q; //structure of Queue ,global variable, just put outside of function

struct Queue {
    char *queue[5*sizeof(char)]; //queue can only fit 5 people at a time
    int front;
    int rear;
    
};

int isEmpty(){
    if (q.front == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    int length = (sizeof(q.queue)/sizeof(q.queue[0])) -1;
    if (q.rear == length){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(char name[]){
    if (isFull() ==1) {
        printf("Queue is full.\n");
    }
    else {
        if (q.front == -1){
            q.front = q.rear = 0; //same values multi variable in C way to type it
            q.queue[q.front] = name;
            }
        else{
            q.rear += 1;
            q.queue[q.rear] = name;
        }
    }
}

void dequeue(){ //affects pointers only
    if (isEmpty() == 1){
        printf("Queue is empty. Nothing to dequeue\n");
    }
    else{
        if (q.front == 0 && q.rear == 0){
            q.front = q.rear = -1;
            
        }
        else{
            q.front +=1; //new queue sequence
        }

    }
}

int main(){
    int i = 0;
    q.front = q.rear = -1; // this value will be global since struct Queue is global 
    q.queue[0] = "";
    q.queue[1] = "";
    q.queue[2] = "";
    q.queue[3] = "";
    q.queue[4] = "";
    enqueue("John");
    enqueue("Mary");
    enqueue("Terry");
    enqueue("Tom");
    enqueue("Lily");
    enqueue("Harry");
    dequeue();

    for (i = 0;i<(sizeof(q.queue)/sizeof(q.queue[0]));i++){
        printf("In queue : %s\n",q.queue[i]);
    }
    printf("Is queue empty ? :%i\n",isEmpty());
    printf("Is queue full ? : %i\n",isFull());
    return  0;
}