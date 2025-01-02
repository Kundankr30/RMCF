//covert the charcter to upper case//
#include<stdio.h>
int main(){
    char a[10];
    int i=0;
    printf("Enter any String:");
    gets(a);
    while (*(a+i)!='\0')
    {
        if(*(a+i)<'z'||*(a+i)>'a')
        {
            *(a+i)=*(a+i)-32;
        

        }
        i++;
    }
    printf("The String in upper case is %s",a);
    
}
