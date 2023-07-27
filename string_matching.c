#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

// String matching program

int main() {
    char text[] = "my name is Abhishek kalgudi";
    printf("Size of the text : %d\n", sizeof(text)/sizeof(text[0])-1);
    char pattern[] = "name";
    printf("Size of the pattern : %d\n", sizeof(pattern));
    for(int i=0;i<(sizeof(text)/sizeof(text[0]))-1;i++) {
        int j = 0;
        while(text[i+j]==pattern[j] && j<(sizeof(pattern)/sizeof(pattern[0]))-1) {
            j += 1;
        }
        if(j==(sizeof(pattern)/sizeof(pattern[0]))-1) { printf("The string found at position : %d\n", i ); }
    }
    printf("The pattern was not found in the given text.\n");
    return 0;
}