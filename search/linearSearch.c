#include<stdio.h>
int linearSearch(int A[],int n,int key){
    for(int i = 0;i < n;i++){
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int A[] = {4,5,8,9,6,7};
    printf("%d",linearSearch(A,sizeof(A)/sizeof(A[0]),9));
}