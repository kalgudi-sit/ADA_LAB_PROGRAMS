#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main() {
    int arr[10] = {12,90,83,45,32,64,17,26,56,48};
    for(int i = 0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n SORTED ARRAY\n");
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++) {
        int index = i;
        for(int j=i;j<sizeof(arr)/sizeof(arr[0]);j++) {
            if(arr[j]<arr[index]){ index = j; }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i = 0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}