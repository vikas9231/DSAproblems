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

Node* remFromEndNth(Node* head, int n){
    Node* temp = head;
    Node* prev = nullptr;
    if(head == NULL){
            return head;
        }
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    if(cnt -n < 0) return NULL;
    if(cnt - n == 0){
        Node* tempo = head->next;
        delete head;
        return tempo;
    }
    temp = head;
    for(int i=0; i<cnt-n; i++){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    return head;
}

int main() {
    vector<int> arr = {10, 20, 25, 35, 40};
    Node* head = convertArr(arr);
    head = remFromEndNth( head, 2);
    print(head);
    return 0;
}