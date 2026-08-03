#include <bits/stdc++.h>
using namespace std;

class Node {
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


//! for even number of node LL the second middle element will be consider

Node*brute_force(Node*head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    int midnode=(len/2+1);
    temp=head;
    while(temp!=NULL){
        midnode--;
        if(midnode==0)break;
        temp=temp->next;
    }
    return temp;
}

//* optimal Tortoise and Hare method

Node*optimal_apporach(Node*head){
    Node*slow=head;
    Node*fast=head;   //* Moves two position ahead of the present one
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


int main()
{
    int n;
    cout<<"Enter the Number of nodes: ";
    cin>>n;
    Node*head=Creating_N_Nodes(n);
    print(head);
    cout<<endl;
    Node*mid_ele=brute_force(head);
    cout<<mid_ele->data<<endl;
    Node* op_mid=optimal_apporach(head);
    cout<<op_mid->data;
    return 0;
}