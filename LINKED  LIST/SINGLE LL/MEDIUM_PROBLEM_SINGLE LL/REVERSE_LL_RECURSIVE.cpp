#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int data1,Node *next1){
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


void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node*recursive_apporach(Node*head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    Node *newhead=recursive_apporach(head->next);
    Node*front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;
}


int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    Node*head=Creating_N_Nodes(n);
    print(head);
    cout<<endl;
    head=recursive_apporach(head);
    print(head);
    return 0;
}