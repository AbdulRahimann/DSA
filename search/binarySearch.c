#include<stdio.h>
int binarySearch(int A[],int key,int n){
    int l = n - 1;
    int b = 0;
    while(l>=b){
        int mid = (l + b)/2;
        if(key > A[mid]){
            b = mid +1;
        }
        else if(key < A[mid]){
            l = mid -1;
        }
        else{
            return mid;
        }

    }return -1;
}
int main(){
    int A[]={1,2,3,4,5,6};
    int n = sizeof(A)/sizeof(A[0]);
    printf("%d",binarySearch(A,5,n));
}