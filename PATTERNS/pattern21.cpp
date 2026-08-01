#include <bits/stdc++.h>
using namespace std;

void print(int n){

    for(int i=0;i<n;i++){
        if (i==0 || i==n-1){
            for(int j=0;j<n-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            cout<<"*";
            for(int j=0;j<n-3;j++){
                cout<<" ";
            }
            cout<<"*";
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
}