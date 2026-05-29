// move zero's last to the end of an array

#include<bits/stdc++.h>
using namespace std;

// brute force

void bruteforce(vector<int>&a,int n){
  vector<int>v;
  for(int i=0;i<n;i++){
    if(a[i]!=0){
      v.push_back(a[i]);
    }
  }
  for(int i=0;i<v.size();i++){
    a[i]=v[i];
  }
  for(int i=v.size();i<n;i++){
    a[i]=0;
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}

// optimal solution 
void optimal(vector<int>&a,int n){
  int j=-1;
  for(int i=0;i<n;i++){
    if(a[i]==0){
      j=i;
      break;
    }
  }
  for(int i=j+1;i<n;i++){
    if(a[i]!=0){
      swap(a[i],a[j]);
      j++;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
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
  // bruteforce(a,n);
  optimal(a,n);
  return 0;
}
