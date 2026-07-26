#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the array elements: ";
        cin>>arr[i];
    }

    // precompute
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter the number of query: ";
    cin>>q;
    while(q--){
        int numbers;
        cin>>numbers;
        cout<<endl;
        cout<<"The number is repeated = "<<mpp[numbers];
    }
    return 0;
}