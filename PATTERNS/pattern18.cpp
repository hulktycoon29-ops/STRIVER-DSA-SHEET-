#include <bits/stdc++.h>
using namespace std;

void print (int n){
    for(int i=0;i<n;i++){
        char ch='A'+n-1-i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
            ch++;

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