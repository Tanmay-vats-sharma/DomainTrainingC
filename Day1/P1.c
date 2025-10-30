#include <stdio.h>
#include "ArrayMethods.h"
int arr[50];



void main(){
    int n;
    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);
    printf("Enter the Elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    // printf("Reversing the Array:\n");
    // reverse(n,arr);
    traversel(n,arr);
    // max(n,arr);
    // int len = sizeof(arr)/sizeof(arr[0]);
    // insertAtLoc(6,1,arr,len);
    // deleteAtLoc(1,arr,len);
    // traversel(n,arr);
    // reverse(n+1,arr);
    
    quickSort(0,n,arr);
    traversel(n,arr);

}

