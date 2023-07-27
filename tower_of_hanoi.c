#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void TOH(int n,char a,char b,char c) {
    if(n>1) {
        TOH(n-1,a,c,b);
        printf("Move the disc from %c to %c\n",a,c);
        TOH(n-1,b,a,c);
        return;
    }
    else {
        printf("Move the disc from %c to %c\n",a,c);
        return;
    }
    return;
}

int main() {
    int n;
    printf("Enter the number of discs : ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;
}