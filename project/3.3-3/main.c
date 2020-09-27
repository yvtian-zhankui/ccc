#include <stdio.h>
#include <math.h>

int main()
{
    int d = 300000,p = 6000,n;
    double r =0.01,m;
    printf("%d",n);
    m = log(p / (p - d * r))/log(1 + r);
    printf("需要%lf个月还清\n",m);
    return 0;
}
