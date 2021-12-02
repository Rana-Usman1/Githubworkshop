#include<iostream>
using namespace std;
class Node{
	private:
	int value;
	Node* next;
	Node* prev;
	public:
		void setvalue(int a){
			value=a;
		}
		int getvalue(){
			return value;
		}
		void setnext(Node* n){
			next=n;
		}
		Node* getnext(){
			return next;
		}
		void setprev(Node* p){
			prev=p;
		}
		Node* getprev(){
			return prev;
		}
};
class List{
	private:
	int size;
	Node* head;
	Node* current;
	Node* last;
	public:
		List(){
			head=NULL;
			current=NULL;
			last=NULL;
			size=0;
		}
	void add(int a){
		Node* newnode=new Node;
		newnode->setvalue(a);
		if(head==NULL){
			newnode->setprev(NULL);
			newnode->setnext(NULL);
			head=newnode;
			current=newnode;
			size++;
		}
		else{
			newnode->setnext(current->getnext());
			newnode->setprev(current);
			if(current->getnext()!=NULL){
				Node* temp=current->getnext();
				temp->setprev(newnode);
			}
			    
				current->setnext(newnode);
				current=newnode;
				last=newnode;
				size++;		
		}	
	}
	void dell(){
		Node* temp=head;
        Node* temp1=last;
         temp1=last->getprev();
		 delete temp1;
		head->setnext(current);
        current->getprev(head);
	    
	    // temp1->setprev(head->getprev());
	    // temp1->setnext(current->getnext());
	    
		
		
		
	}
	void print(){
		Node* temp=head;
		if(head!=NULL){
			do{
				cout<<temp->getvalue();
				temp=temp->getnext();
			}while(temp!=NULL);
		}
		cout<<endl;
	}
	
	
};
int main(){
	List st1;
	int a,b,c,choice;
//	cout<<"1.Add"<<endl;
//	cout<<"2.DELETE"<<endl;
//	cout<<"3.PRINT"<<endl;
//	cout<<"4.CURRENT TO HEAD"<<endl;
//	cout<<"\n\n ENTER YOUR CHOICE = ";
//	cin>>choice;
//	switch(choice){
//		case 1:
//	     cout<<"ENTER = ";
//	     cin>>a;
	     st1.add(1);
//	     cout<<"ENTER = ";
//	     cin>>b;
	     st1.add(2);
//	     cout<<"ENTER = ";
//	     cin>>c;
		 	     st1.add(3);
//		break;
//		case 2:
			st1.print();
			st1.dell();
			st1.print();
//		break;
//		case 3:
//		
//		break;
//		case 4:
//		
//		break; 	
//	}	
	return 0;
}




