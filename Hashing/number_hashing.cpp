#include <bits/stdc++.h>
using namespace std;

int main(){
    // hashing is pre-storing or fetching 
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre compute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
// number of queries=q
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int numbers;
        cin>>numbers;
        cout<<"The number of times "<<numbers<<" repeated ="<<hash[numbers]<<"\n";
    }
    return 0;
}