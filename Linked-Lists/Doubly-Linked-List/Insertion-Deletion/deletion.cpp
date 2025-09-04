#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

Node* arr2DLL(Node* head,vector<int> arr)
{
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        temp->prev=mover;
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

Node* deleteHead(Node* head)
{
    Node* temp=head;
    head=head->next;
    temp->next=nullptr;
    head->prev=nullptr;
    delete temp;
    return head;
}

Node* deleteTail(Node* head)
{
    Node* temp=head->next;
    Node* before=head;

    while (temp->next!=nullptr)
    {
        temp=temp->next;
        before=before->next;
    }
    temp->prev=nullptr;
    before->next=nullptr;
    delete temp;
    return head;
}

Node* deleteKNode(Node* head,int  k)
{
    if(head==nullptr) return nullptr;
    Node* temp=head;
    int cnt=0;
    while(temp!=nullptr)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* before=temp->prev;
    Node* after=temp->next;

    if(before==nullptr && after==nullptr){
        delete temp;
        return NULL;
    }
    else if (before==nullptr){
        head=deleteHead(head);
    }
    else if(after==nullptr){
        head=deleteTail(head);
    }
    else{
        before->next=after;
        after->prev=before;
        temp->next=nullptr;
        temp->prev=nullptr;
        delete temp;
    }
    return head;
}

Node* deleteAtValue(Node* head,int value)
{
    if(head==nullptr){
        return NULL;
    }
    if(value==head->data){
        head=deleteHead(head);
        return head;
    }
    Node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==value) break;
        temp=temp->next;
    }
    Node* before=temp->prev;
    Node* after=temp->next;
    if(before==nullptr && after==nullptr){
        delete temp;
        return NULL;
    }
    else if (before==nullptr){
        head=deleteHead(head);
    }
    else if(after==nullptr){
        head=deleteTail(head);
    }
    else{
        before->next=after;
        after->prev=before;
        temp->next=nullptr;
        temp->prev=nullptr;
        delete temp;
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

int main()
{
    vector<int> arr={4,7,2,3,6,9,11,21,17,15};
    Node* head=new Node(arr[0]);
    head=arr2DLL(head,arr);
    traversal(head); 
    cout<<"\nDeleting the head\n";
    head=deleteHead(head);
    traversal(head);
    cout<<"\nDeleting the tail\n";
    head=deleteTail(head);
    traversal(head);
    cout<<"\nDeleting the Kth node\n";
    head=deleteKNode(head,5);
    traversal(head);
    cout<<"\nDeleting the node at given value\n";
    head=deleteAtValue(head,11);
    traversal(head);
}