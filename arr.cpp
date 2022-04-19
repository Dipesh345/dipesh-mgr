#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100][100],i,j,m,n,sum=0,avg;
   printf("Enter no. of rows and cols :: ");
        scanf("%d%d",&n ,&m);
         for (i = 0; i < m; i++){
            for (j = 0; j < n; j++) {
                 printf("\nEnter arr[%d][%d] value :: ",i,j);
                 scanf("%d", &arr[i][j]);
        }
    }
 printf("\nThe given matrix is \n");
        for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            printf("\t%d", arr[i][j]);
        }
        printf("\n");
    }
	 for(i=0;i< m;i++)
 {
  for(j=0;j< n;j++)
  {
   sum = sum + arr[i][j];
  }
 }

 avg = sum/(m*n);

 printf("the average value is %d", avg);
}

