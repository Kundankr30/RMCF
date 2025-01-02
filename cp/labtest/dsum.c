#include<stdio.h>
int main(){
    int row,col,a[10][10];
    printf("Enter the number of rows and coloums of matrix");
    scanf("%d %d",&row,&col);
    if(row!=col){
        printf("Sum of diagonal Not possible");
        return 0;
    }
    printf("Enter the elemnts of array\n");
    for(int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }


    printf("The Matrix is \n");
     for(int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    
}
