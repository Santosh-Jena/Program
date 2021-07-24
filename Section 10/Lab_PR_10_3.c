/*
: Use recursive function calls to evaluate the following series:
x - (x3/3!) + (x5/5!) - (x7/7!) + …
*/
#include<stdio.h>
double fun(double x,int n) {
    int t=2*n-1;
    if(t<=1) {
        printf("%0.0lf ",x);
        return x;
    }
    double res=1;
    for(int i=1;i<=t;i++)
        res=(res*x)/i;
    if(n%2==0) {
        double re=fun(x,n-1);
        printf("- (%0.0lf^%d/%d!) ",x,t,t);
        return re-res;
    }
    double re=fun(x,n-1);
    printf("+ (%0.0lf^%d/%d!) ",x,t,t);
    return re+res;
}
void main() {
    printf("Enter the value of x : ");
    double x;
    scanf("%lf",&x);
    printf("Enter number of terms : ");
    int n;
    scanf("%d",&n);
    double res=fun(x,n);
    printf("= %lf",res);
}
