#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        if(i>=n/2){
            for(int k=0;k<n-i-1;k++){
                cout<<"*";
            }
            
        }
        else if (i<n/2){
            for(int j=0;j<=i;j++){
            cout<<"*";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout << "Enter the value of n that is rows : ";
    cin >> n;
    print(n);
    return 0;
}