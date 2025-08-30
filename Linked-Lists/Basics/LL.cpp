#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data,Node* next)
    {
        this->data=data;
        this->next=next;
    }
};

int main()
{
    vector<int> arr={3,5,4,2};
    Node* head=new Node(arr[0],nullptr);
    cout<< head->data;
}
