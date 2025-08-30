#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next; // take mover to next node
    }
    return head;
}

void traversal(Node* head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    
}

int length(Node* head)
{
    Node* temp=head;
    int cnt=0;
    while (temp!=nullptr)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void searchInLL(Node* head,int key)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==key)
        {
            cout<<"\n"<<"Element found!";
            break;
        }
        temp=temp->next;
    }
}

int main()
{
    vector<int> arr={5,6,0,1};
    Node* head= convertArr2LL(arr);
    traversal(head);
    cout<<"\n"<<length(head);
    searchInLL(head,6);
}
