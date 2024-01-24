#include<stdio.h>
#include<stdlib.h>
int main(){

    //for clear output console screen
    clrscr();

    int i, j, temp, arr[10];
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("enter the arrays elemets");
    for(i=0; i<n; i++){
        scanf("%d\t", &arr[i]);
    }

    //for insertion sort using while loop
    for(k=0; k<n; i++){
        temp = arr[k]
        j = k-1;
        while(j>=0 && temp <= arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }

    printf("sorted order elements");
    for(i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }

    getch();
    return 0;
}