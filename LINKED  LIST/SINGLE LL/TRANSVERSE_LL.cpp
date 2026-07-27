#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;   //this is pointer pointing to next node

    //this is the constructor
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }

};

Node * convertArrtoLL(int arr[], int n){
    Node*head=new Node(arr[0]);
    Node *mover=head;
    for(int i=1;i<n;i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void traversal(Node * head){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Element : ";
        cin>>arr[i];
    }
    Node *head=convertArrtoLL(arr,n);
    traversal(head);
    cout<<endl;
    return 0;
}