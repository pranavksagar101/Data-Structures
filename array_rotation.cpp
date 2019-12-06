#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void left_rotate_by_one(int arr[], int n){
    int x=arr[0];
    for (int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=x;
}
int main(){
    int n=7;
    int arra[n]={72,34,56,12,65,32,81};
    int maxi=*max_element(arra,arra+n);
    while(arra[n-1]!=maxi){
        left_rotate_by_one(arra,n);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arra[i]*i;
    }
    cout<<sum;
}
