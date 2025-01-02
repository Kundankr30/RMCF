#include<stdio.h>
int getsum(int);
int main(){
    int n;
    int sum;
    printf("Enter a Number:");
    scanf("%d",&n);
    sum=getsum(n);
    printf("The sum of digits of number %d is %d",n,sum);
}
int getsum(int n){
int sum;
while (n!=0)
{
 sum=n%10+getsum(n/10);
 return(sum);
}



}
