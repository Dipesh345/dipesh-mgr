#include<stdio.h>
#include<conio.h>
int main(){
 int i,j,row;
 printf("enter a nunber of row");
 scanf("%d",&row);
 for(j=row;1<=j;j--){
 	for(i=1;i<=j;i++){
 		printf("%d\t",j);
		 }
 		printf("\n");
	 }
  getch();
  return 0;
}

