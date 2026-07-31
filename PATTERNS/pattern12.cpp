#include <bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        // first half
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        //spaces
        for(int k=0;k<2*n-2*(i+1);k++){
            cout<<" ";
        }
        //second half
        for(int p=i+1;p>0;p--){
            cout<<p;

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