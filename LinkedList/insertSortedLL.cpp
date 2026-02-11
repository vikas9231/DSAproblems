#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr(vector<int> &arr){
    if(arr.size() == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=0; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover= mover->next;
    }
    return head;
}

void print(Node* head){ 
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertEl(Node* head, int el){
    if(head == NULL){
        return new Node(el, head);
    }
    if(el < head->data){
        return new Node(el, head);
    }
    Node* curr = head;
    while(curr->next != NULL && curr->next->data <el){
        curr = curr->next;
    }
    curr->next = new Node(el, curr->next);
    return head;
}

int main() {
    vector<int> arr = {10, 20, 25, 35, 40};
    Node* head = convertArr(arr);
    head = insertEl(head, 30);
    print(head);
    return 0;
}