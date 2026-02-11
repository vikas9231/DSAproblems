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
    for(int i=1; i<arr.size(); i++){
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
Node* reverse(Node* head, int left, int right){
    if (!head || left == right) return head;

    Node dummy(0);
    dummy.next = head;

    Node* left2 = &dummy;
    for (int i = 1; i < left; i++) {
        left2 = left2->next;
    }

    Node* curr = left2->next;
    Node* prev = nullptr;

    for (int i = left; i <= right; i++) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    left2->next->next = curr;
    left2->next = prev;

    return dummy.next;
}

int main() {
    vector<int> arr = {10, 20, 25, 35, 40};
    Node* head = convertArr(arr);
    head = reverse(head, 2, 4);
    print(head);
    return 0;
}