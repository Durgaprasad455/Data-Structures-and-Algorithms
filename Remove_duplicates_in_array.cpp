// remove duplicates in an array
#include<bits/stdc++.h>
using namespace std;

// bruteforce -> using set data structure
void setDS(vector<int>&a,int n){
  set<int>st;
  for(int i=0;i<n;i++){
    st.insert(a[i]);
  }
  int ind=0;
  for(auto it:st){
    a[ind]=it;
    ind++;
  }
  cout<<ind<<endl;
}

// optimal -> using 2 pointers
void optimal(vector<int>&a,int n){
  int i=0;
  int j=1;
  while(i<j){
    if(a[i]!=a[j]){
      i+=1;
    }
    else{
      j+=1;
    }
  }
  cout<<i+1<<endl;
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
  // setDS(a,n);
  optimal(a,n);
  return 0;
}