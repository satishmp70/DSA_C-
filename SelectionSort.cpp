#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){

    //for clear output console screen
    clrscr();
    int i, j, arr[10], temp;
    printf("enter the size\n");
    scanf("%d", &n);
    printf("enter the array elements\n");
    for(i=0; i<n; i++){
	scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        pos = smallestElement(arr, n, i);
        temp = arr[i];
        a[i] = a[pos];
        a[pos] = temp;
    }

    printf("sorted order elements");
    for(i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
int smallestElement(arr[], int n, int i){
    int small, pos;
    small = a[i];
    pos = i;
    for(int j=0; j<n; j++){
        if(arr[j] < small){
            small = arr[j];
            pos = j;
        }
    }
    getch();
    return 0;
}

