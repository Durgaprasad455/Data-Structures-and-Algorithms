// union of two sorted array
#include<bits/stdc++.h>
using namespace std;

//bruteforce
void bruteforce(vector<int>&a,vector<int>&b,int n,int m){
  set<int>st;
  for(int i=0;i<n;i++){
    st.insert(a[i]);
  }
  for(int i=0;i<m;i++){
    st.insert(b[i]);
  }
  for(auto it:st){
    cout<<it<<" ";
  }
}

//optimal solution
void optimalsolution(vector<int>&a,vector<int>&b,int n,int m){
  int i=0,j=0;
  vector<int>uni;
  while(i<n && j<m){
    if(a[i]<b[j]){
      uni.push_back(a[i]);
      i++;
    }else if(a[i]>b[j]){
      uni.push_back(b[j]);
      j++;
    }
  }
  while(i<n){
    uni.push_back(a[i]);
    i++;
  }
  while(j<m){
    uni.push_back(b[j]);
    j++;
  }
  for(auto it:uni){
    cout<<it<<" ";
  }
}

int main(){
  int n,m;
  cin>>n>>m;
  vector<int>a,b;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  } 
  for(int i=0;i<m;i++){
    int x;
    cin>>x;
    b.push_back(x);
  }
  bruteforce(a,b,n,m);
  return 0;
}