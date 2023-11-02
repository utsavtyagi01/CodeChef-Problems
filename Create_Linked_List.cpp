/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    // Write your code here
    int i=0;
    Node* temp=nullptr;
    Node* head=nullptr;
    while(i<arr.size()){
        if(i==0){
            head=new Node();
            head->data=arr[i];
            head->next=nullptr;
            temp=head;
        }
        else{
            Node *node=new Node();
            node->data=arr[i];
            node->next=nullptr;
            temp->next=node;
            temp=temp->next;
        }
        i++;
    }
    return head;
}
