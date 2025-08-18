#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define PI 3.1415926
typedef struct node{
	float value;
	char op;
	struct node *middle;
	struct node *next;
	struct node *prev;
} node;



int check(char* string);
int syntaxcheck(char* string);
void divide(node *operand1,node *operand2);
void multiply(node *operand1,node *operand2);
float factorial(node *operand);
float inverse(node *operand);
void add(node *operand1,node *operand2);
void subtract(node *operand1,node *operand2);node *calculate(node *start,node *stop);
float specialfunc(node *spec);

int main() {
	  printf("FUNCTIONS:\ns=sine;c=cosine;t=tangent;\nS=arc-sine;C=arc-cosine;\nT=arc-tangent;L=log;l=anti-log;\nN=natural log;n=anti-natural log;\n!=factorial;R=square-root;\nr=cube-root;^=power;I=inverse \nOPERATORS:\n+=addition;-=subtraction;\n*=multiplication;/=division \n () for parenthesis------input\n");
	  char input[100];
	  char sinput[100];
	  int l,j,i,a=0,n=0,st=0,sp=0,z=0;
	  char buffer[50];
	  node *head;
	  node *holder;
	  node *temp=NULL;
	  node *tail;
	  node *trasverse;
	  while(1){
   fgets(sinput,sizeof(sinput),stdin);
   l=strlen(sinput);
   if(l>0 && sinput[l-1] == '\n') {
    sinput[l-1]='\0';
    }
    
    l=strlen(sinput);
    for(i=0;i<l;i++){
    			if(sinput[i]!=' ' && sinput[i]!='\t'){
    			input[a]=sinput[i];
    			a++;
    			}
    		}
    		input[a]='\0';
    		a=0;
    		i=0;
    		
    		
    		
    l=strlen(input);
    j=check(input);
    if(j==1){
    	printf("INVALID INPUT CHARACTER!!!\n");
    	}
    else{
    	j=syntaxcheck(input);
    	if(j==0){
    		
   	//------double linked list maker------
    		for(i=0;i<l;i++){
    			if(isdigit(input[i]) || input[i]=='.'){
    				buffer[a]=input[i];
    				a++;
 
    				if(!(isdigit(input[i+1])) && input[i+1]!='.'){
    					buffer[a]='\0';
    	node *snode=(node*)malloc(sizeof(node));
    		   if(snode!=NULL){
    		   	n++;
    		   snode->next=NULL;
    		   snode->prev=NULL;
    		   snode->middle=NULL;
    					snode->value=atof(buffer);
    					snode->op='b';
    					if(n==1)
    					head=snode;
    					if(n>1)
    					temp->next=snode;
    					tail=snode;
	       	snode->prev=temp;
		       temp=snode;
    					
    					
    					
    					
    					
 if(isalpha(input[i-a]) || input[i+1]=='!'){
    node *branch=(node*)malloc(sizeof(node));
    branch->next=NULL;
    branch->prev=NULL;
    branch->middle=NULL;
      if(input[i+1]=='!')
      branch->op='!';
      else
      branch->op=input[i-a];
      
       snode->middle=branch;
    					}  	
    					
    					a=0;
    				
    		   }
    		   else printf("malloc error\n");
    					}
    			}	
    				
   	if(!(isdigit(input[i])) && input[i]!='.' && !(isalpha(input[i])) && input[i]!='!'){
    		node *snode=(node*)malloc(sizeof(node));
    				 if(snode!=NULL){
    				 		n++;
    		   snode->next=NULL;
    		   snode->prev=NULL;
    		   snode->middle=NULL;
    					snode->op=input[i];
    					if(n==1)
    					head=snode;
    					if(n>1)
    					temp->next=snode;
    					tail=snode;
	       	snode->prev=temp;
		       temp=snode;
    					}
    				 else printf("malloc error\n");

    			}
    		}
    		
	 
	//------calculation logic--------
	if(head->op=='-' && head->next->op=='b'){
		head->next->value*=-1;
		holder=head;
	 head=head->next;
	 free(holder);
	 holder=NULL;
	}
	    		trasverse=head;
	while(trasverse!=NULL){
if(trasverse->op=='(' || trasverse->op==')')
  z++;
		trasverse=trasverse->next;
    	}
    	z=z%2;
    	
    	if(z!=0){
    		printf("incomplete paranthesis\n");
    		continue;
    		}
    	
    	
    	
node *answer;
answer=calculate(head,tail);
printf("\t%f\n",answer->value);
		
			
				
					

/* 
  node* temporary=head;
	while(temporary!=NULL){
		if(temporary->op=='b')
		printf("\t%f\n",temporary->value);
 	else
		printf("\t%c\n",temporary->op);

		
		temporary=temporary->next;
	}
 */
 
   		
    				}
    		 		 		 		 		
    		 		 		 		 		 		 		 		
    	
    	else if(j==2){printf("No Input !!!\n");}
    	else if(j==1){printf("syntax error!\n");}
    	}

	 	 n=0;
	 	 z=0;
	 	  }

	return 0;
}
int check(char* string){
	int l=strlen(string),j,x=0;
	for(j=0;j<l;j++){
		  switch(string[j]){
		  	case '0':break;
		  	case '1':break;
		  	case '2':break;	
		  	case '3':break;
		  	case '4':break;
		  	case '5':break;
		  	case '6':break;
		  	case '7':break;
		  	case '8':break;
		  	case '9':break;
		  	case 'S':break;
		  	case 'C':break;
		  	case 'T':break;
		  	case 's':break;
		  	case 'c':break;
		  	case 't':break;
		  	case 'L':break;
		  	case 'l':break;
		  	case 'N':break;
		  	case 'n':break;
		  	case 'I':break;
		  	case '!':break;
		  	case 'R':break;
		  	case 'r':break;
		  	case '^':break;
		  	case '+':break;
    	case '-':break;
		  	case '*':break;
		  	case '/':break;
		  	case '(':break;
		  	case ')':break;
		  	case '.':break;
		  	default:
		  	x=1;
		  	}
		  	if(x==1){
		  		break;
		  }
		}
		return x;//checks for valid characters and return x
}


int syntaxcheck(char* string){
	int c=0,v,s=strlen(string);
	if(string[0]!='\0'){
 	if(string[0]=='*' || string[0]=='/' || string[s-1]=='+' || string[s-1]=='-' || string[s-1]=='^' || string[s-1]=='R' || string[s-1]=='r' || string[s-1]=='I' || string[s-1]=='S' || string[s-1]=='C' || string[s-1]=='T' || string[s-1]=='s' || string[s-1]=='c' || string[s-1]=='t' || string[s-1]=='L' || string[s-1]=='l' || string[s-1]=='N' || string[s-1]=='n'){
     c=1;
			}
			for(v=0;v<=s;v++){
				switch(string[v]){
					case 'S':if(string[v+1]=='S' || string[v+1]=='('){c=1;}
		  	break;
		  	case 'C':if(string[v+1]=='C'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 'T':if(string[v+1]=='T'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 's':if(string[v+1]=='s'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 'c':if(string[v+1]=='c'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 't':if(string[v+1]=='t'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 'L':if(string[v+1]=='L'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 'l':if(string[v+1]=='l'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 'N':if(string[v+1]=='N'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 'n':if(string[v+1]=='n'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 'I':if(string[v+1]=='I'|| string[v+1]=='('){c=1;}
		  	break;
		  	case '!':if(string[v+1]=='!'){c=1;}
		  	break;
		  	case 'R':if(string[v+1]=='R'|| string[v+1]=='('){c=1;}
		  	break;
		  	case 'r':if(string[v+1]=='r'|| string[v+1]=='('){c=1;}
		  	break;
		  	case '^':if(string[v+1]=='^'){c=1;}
		  	break;
		  	case '+':if(string[v+1]=='+'){c=1;}
		  	break;
		  	case '*':if(string[v+1]=='*' ||                string[v+1]=='/'){c=1;}
		  	break;
		  	case '/':if(string[v+1]=='/' ||                string[v+1]=='*'){c=1;}
		  	break;
		  	case '(':if(string[v+1]=='('){c=1;}
		  	break;
		  	case ')':if(string[v+1]==')'){c=1;}
		  	break;}}
			
	}
		else{
			c=2;
		}
		return c;// syntax checker
}


void multiply(node *operand1,node *operand2){
	
	 operand1->value=operand1->value*operand2->value;
operand1->next=operand2->next;
if(operand2->next!=NULL)
operand2->next->prev=operand1;

free(operand2->prev);
free(operand2);
}
float factorial(node *operand){
	int i,j=1;
	int x=(int)operand->value;
	if(x==operand->value){
	for(i=1;i<=operand->value;i++){
		j=j*i;
	}}
	else{
		printf("maths error  !");
		exit(0);
	}
	return (float)j;
	}
void add(node *operand1,node *operand2){
		 operand1->value=operand1->value+operand2->value;
operand1->next=operand2->next;
if(operand2->next!=NULL)
operand2->next->prev=operand1;
free(operand2->prev);
free(operand2);
	}
void subtract(node *operand1,node *operand2){
	 operand1->value=operand1->value+operand2->value;
operand1->next=operand2->next;
if(operand2->next!=NULL)
operand2->next->prev=operand1;
free(operand2->prev);
free(operand2);
}
float inverse(node *operand){
	return 1/operand->value;
	}	




node *calculate(node *start,node *stop){
	node *current=start;

	while(current!=stop->next){
if(current->op=='b' && current->middle!=NULL)
 current->value=specialfunc(current);
	 	 current=current->next;
	 }
	 current=start;
	while(current!=stop->next){	
if(current->op=='/'){
 divide(current->prev,current->next);
}
	 	 current=current->next;
	 }
	 current=start;
	while(current!=stop->next){	
if(current->op=='*'){
 multiply(current->prev,current->next);
}
	 	 current=current->next;
	 }
	 current=start;
	while(current!=stop->next){	
if(current->op=='+'){
 add(current->prev,current->next);
}
	 	 current=current->next;
	 }
	 current=start;
	while(current!=stop->next){	
if(current->op=='-'){
 subtract(current->prev,current->next);
}
	 	 current=current->next;
	 }
	 
			return start;
}


float specialfunc(node *spec){
	    node* current=spec;
	    while(current->middle!=NULL){
	    switch(current->middle->op){
					case '!':
					spec->value=factorial(spec);
					break;
					case 's':
					spec->value=(spec->value/180)*PI;
					spec->value=sinf(spec->value);
					break;
					case 'c':
					spec->value=(spec->value/180)*PI;
					spec->value=cosf(spec->value);
					break;
					case 't':
					spec->value=(spec->value/180)*PI;
					spec->value=tanf(spec->value);
					break;
					case 'S':
					spec->value=asinf(spec->value);
					spec->value=(spec->value/PI)*180;
					break;
					case 'C':
					spec->value=acosf(spec->value);
					spec->value=(spec->value/PI)*180;
					break;
					case 'T':
					spec->value=atanf(spec->value);
					spec->value=(spec->value/PI)*180;
					break;
					case 'L':
					spec->value=log10f(spec->value);
					break;
					case 'l':
					spec->value=powf(10,spec->value);
					break;
					case 'N':
					spec->value=logf(spec->value);
					break;
					case 'n':
					spec->value=expf(spec->value);
					break;
					case 'R':
					spec->value=sqrtf(spec->value);
					break;
					case 'r':
					spec->value=cbrtf(spec->value);
					break;
					case 'I':
					spec->value=inverse(spec);
					break;
					}
					current=current->middle;
	    }
					return spec->value;
	}
	
void divide(node *operand1,node *operand2){
	if (operand2->value==0.0000){
		printf("math error !");
		exit(0);
	}
	else {
operand1->value=operand1->value/operand2->value;
operand1->next=operand2->next;
if(operand2->next!=NULL)
operand2->next->prev=operand1;
}
free(operand2->prev);
free(operand2);
}