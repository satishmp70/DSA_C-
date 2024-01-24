
#include<stdio.h>
#include<conio.h>
int main(){

    //clear console in output screen
    clrscr();

    int i, j, n, arr[10], temp;
    printf("enter the size\n");
    scanf("%d", &n);
    
    printf("enter the array elements\n");
    for(i=0; i<n; i++){
	    scanf("%d", &arr[i]);
    }

    //for bubble sort
    for(i=0; i<n; i++){
	    for(j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
