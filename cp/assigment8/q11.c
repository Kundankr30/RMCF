#include<stdio.h>
int getsum(int* ,int,int);
int main(){
    int sum,n,a[10],find;
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
    printf("Enter a element which you want to serch");
    scanf("%d",&find);
    sum=getsum( a,n,find);
    if(sum==1){
        printf("The element is present in an array");
    }
    

}
    int getsum(int *a,int n,int find){
 
    
    for (int i = 0; i < n; i++)
    {

      if (*(a+i)==find)
      {
        return 1;
        
      }
      
      
        
    }

    
    
    
}