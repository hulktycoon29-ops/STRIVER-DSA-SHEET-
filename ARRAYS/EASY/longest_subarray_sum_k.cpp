#include <bits/stdc++.h>
using namespace std;


int myMethod(int arr[],int n,int k){
    int longest=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==k){
                int length=j-i+1;
                longest=max(length,longest);  
            }        
        }
    }
return longest;
}


int better(int v[], int n,int k){
    map<long long , int >preSumArr;
    long long sum =0;
    int maxlen=0;

    for(int i=0;i<n;i++){
        sum=sum+v[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        int rem =sum-k;
        if(preSumArr.find(rem)!=preSumArr.end()){
            int len=i-preSumArr[rem];
            maxlen=max(len,maxlen);
        }
        // it is the edge case if there is 0 present in the array it will still work
        if(preSumArr.find(sum)==preSumArr.end()){  
            preSumArr[sum]=i;
        }
    }
    return maxlen;
}

int optimal(int v[],int n,int k){
    int maxlen=0;
    int right=0;
    int left=0;
    int sum=v[0];
    while(right<n){
        while(left<=right && sum>k){
            sum=sum-v[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum= sum+v[right];
        }
    }
    return maxlen;
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
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<endl;
    cout<<"The longest subarray is Of size = "<<myMethod(arr,n,k);
    cout<<endl;
    cout<<"The longest subarray is Of size = "<<better(arr,n,k);
    cout<<endl;
    cout<<"The longest subarray is Of size = "<<optimal(arr,n,k);
    return 0;
}