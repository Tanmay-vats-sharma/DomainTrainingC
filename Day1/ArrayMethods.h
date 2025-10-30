#include <stdio.h>

void swap(int *a, int *b){
     int temp = a;
     a = b;
     b = temp;
}

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

void deleteAtLoc(int loc, int arr[], int len){
     for(int i=loc; i<len; i++){
      arr[i]=arr[i+1];
     }
}

void max(int n, int arr[]){
     int temp;
     int m= arr[0];
     for(int i=0; i<n; i++){
      if(m<arr[i]){
         m=arr[i];        
      }
     }
     printf("Max Element is %d",m);
}

int partition(int low,int high,int arr[]){
   int pivot = arr[low];
   int i=low;
   int j=high;

   while(i<j){
      while(arr[i]<=pivot){
         i++;
      }
      while(arr[j]>pivot){
         j--;
      }
      if(i<j){
         swap(&arr[i],&arr[j]);
      }
   }
   swap(&arr[low],&arr[j]);
   return j;
}
void quickSort(int low,int high,int arr[]){
   if(low<high){
      int pi = partition(low,high,arr);
      quickSort(low,pi-1,arr);
      quickSort(pi+1,high,arr);
   }
}

