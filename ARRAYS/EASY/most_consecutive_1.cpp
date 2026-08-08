#include <bits/stdc++.h>
using namespace std;

int myMethod(int arr[],int n){
    int cnt_0=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt_0++;
            if(maxi<cnt_0){
                maxi=cnt_0;
            }
            
        }
        else if(arr[i]==0){
            cnt_0=0;
        }
    }
    return maxi;
}



int optimal(int arr[],int n){
    int cnt_0=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt_0++;
            maxi=max(cnt_0,maxi);
        }
        else if(arr[i]==0){
            cnt_0=0;
        }
    }
    return maxi;
}




int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cout<<"Enter array elements";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The maximum consecutive one appeared = "<<optimal(arr,n);
    cout<<endl;
    cout<<"The maximum consecutive one appeared = "<<myMethod(arr,n);
    return 0;
}