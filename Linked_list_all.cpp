#include<iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  Node* link;
};
Node* head;
void insert(int data_val, int place){ //inserting  a value at a given position in the list
    Node* temp1=new Node();
    temp1->data=data_val;
    temp1->link=NULL;
    if(place==1){
    temp1 -> link=head;
    head=temp1;
    return;
    }
    Node* temp2=head;
    for(int i=1;i<place-1;i++){
      temp2=temp2->link;
    }  
    temp1 -> link=temp2->link;
    temp2->link=temp1;
    }

void print(){ //printing list in forward direction
    Node* temp3=head;
    while(temp3!=NULL){
        cout<<temp3->data<<" ";
        temp3=temp3->link;
    }
    cout<<"\n";
}

void remoove(int position){ //removing element at a given position
    if(position==1){
        Node* temp6=head->link;
        head=temp6;
	free(temp6);
        return;
    }
    Node* temp4=head;
    for(int i=1;i<position-1;i++){
        temp4=temp4->link;
    }
    Node* temp5=temp4->link;
    temp4->link=temp5->link;
    free(temp5);
    return;
}

void reverse(){//reversing list
     Node *current,*prev,*next;
     current=head;
     prev=NULL;
     while(current!=NULL){
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
     }
     head=prev;
}

void PRINTR(Node*p){ //printing list in reverse order using recursion
    if(p==NULL){return;}
    PRINTR(p->link);
    cout<<p->data<<" ";
    if(p==head){cout<<"\n";}
}

void REVERSE_REC(Node*p){ //reversing the linked list using recursion
    if(p->link==NULL){
        head=p;
        return;
    }
    REVERSE_REC(p->link);
    Node*q=p->link;
    q->link=p;
    p->link=NULL;
}

int main(){
    head=NULL;
    insert(2,1);
    print();
    insert(3,2);
    print();
    insert(4,3);
    print();
    insert(6,4);
    print();
    insert(5,5);
    print();
    insert(2,4);
    print();
    remoove(3);
    print();
    reverse();
    print();
    PRINTR(head);
    print();
    REVERSE_REC(head);
    print();
}
