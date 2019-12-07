#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int T;
cin >> T;
for(int i=1;i<=T;i++){
    int N;
    cin>>N;
    int count=0;
    int A[8];
    for(int k=0;k<8;k++){A[k]=0;}
    for(int j=1;j<=N;j++){
        int p, s;
        cin>>p; cin>>s;
        if(p>8){continue;}
        else{
            if (A[p-1]>s){continue;}
            else{A[p-1]=s;}
        }
    }
    for(int k=0;k<8;k++){count=count+A[k];}
    cout<<count<<"\n";
}
}