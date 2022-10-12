#include <iostream>
using namespace std;

struct Node{
  struct Node* next;
  struct Node* prev;
  int data;
  Node(int x){
    data = x;
    next = prev = NULL;
  };
};

Node* dummy =  new Node(-1);
Node* head = dummy;
Node* mid = dummy;
int count = 0;

void push(int data){
  Node* curr = new Node(data);
  curr->prev = NULL;
  curr->next = head;
  count++;
  head->prev = curr;
  head = curr;
  if(count==1){
      mid = curr;
  }
  else if(count%2==0){
      mid = mid->prev;
  }
}

int pop(){
  if(count==0){
     cout<<"Empty\n";
     return-1;
  }
  Node* temp = head;
  int x = head->data;
  head = head->next;
  if(head!=NULL)
    head->prev = NULL;
  count--;
  if(count&1)
    mid = mid->next;
  free(temp);
  return x;
}

int middle(){
  if(count==0){
    cout<<"Empty\n";
    return -1;
  }
  return mid->data;
}
  
  
void printData(){
  Node* curr = head;
  if(count==0){
    cout<"Empty\n";
    return;
  }
  for(int i=0;i<count;i++){
    cout<<curr->data<<" ";
    curr = curr->next;
  }
  cout<<endl;
}
  

int main() {
  
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  printData();
  cout<<middle()<<endl;
	return 0;
}
  
