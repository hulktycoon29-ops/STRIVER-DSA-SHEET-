#include <bits/stdc++.h>
using namespace std;


int optimal(int arr[],int n){
    int profit=0;
    int mini=arr[0];
    for(int i=1;i<n;i++){
        int cost =arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);
    }
    return profit;
}

int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the array element : ";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The profit Earned by stock ="<<optimal(arr,n);
    return 0;
}