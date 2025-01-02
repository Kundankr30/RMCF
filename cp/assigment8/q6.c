#include<stdio.h>
int fac(int);
int main()
{
    int num;
    int factorial;
    printf("Enter a Number:");
    scanf("%d",&num);
    factorial=fac(num);
    printf("The factorial of %d is %d",num,factorial);
}
int fac(int num){
 
 int factorial;
if(num==1||num==0)
return(1); 
else
factorial=num*fac(num-1);
return factorial;


}