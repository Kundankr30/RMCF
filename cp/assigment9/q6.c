//XSTRCAT TO CONCENACTE
#include<stdio.h>
void XSTRCAT( char*,char*);
int main(){
    char name[60],title[30];
    printf("Enter Your First Name");
    gets(name);
    printf("Enter Your Title");
    gets(title);
    XSTRCAT(name,title);
    
}
void XSTRCAT(char*name ,char*title){
   int i=0,j=0;
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