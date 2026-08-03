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

Node*brute_force(Node*head){
    Node* temp=head;
    stack<int> st;
    //*storing the node element int he stack

    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;

    while(temp!=NULL){
        temp->data=st.top();          //* temp node ke data ke vale me ye store kardo 
        st.pop();
        temp=temp->next;
    }
    return head;
}


Node*optimal_apporach(Node*head){
    Node*prev=NULL;
    Node*temp=head;
    Node*front;
    while(temp!=NULL){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}


int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    Node*head=Creating_N_Nodes(n);
    print(head);
    cout<<endl;
    head=brute_force(head);
    print(head);
    cout<<endl;
    head=optimal_apporach(head);
    print(head);
    cout<<endl;
    return 0;
}