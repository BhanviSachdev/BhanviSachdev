#include<stdio.h>
struct Node
{
	int data;
	Node* ptr;
};
int main()
{
   Node* head=NULL;
   Node* second=NULL;
   Node* third=NULL;
   head=new Node();
   second=new Node();
   third=new Node();
   head->data=1;
   head->ptr=second;
   second->data=2;
   second->ptr=third;
   third->data=3;
   third->ptr=NULL;
   return 0;
}
