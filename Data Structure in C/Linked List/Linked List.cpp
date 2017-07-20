#include <cstdlib>
#include <stdio.h>

using namespace std;

// structure named node to hold each node
struct Node{
  int data;  
  // next of linked this holds next node
  struct Node* next;
};

struct Node* head = NULL;

/**
 * this inserts a node in the end
 * @param value
 */
void insert(int value){
//    pointer of Node
    struct Node* temp;
    // allocating memory for the pointer in the heap memory
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    // next node is as there is no next node
    temp->next = NULL;
    if(head == NULL) {
        // newly creted note will be head if the list is empty
        head = temp;
    } else{
        struct Node* tempNext;
        tempNext = head;
        while(tempNext->next != NULL){
            // traversing until found last node
            tempNext = tempNext->next;
        }
        //setting newly inserted node to next of the last node
        tempNext->next = temp;
    }
}

/**
 * This inserts a node at head.
 * @param value
 */
void insertIntoHead(int value){
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = head;
    head = temp;
    
}
/**
 * deletes a node from given position
 * @param position
 */
void deleteNode(int position){
    if(position == 1){
        struct Node* temp;
        temp = head;
        head = temp->next;
        free(temp);

    } else{
        struct Node* temp1;
        temp1 = head;
        
        for(int i = 1; i <= position - 2; i++){
            temp1 = temp1->next;
        }
        
        struct Node* temp2;
        temp2 = temp1->next;
        temp1->next = temp2->next;        
        free(temp2);
    }
}

/**
 * prints the whole linked list
 */
void printLikedList(){
    struct Node* temp;
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(int argc, char** argv) {

    
    insertIntoHead(1);
    insertIntoHead(4);
    insertIntoHead(5);
    printLikedList();
  
    deleteNode(1);
    deleteNode(2);
    printLikedList();
    
    return 0;
}

