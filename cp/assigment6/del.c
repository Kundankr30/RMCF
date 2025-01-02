#include<stdio.h>
int main(){
    int a[100],n,in,pos;
    printf("Enter The dimension of the array:");
    scanf("%d",&n);
    printf("Enter %d element of arrya:\n",n);
    for (int i = 0; i <n ;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Array:");
    for (int i = 0; i <n ;i++)
    {
        printf("%d ",a[i]);
    }
    //printf("Enter the number which you want to insert:");
    //scanf("%d",&in);
    printf("Enter The position of Deletion:");
    scanf("%d",&pos);
    
    for (int i = pos-1; i<n-1; i++)
    {
        a[i]=a[i+1];
        
    }

    
    printf("String after Deletion:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    
    
}
