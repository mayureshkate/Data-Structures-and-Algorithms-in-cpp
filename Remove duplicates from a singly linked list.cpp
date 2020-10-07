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
void print(node* start){
   while(start){
   cout<<start->data<<" ";
   start = start->next;
}
   cout<<endl;;
}
void removeduplicates(node* start){
	if(start == NULL) return;
    set<int>s;   // to store already seen data
    node* curr = start;
    node* prev = NULL;
    while(curr){
    if(s.find(curr->data) != s.end()){  //already seen 
	prev->next = curr->next;
    delete(curr);
    curr=prev->next;
	}
	else{
	s.insert(curr->data);
	prev=curr;
	curr=curr->next;	
	}  
}
}
int main(){
node* start;
start = create_node(1);
start->next = create_node(2); 
    start->next->next = create_node(1); 
    start->next->next->next = create_node(1); 
    start->next->next->next->next = create_node(2); 
    start->next->next->next->next->next = create_node(1);
    start->next->next->next->next->next->next = create_node(0); 
cout<<"Before removing duplicates - "<<endl;
print(start);
removeduplicates(start);
cout<<endl<<"After removing duplicates"<<endl;
print(start);
return 0;
}
