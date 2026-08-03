#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the Size of array: ";
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The Largest element in the array = "<<arr[n-1];

    // striver 's method 

    // int largest =arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>largest){
    //         largest=arr[i];
    //     }
    // }
    // cout<<endl;
    // cout<<"The Largest element in the array = "<<largest;
    
    return 0;
}
