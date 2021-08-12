//Program for 0/1 Knapsack Problem

#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int w, int n){
    if(w==0||n==0){
        return 0;
    }
    if(wt[n-1]<=w){
        return max(val[n-1]+ knapsack(wt,val,w-wt[n-1],n-1), knapsack(wt,val,w,n-1));
    }
    else if(wt[n-1]>w)
        return knapsack(wt,val,w,n-1);
}

int main()
{
    int weight[50], value[50], w, n,i,profit;
    cout<<"Enter the size of the items: ";
    cin>>n;
    cout<<"Enter item and value: ";
    for(i=0; i<n; ++i){
        cin>>weight[i];
        cin>>value[i];
    }
    cout<<"Enter the capacity: ";
    cin>>w;
    profit=knapsack(weight,value, w,n);
    cout<<"Max Profit: "<<profit;
    return 0;
}