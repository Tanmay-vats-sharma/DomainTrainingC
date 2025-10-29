#include <stdio.h>

void traversel(int n, int arr[]){
    for(int i=0; i<n; i++){
       printf("index[%d]:%d\n",i,arr[i]);
    }
}

void reverse(int n, int arr[]){
    int temp;
    for(int i=0; i<n/2; i++){
       temp = arr[i];
       arr[i]=arr[n-i-1];
       arr[n-i-1]=temp;
    }
}

void insertAtLoc(int item, int loc, int arr[],int len){
     printf("inserting %d at location %d\n",item,loc);
     for(int i=len; i>=loc-1; i--){
        arr[i+1]=arr[i];
     }
     arr[loc-1]=item;
}