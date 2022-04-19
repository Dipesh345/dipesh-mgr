#include <stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, i, n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    c = 0;
    printf("Fibonacci numbers: \n");
    for(i=1; i<=(n-2); i++) {
        printf("%d, ", c);
        a = b;     
        b = c;     
        c = a + b; 
    }
	getch();
    return 0;
}
