#include<stdio.h>

int main(){
    
    char a[10];
    int i=0;
    printf("Enter any String:");
    gets(a);
    while (*(a+i)!='\0')
    {
        i++;
    }
    printf("The Length of character is %d",i);
    

}