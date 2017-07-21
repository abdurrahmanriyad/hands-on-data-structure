
#include <stdio.h>
#include <stdlib.h>

int stack[10];
int top = -1;

void push(int value){
    if(top == 10){
        printf("Error: Stack is full!!");
        return;
    } 
    stack[++top] = value;
}

void pop(){
    if(top == -1){
        printf("Error: Stack is empty!!");
        return;
    } 
    top--;
}

void printTop(){
    if(top == -1){
        printf("Empty stack yet\n");
    } else{
        printf("Top is :%d\n", stack[top]);
    }
}

void printStack(){
    if(top != -1){
        for(int i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
    } else{
        printf("Empty Stack\n");
    }
    printf("\n");
}
int main(int argc, char** argv) {
    
    push(1);
    push(15);
    push(120);
    printStack();
    printTop();
    
    pop();
    printStack();
    printTop();
    
    return (EXIT_SUCCESS);
}

