#include<stdio.h>
intmain(){
	int n,i,esum=0,osum=0;
	printf("number");
	scanf("%d",&n);
	for(i=1;i<n;i++){
	if(i%2==0){
		esum=esum+i;
	}else{
		osum=osum+i;
	}
}
printf("esum%d \t osum %d",esum,osum);

return 0;
}
