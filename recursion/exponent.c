#include<stdio.h>
int power(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return power(m,n-1);
    }
}
int power1(int m, int n){ //for less number of multiplication
    if (n==0){
        return 1;

    }
    if(n%2 == 0){
        return power1(m*m,n/2);
    }
    else{
        return power1(m*m,(n-1)/2)*m;
    }
}
int main(){
    int result = power1(2,3);
    
    printf("%d",result);
}