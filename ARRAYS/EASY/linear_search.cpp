#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int num,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;

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
    int num;
    cout<<"Enter the number u want to check  for : ";
    cin>>num;
    int result=linear_search(arr,num,n);
    cout<<endl;
    cout<<"The index number = "<<result;
    return 0;
}