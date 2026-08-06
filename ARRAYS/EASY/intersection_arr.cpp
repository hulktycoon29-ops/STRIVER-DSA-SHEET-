#include <bits/stdc++.h>
using namespace std;

void optimal(int arr1[], int arr2[],int n1,int n2,vector <int> &in){
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            in.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else {
            j++;
        }
    }
   
    for(auto it:in){
        cout<<it<<" ";
    }

}



int main(){
    int n1;
    cout<<"Enter the Size of array arr1 : ";
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cout<<"Enter the element : ";
        cin>>arr1[i];
    }
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int n2;
    cout<<"Enter the Size of array of arr2 : ";
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cout<<"Enter the element : ";
        cin>>arr2[i];
    }
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector <int> in;
    optimal(arr1,arr2,n1,n2,in);
    return 0;
}