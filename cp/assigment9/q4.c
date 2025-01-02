//concancate//
#include<stdio.h>
int main(){
    char name[100],title[20];
    int i=0,j=0;
    printf("Enter Your first Name:");
    gets(name);
    printf("Enter Your Title:");
    gets(title);
    while(*(name+i)!='\0'){
    
        i++;
    }
    while (*(title+j)!='\0')
    {

        *(name+i)=*(title+j);
        i++;
        j++;
        
    }
    *(name+i)='\0';
    printf("Your Full name is %s",name);
    

}