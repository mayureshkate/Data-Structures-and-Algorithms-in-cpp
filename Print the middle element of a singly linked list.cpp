#include <bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
  node(){
  	data = 0;
    next = NULL;
  } 
};
node* create_node(int value){
	node* temp = new node();
	temp->data = value;
	return temp; 
}

int printmiddle(node* start){
   if(start == NULL) return -1;
   node* slow = start;
   node* fast = start;
   while(fast->next && fast->next->next){
    slow = slow->next;
    fast = fast->next->next;
   }
   return slow->data; 
}
int main(){
node* start;
start = create_node(1);
node* temp = start;
for(int i=2;i<8;i++){
temp->next = create_node(i);
temp=temp->next; 
}
cout<<printmiddle(start);
return 0;
}
