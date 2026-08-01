#include <bits/stdc++.h>
using namespace std;

// void print (int n){
//     for(int i=0;i<n;i++){
//         for(char j='A';j<='A'+i;j++){
//             cout<<char('A'+i);
//         }
//         cout<<endl;
//     }
// }

// striver 's method
void print(int n){
    for(int i=0;i<n;i++){
        char ch ='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
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