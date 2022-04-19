#include<stdio.h>
#include<conio.h>
int main(){
int a[100],size, i, sum=0;
printf("Enter the size of array:");
scanf("%d",&size);
//input array
for(i=0;i<size;i++){
printf("Enter a[%d] element:",i);
scanf("%d",&a[i]);
}
//output array
printf("The array elements are:\n");
for(i=0;i<size;i++){
printf("%d\t",a[i]);
}
//finding sum of array
for(i=0;i<size;i++){
sum=sum+a[i];
}
printf("\nThe sum of array elements is:%d", sum);
getch();
return 0;
}
