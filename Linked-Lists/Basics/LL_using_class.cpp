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

int main()
{
    vector<int> arr={5,6,0,1};
    Node* head=new Node(arr[1]);
    cout<<head->data;
}
