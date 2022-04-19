#include<stdio.h>
#include<conio.h>
int main(){
 int i,j,row,k;
 printf("enter a nunber of row");
 scanf("%d",&row);
 for(j=1;j<=row;j++){
 	for(i=(row-1);i>=j;i--){
 		printf("");
 			 }for(k=1;k<=j;k++){
 			 	printf("*");
			  }
 		printf("\n");
}
  getch();
  return 0;
}
