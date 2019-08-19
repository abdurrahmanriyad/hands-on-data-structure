#include <stdio.h>
#include <stdlib.h>

int queue[10];
int front = 0;
int rear = -1;
                                                                                                                                                                                                

void enqueue(int value){    
   if(isfull()){
       printf("Error: Queue is full!!");
       return;
   }
   queue[++rear] = value;
}

void dequeue(){
    if(isempty()){
        printf("Error: Queue is empty!!");
    } else{
        front++;
    }
}

int isfull() {
   if(rear == 9)
      return 1;
   else
      return 0;
}

int isempty() {
   if(rear == -1) 
      return 1;
   else
      return 0;
}

int peek() {
   return queue[front];
}

void printQueue(){
    if(rear != -1){
        for(int i = front; i <= rear; i++){
            printf("%d ", queue[i]);
        }
    } else{
        printf("Empty queue\n");
    }
    printf("\n");
}

int main(int argc, char** argv) {

    printQueue();
    enqueue(1);
   
    enqueue(25);
    printQueue();
    
    enqueue(32);
    printQueue();
    
    enqueue(12);
    printQueue();
       
    
    dequeue();
    printQueue();
    
    dequeue();
    printQueue();
    
    return (EXIT_SUCCESS);
}

