#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int  n,osum=0,esum=0,i;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	if(i%2==0){
		esum=esum+1;
		
	}else{
	osum=osum+1;
	
	}
}
	printf("osum %d \t esum%d",osum,esum);
	getch();
	return 0;
}
