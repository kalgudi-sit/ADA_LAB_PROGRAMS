#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int partition(int arr[],int low,int high) {
    int i = low, j = high+1, pivot = arr[low], temp;
    while(i<j){
        do{
            i += 1;
        }while(arr[i]<=pivot);
        do{
            j -= 1;
        }while(arr[j]>pivot);
        if(i<=j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quick_sort(int arr[],int low,int high) {
    if(low<high) {
        int part = partition(arr,low,high);
        quick_sort(arr,low,part-1);
        quick_sort(arr,part+1,high);
    }
    return;
}

int main() {
    int arr[10] = {12,90,83,45,32,64,17,26,56,48};
    for(int i = 0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSORTED ARRAY\n");
    quick_sort(arr,0,9);
    for(int i = 0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}