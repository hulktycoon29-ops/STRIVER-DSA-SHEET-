#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node*next1,Node*back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node*convertArrto2LL(int arr[],int n){
    Node* head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<n;i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp; // we are moving prev to temp node as soon as temp shift to next node 
    }
    return head;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node*insertion_Before_Tail(Node*head,int val){
    if(head->next==NULL){
        return NULL;
    }
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*prev=tail->back;
    Node*newNode=new Node(val,tail,prev);
    tail->back=newNode;
    prev->next=newNode;
    return head;
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
    Node*head=convertArrto2LL(arr,n);
    int val;
    cout<<"Enter the value you want to insert: ";
    cin>>val;
    head=insertion_Before_Tail(head,val);
    cout<<endl;
    print(head);
    return 0;
}