#include <bits/stdc++.h>
using namespace std;


void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;                      // considered  first element as minimum
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){        //comparing each array element with considered minimum element
                mini=j;                 // storing element with min value index
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element of array: ";
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}