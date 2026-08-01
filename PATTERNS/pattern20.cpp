#include <bits/stdc++.h>
using namespace std;

void print (int n){
    for(int i=0;i<n;i++){
       if(i<n/2){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<n-2*(i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
       }
       else if (i>n/2){
        for(int j=n/2;j>(i-(n/2));j--){
            cout<<"*";
        }
        for(int j=0;j<2*(i-(n/2));j ++){
            cout<<" ";
        }
        for(int j=n/2;j>(i-(n/2));j--){
            cout<<"*";
        }
        cout<<endl;

       }
    }
}

int main(){
    int n;
    cout << "Enter the value of n that is rows : ";
    cin >> n;
    print(n);
    return 0;
    return 0;
}