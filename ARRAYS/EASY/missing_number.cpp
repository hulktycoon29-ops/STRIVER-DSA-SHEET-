#include <bits/stdc++.h>
using namespace std;

int my_method(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i+1]!=arr[i]+1){
            return arr[i]+1;
        }
    }
    return -1;
}

int brute(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0)return i;
    }
}

int better(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }

}

int optimal_sum(int arr[],int n){
    int sum=(n*(n+1))/2;
    int s=0;
    for(int i=0;i<n-1;i++){
        s=s+arr[i];
    }
    return sum-s;
}

int optimal_xor(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^(i+1);
        xor2=xor2^arr[i];
    }
    xor1=xor1^n;
    return xor1^xor2;
    
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
    cout<<"The missing number is: "<<my_method(arr,n);
    cout<<endl;
    cout<<"The missing number is: "<<brute(arr,n);
    cout<<endl;
    cout<<"The missing number is: "<<better(arr,n);
    cout<<endl;
    cout<<"The missing number is: "<<optimal_sum(arr,n);
    cout<<endl;
    cout<<"The missing number is: "<<optimal_xor(arr,n);
    return 0;
}