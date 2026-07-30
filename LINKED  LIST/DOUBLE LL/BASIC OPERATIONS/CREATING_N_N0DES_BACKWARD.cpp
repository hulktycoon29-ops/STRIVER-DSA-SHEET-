#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*back;

    public:
    Node(int data1,Node*next1,Node*back1){
        data=data1;
        next=next1;
        back=back1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* Creating_n_nodes_backward(int n){
    int x;
    cout<<"Enter the head Node: ";
    cin>>x;
    Node*head=new Node(x);
    Node*temp=head;
    for(int i=1;i<n;i++){
        int x;
        cout<<"Enter the node element: ";
        cin>>x;
        Node *new_node=new Node(x);
        temp->back=new_node;
        new_node->next=temp;
        temp=new_node;
    }
    return head;
}

void print (Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->back;
    }

}

int main(){
    int n;
    cout<<"Enter the number of nodes:  ";
    cin>>n;
    Node*head=Creating_n_nodes_backward(n);
    print(head);
    cout<<endl;
    return 0;
}
