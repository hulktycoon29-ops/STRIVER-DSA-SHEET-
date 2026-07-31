#include <bits/stdc++.h>
using namespace std;
void print (int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        //star
        for(int k=0;k<2*i+1;k++){
            cout<<"*";

        }
        //space
        for(int p=n-i;p>0;p--){
            cout<<" ";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cout<<"Enter the value of n that is rows : ";
    cin>>n;
    print(n);
    return 0;
}