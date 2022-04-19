#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	float a,b,result;
	int choice;
	while(1){
	printf("****SAMPLE CALCULATOR****\n");
	printf("\n 1.addition\n 2.subtraction\n 3.exit");

	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1: printf("\n enter two numbers");
		scanf("%f%f",&a,&b);
		result=a+b;
		printf("\n the sum of %f and %f is: %f,a,b,result");
		break;
		case 2:
		printf("enter two numbers:");
		scanf("%f%f",&a,&b);
		result=a-b;
		printf("the result is %f, result");
		break;
		case 3:  exit(0);
		default:printf("\n Error!!!please enter a nnumber between 1 to 4");
	}
}	
getch ();
	return 0;
}
