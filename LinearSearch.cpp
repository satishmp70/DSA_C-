#include <stdio.h>
#include <stdbool.h>

int main() {

    //for clear output console screen
    clrscr();
    
    int n, i, *arr, target;
    bool flag = false; 
    
    //for dynamic arrays size
    arr = (int *)malloc(n * sizeof(int));
    
    printf("Enter the target element: ");
    scanf("%d", &target);
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    // Linear search
    for(i=0; i<n; i++){
        if(arr[i] == target){
            flag = true;
            printf("Element found at index %d\n", i);
            break;
        }
    }
    
    if(!flag){
        printf("Element not found\n");
    }
    getch();
    return 0;
}
