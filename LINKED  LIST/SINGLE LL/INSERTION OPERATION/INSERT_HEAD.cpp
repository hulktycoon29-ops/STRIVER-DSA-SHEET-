#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;

    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node*Creating_N_Nodes(int n){
    if(n<=0)return nullptr;
    int x;
    cout<<"Enter the data for the head node:";
    cin>>x;
    Node*head=new Node(x);
    Node*temp=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"Enter the value: ";
        cin>>x;
        Node*new_Node=new Node(x);
        temp->next=new_Node;
        temp=new_Node;
    }
    return head;
}

void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node*Insert_To_Head(Node*head,int val){
    Node*new_Node=new Node(val,head);
    return new_Node;
}

int main(){
    int n;
    cout<<"Enter the Number of nodes: ";
    cin>>n;
    Node*head=Creating_N_Nodes(n);
    print(head);
    cout<<endl;
    int val;
    cout<<"Enter the value : ";
    cin>>val;
    head=Insert_To_Head(head,val);
    print(head);
    return 0;
}