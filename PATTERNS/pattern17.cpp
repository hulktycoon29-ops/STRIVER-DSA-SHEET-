#include <bits/stdc++.h>
using namespace std;

void print (int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        //character
        char ch='A';
        int br=(2*i+1)/2;
        for(int k=0;k<2*i+1;k++){
            cout<<ch;
            if (k>=br){
                ch--;
            }
            else{
                ch++;
            }
        }


        //space
        for(int p=0;p<n-i-1;p++){
            cout<<" ";
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