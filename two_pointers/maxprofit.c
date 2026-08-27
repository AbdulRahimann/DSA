#include<stdio.h>
#include<stdlib.h>
int maxProfit(int prices[5]){
    int l = 0;
    int r = 1;
    int maxP = 0;
    while(l < sizeof(prices)/sizeof(int)){
        if (prices[l] < prices[r]){
            int profit = prices[r] - prices[l];

            if(profit > maxP){
                maxP = profit;
            }
        }
        else{
            l = r;
        }
        r = r + 1;
    }
    return maxP;
}
int main(){
    int prices[5]={7,1,3,6,5};
    int profit = maxProfit(prices);
    printf("%d",profit);
}