#include<stdio.h>
void getsum(int a[10][10],int,int);
int main(){
int sum,row,col,a[10][10];
    printf("Enter the number of rows and coloums of matrix");
    scanf("%d %d",&row,&col);
    printf("Enter the elemnts of array\n");
    for(int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
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
     getsum(a,row,col);
   }
  void getsum(int a[10][10],int row,int col){
    int rownum;
    int max=0;
    for(int i=0;i<row;i++){ 
        int sum=0;
     
        for(int j=0;j<col;j++){
            sum=sum+a[i][j];
         
            
        }
         
           
        printf("The sum of elments of row %d is %d",i+1,sum);
           if(sum>max){
                max=sum;
                rownum=i+1;
            
            }
       printf("\n");
      
    }printf("The max sum elments of row is in row number %d",rownum);      
   }
  
    
