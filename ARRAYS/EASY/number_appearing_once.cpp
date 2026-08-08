#include <bits/stdc++.h>
using namespace std;

int brute(int arr[],int n){
    for(int i=0;i<n;i++){
        int num =arr[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(num==arr[j]){
                cnt++;
            }
        }
        if(cnt==1)return arr[i];
    }

}

int better(int arr[],int n){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    int hash[maxi+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1)return arr[i];
    }
    return -1;
}


int using_map(int arr[],int n){
    map <int ,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second==1){
            return it.first;
        }
    }

}





int optimal(int arr[],int n){
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    return xor1;
}


int main(){
    int n;
    cout<<"Enter the Size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The number that appear once  = "<<brute(arr,n);
    cout<<endl;
    cout<<"The number that appear once  = "<<better(arr,n);
    cout<<endl;
    cout<<"The number that appear once  = "<<using_map(arr,n);
    cout<<endl;
    cout<<"The number that appear once  = "<<optimal(arr,n);
    return 0;
}
