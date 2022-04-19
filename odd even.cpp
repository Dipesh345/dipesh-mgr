#include<stdio.h>
#include<conio.h>
int main(){
	int ocount=0,ecount=0,i=1,n;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2 ==0){
			ecount=ecount+1;
			i++;
		}else{
			ocount=ocount+1;
			i++;
		}
	}
	printf("ecount %d \t ocount %d",ecount,ocount);
	getch();
	return 0;
}
