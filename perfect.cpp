#include<stdio.h>
#include<conio.h>
int main(){
	int sum=0,n,i;
	printf("enter a number:");
	scanf("%d",&n);
for(i=1;i<=(n-1);i++){
		if(n%i==0){
			sum=sum+i;
			
	}}
	if(n==sum){
		printf("perfect");
	}else{
		printf("non perfect");
	}
	getch();
	return 0;
}
