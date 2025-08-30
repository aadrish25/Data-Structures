#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

void traversal(Node* head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* deleteHead(Node* head)
{
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head)
{
    if(head->next==nullptr)
    {
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    delete (temp->next);
    temp->next=nullptr;
    return head;
}

Node* deleteAtK(Node* head, int k)
{
    if(head==nullptr) return head;
    if(k==1){
        head=deleteHead(head);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr)
    {
        cnt++;
        if(cnt==k)
        {
            prev->next=prev->next->next;
            delete temp;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* deleteAtValue(Node* head,int value)
{
    if(head==nullptr) return head;
    if(value==head->data)
    {
        head=deleteHead(head);
        return head;
    }
    Node* temp=head;
    Node* prev=nullptr;
    while (temp!=nullptr)
    {
        if(temp->data==value)
        {
            prev->next=prev->next->next;
            delete  temp;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr={5,6,4,7,9,1};
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    traversal(head);
    cout<<"\n After Head deletion: \n";
    head=deleteHead(head);
    traversal(head);
    cout<<"\n After Tail deletion: \n";
    head=deleteTail(head);
    traversal(head);
    cout<<"\n After Kth element deletion: \n";
    head=deleteAtK(head,3);
    traversal(head);
    cout<<"\n After element with value deletion: \n";
    head=deleteAtValue(head,7);
    traversal(head);
}
