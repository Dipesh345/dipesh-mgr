#include<stdio.h>
#include<conio.h>
int main(){
	int row,i,j,k;
	printf("enter rows");
	scanf("%d",&row);
	for(j=1;j<=row;j++){
		for(i=(row-1);i>=j;i--){
			printf("aaham");
		}for(k=1;k<=j;k++){
			printf("\naaham");
		}printf("\n");
	}
	getch();
	return 0;
}
