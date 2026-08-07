#include <bits/stdc++.h>
using namespace std;

bool brute(int v[],int n,int target ){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum =v[i];
            sum= sum+v[j];
            if(sum==target) {
                return true;
                break;
            }
        }
    }
    return false;
}

pair <int ,int> returnIdxBrute(int v[],int n,int target ){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum =v[i];
            sum= sum+v[j];
            if(sum==target) {
                return {i,j};
                break;
            }
        }
    }
}

// using Hashmap
pair<int ,int> better(int v[],int n,int t){
    map<int ,int>mpp;
    for(int i=0;i<n;i++){
        int req =t-v[i];
        if(mpp.find(req)!=mpp.end()){
            return {mpp[req],i};
        }
        mpp[v[i]]=i;

    }
    return { -1,-1};
}

//only for variety 1 that is return yes or no
string optimal(vector<int> v,int t){
    int right,left=0;
    int n =v.size();
    sort(v.begin(),v.end());
    while(left<right){
        int sum=v[left]+v[right];
        if(sum==t){
            return "Yes";
        }
        else if(sum<t) left++;
        else right--;
    }
    return "No";
}

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
    int target;
    cout<<"Enter the target number: " ;
    cin>>target;
    bool result=brute(arr,n,target);
    if(result==true){
        cout<<"Target is present ";
    }
    else{
        cout<<"Target is not present ";
    }
    cout<<endl;
    pair <int ,int > r=returnIdxBrute(arr,n,target);
    cout<<"The index for the targert value is : "<<r.first<<" "<<r.second;
    cout<<endl;
    pair <int ,int > re=better(arr,n,target);
    cout<<"The index for the targert value is : "<<re.first<<" "<<re.second;
    cout<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        v.emplace_back(arr[i]);
    }
    cout<<"Target condition satisfied="<<optimal(v,target);
    return 0;
}
