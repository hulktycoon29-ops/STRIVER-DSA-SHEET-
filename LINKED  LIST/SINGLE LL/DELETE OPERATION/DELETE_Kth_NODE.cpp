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

Node*delete_kth_node(Node*head,int k){
    if(head==NULL){
        return nullptr;
    }
    else if(k==1){
        Node*temp=head;
        head=head->next;
        delete temp;
        return head; 
    }
    int cnt=0;
    Node*temp=head;
    Node*prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=temp->next;  // * we can also write tis line as prev-next=prev->next->next
            temp->next=nullptr;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }  
    return head;
}

int main(){
    int n;
    cout<<"Enter the Number of nodes: ";
    cin>>n;
    Node*head=Creating_N_Nodes(n);
    print(head);
    cout<<endl;
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    head=delete_kth_node(head,k);
    print(head);
    return 0;
}