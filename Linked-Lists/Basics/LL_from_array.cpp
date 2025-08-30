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

int main()
{
    vector<int> arr={5,6,0,1};
    Node* head= convertArr2LL(arr);
    cout<< head->data;
}
