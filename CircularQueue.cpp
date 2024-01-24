#include <stdio.h>
#include <stdlib.h>
#define SIZE 2

int arr[SIZE];
int front = -1, rear = -1;

void enqueue(int data);
int dequeue();
int isFull();
int isEmpty();
void show();

void main(){
    printf("----------Queue using LinkedList----------");
    printf("\n------------choice------------\n");
    printf("\n1. Enqueue\n2. Dequeue\n3. Full\n4. Empty\n5. Show\n6. Exit\n");
    int choice, val;
    while(1){
        printf("\nEnter your choice number\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter queue value ");
            scanf("%d", &val);
            enqueue(val);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            if(isFull() == 1){
                 printf("\n Queue is full\n");
            }
            else{
                printf("\n Queue is not full\n");
            }
            break;
            case 4:
            if(isEmpty() == 1){
                 printf("\n Queue is empty\n");
            }
            else{
                printf("\n Queue is not empty\n");
            }
            break;
            case 5:
            show();
            break;
            case 6:
            printf("existing....");
            exit(0);
            break;
            default:
            printf("pls enter valid choice\n");
            break;
        }
    }
}

int isFull(){
    if((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
    return 0;
}

int isEmpty(){
    if(front == -1 ) return 1;
    return 0;
}

// Adding an element
void enqueue(int element) {
  if (isFull())
    printf("\n Queue is full!! \n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    arr[rear] = element;
    printf("\n Inserted -> %d", element);
  }
}

// Removing an element
int dequeue() {
  int element;
  if (isEmpty()) {
    printf("\n Queue is empty !! \n");
    return (-1);
  } else {
    element = arr[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    // Q has only one element, so we reset the 
    // queue after dequeing it. ?
    else {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}

void show() {
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Front -> %d ", front);
    printf("\n Array Items -> ");
    for (int i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%d ", arr[i]);
    }
    // printf("%d ", arr[i]);
    printf("\n Rear -> %d \n", rear);
  }
}
