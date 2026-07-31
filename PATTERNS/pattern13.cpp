#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int sum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            sum+=1;
            cout<<sum<<" ";
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
    return 0;
}