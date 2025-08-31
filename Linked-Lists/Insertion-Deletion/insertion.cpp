#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

Node* arr2LL(Node* head,vector<int> arr)
{
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

void traversal(Node* head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertAtHead(Node* head,int data)
{
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    return head;
}

Node* insertAtTail(Node* head,int data)
{
    Node* newNode= new Node(data);
    Node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=nullptr;
    return head;
}

Node* insertAtK(Node* head,int data,int k)
{
    if(head==nullptr){
        if(k==1){
            return new Node(data);
        }
    }

    if(k==1){
        head=insertAtHead(head,data);
        return head;
    }

    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        cnt++;
        if(cnt==(k-1)){
            Node* newNode=new Node(data);
            newNode->next=temp->next;
            temp->next=newNode;
            return head;
        }
        temp=temp->next;
    }
}

Node* insertAtVal(Node* head,int data,int val)
{
    if(head==nullptr){
        return new Node(data);
    }

    if(head->data==val){
        head=insertAtHead(head,data);
        return head;
    }

    Node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->next->data==val){
            Node* newNode=new Node(data);
            newNode->next=temp->next;
            temp->next=newNode;
            return head;
        }
        temp=temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr={3,4,6,3,2,5,7};
    Node* head=new Node(arr[0]);
    head=arr2LL(head,arr);
    traversal(head);
    cout<<"\n After insertion at beginning\n";
    head=insertAtHead(head,9);
    traversal(head);
    cout<<"\n After insertion at tail\n";
    head=insertAtTail(head,11);
    traversal(head);
    cout<<"\n After insertion at position\n";
    head=insertAtK(head,17,3);
    traversal(head);
    cout<<"\n After insertion at a value\n";
    head=insertAtVal(head,21,5);
    traversal(head);
}
