#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PIE 3.4
int main(){
	int r,a,c;
	printf("enter radius");
	scanf("%d",&r);
	c=2*PIE*r;
	a= PIE* pow(r,2);
	printf("the c is %d",c);
	printf("\n the a is %d",a);
	getch();
	return 0;
}
