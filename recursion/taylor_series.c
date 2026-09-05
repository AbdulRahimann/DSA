#include<stdio.h>
double e(int x, int n){
    static double f = 1,p = 1;
    double r;
    if (n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        f=f*n;
        p=p*x;

    }return r + p/f;
}
int main(){
    printf("%f",e(3,5));
    return 0;
}