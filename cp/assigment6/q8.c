//Selection Sort
#include<stdio.h>
void sort(int a[20],int n);

void sort(int a[20],int n){
    for (int i = 0; i < n-1; i++)
    {
        
        int mini=i;
        for (int j = i+1; j <n; j++)
        {
            if(a[j]<a[mini]){
                mini=j;
            }
            int temp=a[mini];
            a[mini]=a[i];
            a[i]=temp;
            
        }
        
    
    }
    printf("Array after sorting:");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("The second largest element is %d",a[1]);
    
    
}
int main(){
    int a[20],n;
    printf("Enter the dimension of array:");
    scanf("%d",&n);
    printf("Enter %d elements of array:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original Array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]); 
    }
    sort(a,n);
    
}
    



    
    
