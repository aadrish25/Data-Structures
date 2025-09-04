#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

Node* arr2DLL(vector<int> arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    return head;
}

Node* insertBeforeHead(Node* head,int data)
{
    Node* newNode=new Node(data);
    Node* temp=head;
    head=newNode;
    temp->prev=head;
    head->next=temp;
    return head;
}

Node* insertBeforeTail(Node* head,int data)
{
    Node* newNode= new Node(data);
    Node* last=head;
    Node* secondLast=nullptr;
    while(last->next!=nullptr)
    {
        secondLast=last;
        last=last->next;
    }

    last->prev=newNode;
    secondLast->next=newNode;
    newNode->next=last;
    newNode->prev=secondLast;
    return head;
}

Node* insertBeforeKthNode(Node* head,int data,int k)
{
    Node* newNode = new Node(data);
    Node* temp=head;
    int cnt=0;
    while(temp!=nullptr)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* before=temp->prev;
    if(before==nullptr){
        head=insertBeforeHead(head,data);
        return head;
    }
    before->next=newNode;
    temp->prev=newNode;

    newNode->next=temp;
    newNode->prev=before;
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
    vector<int> arr={6,11,33,23,61,40};
    Node* head=arr2DLL(arr);
    traversal(head);
    cout<<"\n Insertion before head \n";
    head=insertBeforeHead(head,35);
    traversal(head);
    cout<<"\n Insertion before tail \n";
    head=insertBeforeTail(head,49);
    traversal(head);
    cout<<"\n Insertion before Kth Node \n";
    head=insertBeforeKthNode(head,20,4);
    traversal(head);
}