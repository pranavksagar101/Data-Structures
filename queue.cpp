#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* front;
Node* rear;

int IsEmpty(){
    if (front==NULL && rear==NULL){return 1;}
    else{return 0;}
}

void enqueue(int x){
    if(IsEmpty()){
        Node* temp= new Node();
        temp->data=x;
        temp->link=NULL;
        front=temp;
        rear=temp;
    }
    else if(front==rear){
        Node* temp= new Node();
        temp->data=x;
        temp->link=NULL;
        front->link=temp;
        rear=temp;
    }
    else{
        Node* temp= new Node();
        temp->data=x;
        temp->link=NULL;
        rear->link=temp;
        rear=temp;
    }
}

void print(){
    Node* temp3=front;
    while(temp3!=NULL){
        cout<<temp3->data<<" ";
        temp3=temp3->link;
    }
    cout<<"\n";
}

int main(){
    front=rear=NULL;
    enqueue(2);
    print();
    enqueue(3);
    print();
}