#include<iostream>

using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;

    }
    
   

};

 void insertAtHead(node* &head,int data){
    
    //Creating a new node to insert at head.
    node* temp = new node(data);
    temp->next = head;
    head = temp;

    }
void print(node* head){
        //travesing through the LL and printing the same.
        while (head != NULL)
        {
            cout << head->data << "-->";
            head = head->next;
        }
        cout << endl;
        
    }

void insertAtTail(node* &tail, int data){

    //Create a new node to insert at tail.
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;

}

void insertAtPosition(int pos, node* &head , node* &tail,int data){

    if (pos == 1){
        insertAtHead(head, data);
        return;
    }
    node* temp = head;
    int cnt = 1;

    while (cnt < pos-1)
    {
        temp = temp->next;
        cnt++;
    }
    
    //create node
    node* NewNode = new node(data);
    NewNode->next = temp->next;
    //update tail when inserting at last
    if(temp->next == NULL){
        tail = NewNode;
        
    }
    temp->next = NewNode;
    
}

int DeleteAtPos(node* head, node* tail, int data, int pos){
    if(pos == 1){
        
    }
}

int main(){

    node* node1 = new node(1);

    node* head = node1;
    node* tail = node1;
    //cout << node1->data << "|" << node1->next <<endl;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtPosition(7,head,tail,10);


    print(head);
    cout << head->data <<endl;
    cout << tail->data <<endl;

    return 0;

}