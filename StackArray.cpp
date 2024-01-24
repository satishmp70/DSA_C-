#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stack[100], n, top =-1, i, j, choice;
void push();
void pop();
void show();

void main(){

    printf("Enter the number of elements in stack \n");
    scanf("%d", &n);
    printf("-----------Stack Operation-------------\n");
    while(choice != 4){
        printf("\n------------choice------------\n");
        printf("\n1. Push\n2. Pop\n3. Show\n4. Exit\n");
        printf("Enter your choice number\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("Existing....");
                break;
            }
           default : 
           {
               printf("pls enter valid choice\n");
               break;
           }
        }
    }
}
void push(){
    int val;
    if(top == n-1){
        printf("\nstack is overflow\n");
    }
    else{
        printf("Enter the value in stack \n");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}

void pop(){
    int val;
    if(top == -1){
        printf("\nstack is underflow\n");
    }
    else{
        top--;
    }
}

void show(){
    for(i=top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
    if(top == -1){
        printf("\n stack is empty\n");
    }
}