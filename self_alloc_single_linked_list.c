#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node* next;
	}node;
int main(){
	int i;
	node* head;
	node* temp=NULL;
	for(i=1;i<5;i++){
		node *init=(node*)malloc(sizeof(node));
		init->value=i;
		head=init;
		init->next=temp;
		temp=init;
		}
	
	node *temporary=head;
	while(temporary!=NULL){
		printf("%d\n",temporary->value);
		temporary=temporary->next;
		}
	
	return 0;
	}