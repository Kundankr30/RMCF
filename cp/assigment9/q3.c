//copy one string to another string;
#include<stdio.h>
int main(){
    char target[20],source[10];
    int i=0;
    printf("Enter the String:");
    gets(source);
    while (*(source+i)!='\0')
    {
        *(target+i)=*(source+i);
        i++;

        
    }
    *(target+i)='\0';
    printf("The Target array becomes %s",target);
    
}