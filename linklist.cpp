#include <iostream>
using namespace std;

class Node{
//creating a node
public:
int data;
Node *next;
 Node(){
  this->data=0;
  this->next=NULL;
 }
       Node(int data){
  //node ke liye constructor
  this->data=data;
  this->next=NULL;
      }
};
 void print(Node* &head){
   Node* temp=head;
   while(temp!=NULL){
     cout<< temp->data <<" ";
     temp=temp->next;
   }
   
 }
//I want to insert a node right at the head of the ll
void insertAtHead(Node* &head,Node* &tail,int data){
  //empty ll
  if(head==NULL){
    Node* newNode=new Node(data);
    //no poinring as ll is empty
   tail=newNode;
    head=newNode;
    return;
  }
  //step 1
  Node* newNode=new Node(data);
    //step 2
  newNode->next=head;
  //step 3
  head=newNode;
  return;
}
//I want to insert a node right at the end of the ll
void insertAttail(Node* &head,Node* &tail,int data){
  //if ll is empty
  if(head==NULL){
    Node* newNode=new Node(data);
    //no pointing as ll is empty
    tail=newNode;
    head=newNode;
    return;
    
  }
  
}
int findLength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
      temp=temp->next;
      len++;
    }
    return len;
  }
void InsertatMiddle(int data,int position,Node* &head,Node* &tail){
  //if ll is empty
  if(head==NULL){
    Node* newNode=new Node(data);
    //no pointing as ll is empty
    tail=newNode;
    head=newNode;
    return;
    
  }
  //step1:find the position :prev and curr.
  int i=1;
  Node* prev =head;
  while(i<position){
    prev=prev->next;
    i++;
  }
  Node* curr=prev->next ;
  
  //step2:
    Node* newNode=new Node(data);
  //step3
  newNode->next=curr;
  //ste4:
  prev->next=newNode;
  if(position==0){
    insertAtHead(head,tail,data);
  }
  int length=findLength(head);
  if(position==length){
    insertAttail(head,tail,data);
  }
  cout<<"length is"<< length <<endl;
}
int main(){
  Node* head=NULL; 
  Node* tail=NULL; 
  insertAtHead(head,tail,20);
  insertAtHead(head,tail,30);
  insertAtHead(head,tail,60);
  insertAtHead(head,tail,90);
insertAtHead(head,tail,100);
cout<<"head: "<<head->data<<endl;
  cout<<"tail: "<<tail->data <<endl;
  print(head);
  cout<<endl;
  InsertatMiddle(30,0,head,tail);
  print (head);
  cout<<endl;
  cout<<"head: "<<head->data<<endl;
  cout<<"tail: "<<tail->data <<endl;
  Node* first=new Node(10);
  Node* second=new Node(20);
  Node* third=new Node(30);
   Node* fourth=new Node(40);
   Node* fifth=new Node(50);
  first->next=second; 
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  cout<<"printing the LL"<<endl;
  print(first);
}
