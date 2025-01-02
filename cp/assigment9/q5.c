//XSTREN TO FIND LENGTH OF AN ARRAY
#include<stdio.h>
int XSTREN(char*);
int main(){
    char a[10],length;
    printf("Enter any string:");
    gets(a);
    length=XSTREN(a);
    printf("The length of string is %d",length);
}
int XSTREN(char*a){
    int i=0;
    while (*(a+i)!='\0')
    { i++;
    }
    return i;
    
}