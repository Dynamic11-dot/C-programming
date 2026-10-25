#include<stdio.h>

int main(){
    int a;
    char ch = 'a'; // ch now contains a 
    ch = 'c'; // ch now contains c
    ch = '\n'; // ch now conatins \n
    // but i never used/printed ch so its just garbage.
    printf("Hey i used escape\n sequence characters.");
    return 0;
}