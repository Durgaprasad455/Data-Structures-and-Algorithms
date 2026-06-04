// 2 sum problems
#include<bits/stdc++.h>
using namespace std;

// brute force
void bruteforce(vector<int>&a,int n,int k){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]+a[j]==k){
        cout<<i<<" "<<j;
        return;
      }
    }
  }
  cout<<"no"<<endl;
}

// better solution using map -> optimal for answer i,j indexs
void better(vector<int>&a,int n,int k){
  map<int,int>mp;
  for(int i=0;i<n;i++){
    int rem=k-a[i];
    if(mp.find(rem)!=mp.end()){
      cout<<"yes"<<endl;
      cout<<mp[rem]<<" "<<i;
      return;
    }
    mp[a[i]]=i;
  }
  cout<<"no"<<endl;
}

// optimal solution using 2 pointer for "yes" or "no" answers
void optimal(vector<int>&a,int n,int k){
  int i=0,j=n-1;
  while(i<j){
    if(a[i]+a[j]==k){
      cout<<"yes"<<endl;
      return;
    }
    if(a[i]+a[j]>k){
      j--;
    }
    else{
      i++;
    }
  }
  cout<<"no"<<endl;
}

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>a;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  //bruteforce(a,n,k);
  //better(a,n,k);
  optimal(a,n,k);
  return 0;
}