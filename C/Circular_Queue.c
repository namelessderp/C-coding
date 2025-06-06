#include <stdio.h>
#include <string.h>
#include <stdlib.h> //use malloc

//void is procedure, int/char is function

struct CircularQueue cq; // global struct cq

struct CircularQueue{
    char * queue[5*sizeof(char)]; //to store strings
    int front;
    int rear;
}; // rmb out semi collans to end struct


int isEmpty(){
    if (cq.front == -1){
        return 1;
    }
    return 0;
}

int isFull(){
    int size = sizeof(cq.queue)/sizeof(cq.queue[0]);
    if ((cq.front == 0 && cq.rear == size - 1) || (cq.front -1 == cq.rear)){
        return 1;
    }
    return 0;
}

void enqueue(char name[]){
    int size = sizeof(cq.queue)/sizeof(cq.queue[0]);
    if (isFull() == 1) {
        printf("Ciruclar Queue is full.\n");
    }
    else{
        if (isEmpty() == 1){
            cq.front = 0;
            cq.rear = 0;
            cq.queue[cq.rear] = name; 
        }
        else{
            cq.rear = (cq.rear+1)%size;// to loop
            cq.queue[cq.rear] = name;  
            
        }

    }
}

void dequeue(){
    int size = sizeof(cq.queue)/sizeof(cq.queue[0]); // to loop
    if (isEmpty() == 1){
        printf("Circular Queue is empty. Nothing to dequeue.\n");
    }
    else{
        if (cq.front == cq.rear){ // if removing final person
            cq.queue[cq.front] = "";
            cq.front = -1;
            cq.rear = -1;
        }
        else{
            cq.queue[cq.front] = "";
            cq.front = (cq.front+1)%size;//to loop
        }
    }

}

void display(){
    int i;
    int size = sizeof(cq.queue)/sizeof(cq.queue[0]);
    if (isEmpty()==1){
        printf("No one is in queue.\n");
    }
    else{
        for (i=0;i<size;i++){
        printf("In Queue : %s\n",cq.queue[i]);
    }
    }

}


int main(){
    cq.front = -1;// must initialise pointers in main function for c, fort python is in class itself
    cq.rear = -1;
    // display();
    enqueue("John");
    enqueue("Mary");
    enqueue("Terry");
    enqueue("Tom");
    enqueue("Lily");
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    // dequeue();
    // enqueue("Harry");
    // dequeue();
    // enqueue("King");
    // dequeue();
    // dequeue();
    // dequeue();
    // enqueue("Pig");
    // enqueue("Xiao Ming");
    // enqueue("Da Ming");
    // dequeue();
    dequeue(); // trying to dequeue empty queue
    enqueue("John");
    dequeue();
    display();
    return 0;

}