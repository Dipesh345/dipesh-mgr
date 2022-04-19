#include<stdio.h>
#include<conio.h>
int main(){
	int fact=1,i,n;
	printf("enter anumber:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact= fact*i;
	}
	printf("the factorial is%d",fact);
	getch();
	return 0;
}
