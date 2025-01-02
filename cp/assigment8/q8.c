#include<stdio.h>
int getsum(int* ,int);
int main(){
    int sum,n,a[10];
    printf("Enter the dimension of array");
    scanf("%d",&n);
    printf("Enter the element of array");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        
    }
    printf("The element of array are ");
     for(int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
        
    }
    sum=getsum( a,n);
    printf("The sum of element of array is %d",sum);

}
    int getsum(int *a,int n){
 
    int sum=0;
    for (int i = 0; i < n; i++)
    {

        sum=sum+*(a+i);
        
    }
    return sum;
    
    
    
}