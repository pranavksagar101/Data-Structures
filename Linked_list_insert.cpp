#include<iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  Node* link;
};
Node* head;
void insert(int data_val, int place){
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

void print(){
    Node* temp3=head;
    while(temp3!=NULL){
        cout<<temp3->data<<" ";
        temp3=temp3->link;
    }
    cout<<"\n";
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
}