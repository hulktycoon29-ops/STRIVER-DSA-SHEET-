// #include <bits/stdc++.h>
// using namespace std;

// // using brute apporach

// void merge(int arr[],int low,int mid,int high){
//     int left =low;
//     int right =mid+1;
//     vector<int>temp;
//     while(left<=mid && right<=high){
//         if(arr[left]<=arr[right] ){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//         while(left<=mid){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         while(right<=high){
//             temp.push_back(arr[right]);
//             right++;
//         }

    
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
// }

// void merge_sort(int arr[],int low,int high ){
//     if(low>=high)return;
//     int mid=(low+high)/2;
//     merge_sort(arr, low,mid);
//     merge_sort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }

// int sec_largest=0;
// int sec_large(int arr[] ,int n){
//     for(int i=n-2;i>=0;i--){
//         for(int j=n-2;j>=0;j--){
//             if(arr[j]<arr[n-1] && arr[j]!=arr[n-1]){
//                 sec_largest=arr[j];
//                 break;
//             }

//         }
//     }
//     return sec_largest;
// }

// int main(){
//     int n;
//     cout<<"Enter the Size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"Enter the element : ";
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     merge_sort(arr,0,n-1);
//     sec_large(arr,n);
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"The second largest element ="<<sec_largest;
//     return 0;
// }



// better  code 



// #include <bits/stdc++.h>
// using namespace std;

// int largest(int arr[],int n){
//     int large =arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>large){
//             large=arr[i];
//         }
//     }
//     return large;
// }

// int main(){
//     int n;
//     cout<<"Enter the Size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"Enter the element : ";
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     int largest_ele= largest(arr,n);
//     int sec_large=-1;
//     for(int j=0;j<n;j++){
//         if(arr[j]>sec_large && arr[j]<largest_ele){
//             sec_large=arr[j];
//         }
//     }
//     cout<<"The largest num = "<<largest_ele<<endl;
//     cout<<"The second largest num = "<<sec_large<<endl;
//     return 0;
// }



// optimal method

#include <bits/stdc++.h>
using namespace std;

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
    int largest=arr[0];
    int sec_largest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
            sec_largest=largest;
        }
        else if(arr[i]<largest && arr[i]>sec_largest){
            sec_largest=arr[i];
        }
    }
    cout<<endl;
    cout<<"The second largest num = "<<sec_largest<<endl;
    return 0;
}