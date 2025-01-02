#include<stdio.h>
int getmax(int*,int);
int main(){
    int max,n,a[10];
    printf("Enter The dimension of array:");
    scanf("%d",&n);
    printf("Enter %d elements of array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements of array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);

    }
    max=getmax(a,n);
    printf("The maximum elements present in array is %d",max);
    
    
}
int getmax(int*a,int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(*(a+i)>max)
        max=*(a+i);
    }
    return max;

}