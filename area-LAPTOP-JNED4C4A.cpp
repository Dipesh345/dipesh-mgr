#include<stdio.h>
#include<conio.h>
int main(){
	int b, total;
	float net;
	printf("enter total unit consumed");
	scanf("%d",&b);
	if(b<=20){
		total= 80;
	}else if (b<=100){
		total=80+(b-20)*7.5;
	}else if(b<=200){
	total=80+(80*7.5)+(b-100)*8.5;
	}else{
		total=80+(80*7.5)+(100*8.5)+(b-200)*9.5;
	}
	net=total+0.15*total;
	printf("total bill is :%f",net);
		getch();
	return 0;

}
