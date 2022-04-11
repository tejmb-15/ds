/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class node
{ public:
    int data;
    class node *next;
    // node(){
    //     data=NULL;
    //     next=NULL;
    // }
    node(int data){
        // node->data=data;//it is beter to us this keyword rather than confusing which node
        // node->next=NULL;
        this->data=data;//it is beter to us this keyword rather than confusing which node
        this->next=NULL;
    }
    
};

class node *head=NULL,*tail=NULL;
void display(){
    class node*temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
void ibeg(){
    class node*temp;
    temp=head;
    int data;
    cin>>data;
    class node* nnode=new node(data);
    nnode->next=temp;
    head=nnode;
}
void iend(){
    cout<<tail->data;
    int data;
    cin>>data;
    class node *nnode=new node(data);
    tail->next=nnode;
    
}
void imid(){
    int pos;
    cin>>pos;
    int data;
    cin>>data;
    class node *nnode=new node(data);
    class node *temp;
    temp=head;
    for(int i=0;i<pos;i++){
        temp=temp-> next;
    }
    nnode->next=temp->next;
    temp->next=nnode;
    
}
void insertion(){
    int n;
    cout<<"enter 1 to ibeg\n 2 to ind \n 3 to imid";
    cin>>n;
    switch(n){
        case 1:ibeg();break;
        case 2:iend();break;
        case 3:imid();break;
        default:exit(0);
    }
}
void dbeg(){
    class node *temp;
    temp=head;
    head=temp->next;
    delete temp;
}
void dend(){
    
    delete tail;
}
void dmid(){
    class node *temp,*temp1,*temp2;
    temp=head;
    temp1=temp;
    int pos;
    cin>>pos;
    for(int i =0;i<pos;i++){
        temp=temp->next;
        temp1=temp->next;
    }
    temp2=temp1->next;
    temp->next=temp2;
    delete temp1;
    
    
}
void deletion(){
     int n;
    cout<<"enter 1 to ibeg\n 2 to ind \n 3 to imid";
    cin>>n;
    switch(n){
        case 1:dbeg();break;
        case 2:dend();break;
        case 3:dmid();break;
        default:exit(0);
    }
}
void creation(){
    int n;
    cin>>n;
    int data;
    cin>>data;
    class node *nnode=new node(data);
    class node*temp;
    
    if(head==NULL){//remmber that head must be emty to initilize with newnode
        head=nnode;
    }
    temp=head;
    tail=head;
    cout<<temp->data;
  
        while(n--){//runing n no o ftime to crate n nodes
            int data ;
            cin>>data;
          class node *nnode=new node(data);   
       temp->next=nnode;
       temp=temp->next;
       tail=tail->next;
        }
        
    insertion();
    deletion();
    display();
    
}
void midele(){
  class node* slow,*fast;
  slow=head;
  fast=head;
  while(fast!=NULL){
      fast=fast->next->next;
      slow=slow->next;
  }
  cout<<slow->data;
}
int main()
{
  creation();
    midele();
    return 0;
}
