// majority element appears more than n/2 times

#include<bits/stdc++.h>
using namespace std;

// brute force solution using count
void bruteforce(vector<int>&a,int n){
  for(int i=0;i<n;i++){
    int c=0;
    for(int j=0;j<n;j++){
      if(a[j]==a[i]){
        c++;
      }
    }
    if(c>(n/2)){
      cout<<a[i];
      return ;
    }
  }
}

//better solution using hashing
void better(vector<int>&a,int n){
  map<int,int>mp;
  for(int i=0;i<n;i++){
    mp[a[i]]++;
  }
  for(auto it:mp){
    if(it.second>(n/2)){
      cout<<it.first;
      return ;
    }
  }
}

//optimal solution using moore's voting algorithm
void mooreAlgorithm(vector<int>&a,int n){
  int el;
  int c=0;
  for(int i=0;i<n;i++){
    if(c==0){
      c=1;
      el=a[i];
    }
    else if(a[i]==el){
      c++;
    }
    else{
      c--;
    }
  }
  int c1=0;
  for(int i=0;i<n;i++){
    if(a[i]==el){
      c1++;
    } 
  }
  if(c1>(n/2)){
    cout<<el<<endl;
  }
  else{
    cout<<"-1"<<endl;
  }
}

int main(){
  int n;
  cin>>n;
  vector<int>a;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  //bruteforce(a,n);
  //better(a,n);
  mooreAlgorithm(a,n);
}