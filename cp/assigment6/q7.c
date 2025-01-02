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
    printf("Enter the number which you want to insert:");
    scanf("%d",&in);
    printf("Enter The position of insertion:");
    scanf("%d",&pos);
    n++;
    for (int i = n-1; i>=pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=in;
    printf("String after insertion:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    
    
}
