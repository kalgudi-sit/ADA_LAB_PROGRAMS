#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void merge(int arr[],int low,int mid,int high) {
    int temp[high - low + 1];
    int i = low, j = mid + 1, k = 0;
    while(i<=mid && j<=high) {
        if(arr[i]<arr[j]) {
            temp[k] = arr[i];
            k += 1; i += 1;
        }
        else {
            temp[k] = arr[j];
            k += 1; j += 1;
        }
    }
    while(i<=mid) {
        temp[k] = arr[i];
        k += 1; i += 1;
    }
    while(j<=high) {
        temp[k] = arr[j];
        k += 1; j += 1;
    }
    k = low;
    for(int i=0;i<high-low+1;i++,k++) {
        arr[k] = temp[i];
    }
    return;
}

void merge_sort(int arr[],int low,int high) {
    if(low<high) {
        int mid = (low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    return;
}

int main() {
    int arr[10] = {12,90,83,45,32,64,17,26,56,48};
    for(int i = 0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    merge_sort(arr,0,9);
    for(int i = 0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}