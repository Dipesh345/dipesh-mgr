#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,factor=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			factor=factor+1;
	}}
	if(factor=2){
		printf("prime number");
	}else{
		printf("not prime number");
	}
	getch();
	return 0;
}
