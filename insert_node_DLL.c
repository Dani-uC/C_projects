#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node* next;
	struct node* prev;
	}node;
int main(){
	int i;
	node* head;
	node* tail;
	node* temp=NULL;
	node* t;
	
	for(i=0;i<5;i++){
		if(i==2)
		continue;
		node *init=(node*)malloc(sizeof(node));
	 init->value=i+1;
	 if(i>0)
	 temp->prev=init;
	 if(i==0)
	 head=init;
	 
	 tail=init;
	 init->next=temp;
	 temp=init;
	 
	 if(i==5-1){
	 init->prev=NULL;
	 }
		}
		node *tt=head;
		while(tt!=NULL){
		//	printf("%d\n",temporary->value);
			if(tt->value==4){
				
		node* three=(node*)malloc(sizeof(node));
		three->value=3;
		t=tt->next;
		tt->next->prev=three;
		three->prev=tt;
	 tt->next=three;
	 three->next=t;
		
		break;
			}
			tt=tt->prev;
		}
		
	node *temporary=head;
	while(temporary!=NULL){
		printf("   %d\n",temporary->value);
		temporary=temporary->prev;
		}
		printf("\n\n");
		temporary=tail;
	while(temporary!=NULL){
		printf("   %d\n",temporary->value);
		temporary=temporary->next;
		}
	
	return 0;
	}