#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    if (n==0)
    return 1;
    else 
    return n * factorial (n-1);
}

double sum(double x, int n)
{
    double nthterm;
    if (n==1)
    return x;
    else 
    nthterm = pow(x, 2*n-1)/factorial(2*n-1) * pow (-1, n+1);
    return sum(x, n-1) + nthterm;
}


int main()
{
    double x; int n;
    printf ("Enter x and n : \n");
    scanf ("%lf %d", &x,&n);
    double result = sum(x,n);
    printf ("The sum is %lf ", result);
    return 0;
}
