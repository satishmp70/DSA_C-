#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

//intialize empty list
struct Node *top = NULL;
void push(int);
void pop();
void show();

void main(){
    int val, choice;
    printf("\nstack using linkedlist \n");
    while(1){
        printf("\n------------choice------------\n");
        printf("\n1. Push\n2. Pop\n3. Show\n4. Exit\n");
        printf("Enter your choice number\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the value to push \n");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Existing....");
                exit(0);
                break;
           default : 
               printf("pls enter valid choice\n");
               break;
        }
    }
}
void push(int value){
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(top == NULL){
        newNode->next = NULL;
    }
    else{
        newNode->next = top;
    }

    top = newNode;
    printf("Node is inserted \n");
}


void pop(){
    if(top == NULL){
        printf("\nstack is empty\n");
    }
    else{
       struct Node *temp = top;
       printf("\n element popped : %d \n", temp->data);
       top  = temp->next; // after pop make next node as top
       free(temp);
    }
}

void show(){
    if(top == NULL){
        printf("\n stack is empty\n");
    }else{
        printf("\n-----------stack list ----------\n");
        struct Node *temp = top;
        while(temp->next != NULL){
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("%d--->NULL\n\n", temp->data);
    }
}