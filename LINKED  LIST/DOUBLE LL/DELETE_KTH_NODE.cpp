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

Node* delete_Head(Node*head){
    if(head==NULL || head->next==NULL) return NULL;
    Node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}

Node*delete_Tail(Node*head){
    if(head==NULL || head->next==NULL) return NULL;
    Node*tail=head;
    while(tail!=NULL){
        tail=tail->next;
    }
    Node*prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}


Node*delete_Kth_Element(Node*head,int k){
    Node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }

    Node*prev=temp->back;
    Node*front=temp->next;
    // if single node only present 
    if(prev==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    // head node is the temp node
    else if(prev==NULL){
        return  delete_Head(head);

    }
    // tail node is the temp node
    else if(front==NULL){
        return delete_Tail(head);
    }
    else{
        prev->next=front;
        front->back=prev;
        temp->next=nullptr;
        temp->back=nullptr;
        delete temp;
        print (head);
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
    int k;
    cout<<"Enter the position of the node: ";
    cin>>k;
    Node*head=convertArrto2LL(arr,n);
    head=delete_Kth_Element(head,k);
    print(head);
    return 0;
}