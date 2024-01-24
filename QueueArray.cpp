#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void insert();
void delete();
void show();
int arr[MAX];
int front = -1, rear = -1;
void main(){
    printf("----------Queue using Array----------");
    int choice;
    while(1){
        printf("\n------------choice------------\n");
        printf("\n1. Insert\n2. Delete\n3. Show\n4. Exit\n");
        printf("Enter your choice number\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            show();
            break;
            case 4:
            printf("existing....");
            exit(0);
            break;
            default:
            printf("pls enter valid choice\n");
            break;
        }
    }
}
void insert(){
    int val;
    if(rear == MAX - 1){
        printf("\n Queue is overflow\n");
    }
    else{
        if(front == -1)
        front = 0;
        printf("\nenter value to insert in queue\n");
        scanf("%d", &val);
        rear = rear + 1;
        arr[rear] = val;
    }
}

void delete(){
    if(front == -1 || front > rear){
        printf("\nQueue is underflow\n");
        return;
    }
    else{
        printf("Element deleted from queue is : %d\n", arr[front]);
        front = front + 1;
    }
}

void show(){
    if(front == -1){
        printf("\n queue is empty\n");
    }
    else{
        printf("\n ------queue is ---------\n");
        for(int i=front; i<=rear; i++){
            printf("%d\t", arr[i]);
        }
    }
}