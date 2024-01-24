#include<stdio.h>
#include<conio.h>
int main(){
    
    //for clear output console screen
    clrscr();

    int i, j, n, arr[10], temp;
    printf("enter the size\n");
    scanf("%d", &n);
    
    printf("enter the array elements\n");
    for(i=0; i<n; i++){
	    scanf("%d", &arr[i]);
    }

    //for insertion sorting
    for(i=0; i<n; i++){
	    for(j=0; j<n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
	    }
    }

    printf("sorted the array elements\n");
    for(i=0; i<n; i++){
	  printf("%d\t", arr[i]);
    }

    getch();
    return 0;
}