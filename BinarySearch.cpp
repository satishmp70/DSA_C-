#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
    int n, i, *arr, target;
    int start, end;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //initialize start and end point
    start = 0;
    end = n - 1;

    printf("Enter the target element: ");
    scanf("%d", &target);

    // Binary search
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            break;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        if(start > end){
            printf("Element not found");
        }
    }
    getch();
    return 0;
}
