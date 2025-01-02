#include<stdio.h>
#include<stdlib.h>
void matrixmulti(int a[10][10],int b[10][10],int r1,int c1,int r2,int c2);
int main(){
    int a[10][10],b[10][10],r1,c1,r2,c2;
    printf("Enter row and coloumn of first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and coloumn of second matrix:");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2){
        printf("Matrix Multiplication not possible");
        return 0;
        
    }
    printf("Enter %dx%d elements of first matrix:\n",r1,c1);
    for (int  i = 0; i < r1; i++)
    {
        for (int  j = 0; j < c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
        
        
    }
    printf("Enter %dX%d elements of second matrix:\n",r2,c2);
    for (int i = 0; i < r2; i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    matrixmulti(a,b,r1,c1,r2,c2);
}
void matrixmulti(int a[10][10],int b[10][10],int c1,int r2,int r1,int c2){
    int final[10][10]={0};
    
   
    for (int i = 0; i < r1; i++)
    {
        for (int  j = 0; j< c2; j++)
        {
            for ( int k = 0; k< r2; k++)
            {
                final[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
    printf("Final Matrix after matrix multiplication:\n");
    for (int i = 0; i <r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ",final[i][j]);
        }
        printf("\n");
        
    
    }
    
    

}


