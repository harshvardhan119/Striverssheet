// Creation of Linekdlist
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* Next;
    Node(int val){
         data=val;
         Next=NULL;
    }
};
int main() {
  Node* Head = new Node(5);
  Node*Second = new Node(6);
  Head->Next=Second;
  
Node*temp =Head;
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->Next;
}cout<<"Null";

    return 0;
}
output 5->6->Null




// Insertion of new Node in front
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* Next;
    Node(int val){
         data=val;
         Next=NULL;
    }
};
int main() {
  Node* Head = new Node(5);
  Node*Second = new Node(6);
  Head->Next=Second;
  Node* newnode=new Node(9);
  newnode->Next = Head;
  
Node*temp =newnode;
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->Next;
}cout<<"Null";

    return 0;





//Deletion of the node if pointer is given

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* Next;
    Node(int val){
         data=val;
         Next=NULL;
    }
};
int main() {
  Node* Head = new Node(5);
  Node*Second = new Node(6);
  Head->Next=Second;
  Node* newnode=new Node(9);
  newnode->Next = Head;
  //Like we have to delete the 5 from the linked list
  
Node*temp =newnode;
while(temp!=NULL){
    if(temp==Head){
        
        temp->Next=(temp=temp->Next)->Next;
    }
    cout<<temp->data<<"->";
    temp=temp->Next;
}cout<<"Null";

    return 0;





//DLL starting
#include<iostram>
using namespace std;
struct Node
{
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data =val;
        prev= nullptr;
        next = nullptr;
    }
};
void main(){
    Node* Head = new Node(5);
    Node* second = new Node(8);
    Head->next = second;
    second->prev = Head;
    //like have to add new node between head and second
    Node*
    Head->next=node
    Node* temp=Head;
    while(next!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}



//Insertion and deletion in DLL
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data =val;
        prev= nullptr;
        next = nullptr;
    }
};
int main(){
    Node* Head = new Node(5);
    Node* second = new Node(8);
    Head->next = second;
    second->prev = Head;
    //like have to add new node between head and second
    Node*hi=new Node(19);
    Head->next=hi;
    hi->prev=Head;
    hi->next=second;
    second->prev=hi;
    //For Deleting Node like Second one
    Head->next =hi->next;
    Node*newtemp=Head->next;
    newtemp->prev=Head;
    Node* temp=Head;
    while(temp!=nullptr){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<"Nullptr";
}