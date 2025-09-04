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
    vector<int> arr={4,7,2,3,6};
    Node* head=new Node(arr[0]);
    head=arr2DLL(head,arr);
    traversal(head); 
}