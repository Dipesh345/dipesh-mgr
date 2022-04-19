#include<stdio.h>
#include<conio.h>
	int main(){
		int n,i;
		float result,sum=0;
		printf("enter a number of terms:");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			sum=sum+(1.0/i);
		}
		printf("the sum of series is: %f",sum);
		getch();
		return 0;
	}
