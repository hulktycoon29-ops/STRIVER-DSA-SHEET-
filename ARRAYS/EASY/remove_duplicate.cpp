// #include <bits/stdc++.h>
// using namespace std;

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
//     cout<<endl;
//     vector <int> temp;
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]){
//             if(temp.empty()|| temp.back()!=arr[i]){
//                 temp.push_back(arr[i]);
//             }
//         }
//     }

//     for(auto it:temp){
//         cout<<it<<" ";
//     }
//     return 0;
// }


// brute apporach

// #include <bits/stdc++.h>
// using namespace std;

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
//     cout<<endl;
//     set <int> s;
//     for(int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }

//     int idx=0;
//     for(auto it:s){
//         arr[idx]=it;
//         idx++;
//     }

//     cout<<endl;
//     for(int i=0;i<idx;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }



//better striver

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
    cout<<endl;
    int pointer=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[pointer]){
            arr[pointer+1]=arr[i];
            pointer++;
        }
    }
    int size=pointer+1;
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}