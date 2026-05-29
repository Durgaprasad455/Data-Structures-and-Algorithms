// longest subarray with sum k

#include<bits/stdc++.h>
using namespace std;

// brute force
void bruteforce(vector<int>&a,int n,int k){
  int len=0;
  for(int i=0;i<n;i++){
    int s=0;
    for(int j=i;j<n;j++){
      s+=a[j];
      if(s==k){
        len=max(len,j-i+1);
      }
    }
  }
  cout<<len<<" ";
}

int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int>a;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  bruteforce(a,n,k);
  return 0;
}