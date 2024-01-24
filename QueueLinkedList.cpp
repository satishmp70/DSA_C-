#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *ptr;
}*front, *rear, *temp, *front1;

int frontElement();
void enqueue(int data);
void create();
void dequeue();
void isEmpty();
void show();
void queueSize();

int count = 0;

void main(){
    printf("----------Queue using LinkedList----------");
    printf("\n------------choice------------\n");
    printf("\n1. Enqueue\n2. Dequeue\n3. Front Element\n4. Empty\n5. Queue Size\n6. Show\n7. Exit\n");
    int choice, val;
    create();
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
            if (frontElement() != 0)
                printf("Front element : %d", frontElement());
            else
                printf("\n No front element in Queue as queue is empty");
            break;
            case 4:
            isEmpty();
            break;
            case 5:
            queueSize();
            break;
            case 6:
            show();
            break;
            case 7:
            printf("existing....");
            exit(0);
            break;
            default:
            printf("pls enter valid choice\n");
            break;
        }
    }
}

void create()
{
    front = rear = NULL;
}
 
/* Returns queue size */
void queueSize()
{
    printf("\n Queue size : %d", count);
}
 
/* Enqueing the queue */
void enqueue(int val)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->data = val;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->data = val;
        temp->ptr = NULL;
 
        rear = temp;
    }
    count++;
}
 
/* Displaying the queue elements */
void show()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->data);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->data);
}
 
/* Dequeing the queue */
void dequeue()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->data);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->data);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
 
/* Returns the front element of queue */
int frontElement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->data);
    else
        return 0;
}
 
/* Display if queue is empty or not */
void isEmpty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}