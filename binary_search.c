#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main() {
    int arr[10] = {12,17,26,32,45,48,56,64,83,90};
    for(int i = 0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the number to search : \n");
    int num;
    scanf("%d",&num);
    int low = 0, high = 9;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]==num) {
            printf("The number %d found at index %d\n", num,mid);
            return 0;
        }
        else if(arr[mid]>num) { high = mid - 1; }
        else if(arr[mid]<num) { low = mid + 1; }
    }
    printf("The given number is not found in the array.\n");
    return 0;
}