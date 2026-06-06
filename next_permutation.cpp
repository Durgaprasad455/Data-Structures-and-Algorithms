// next permutation 
#include<bits/stdc++.h>
using namespace std;

//better using STL 
void better(vector<int>&a,int n){
  next_permutation(a.begin(),a.end());
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}

// optimal solution working inside the stl
void optimal(vector<int>&a,int n){
  int ind=-1;
  for(int i=n-2;i>=0;i--){
    if(a[i]<a[i+1]){
      ind=i;
      break;
    }
  }
  if(ind==-1){
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
  }
  for(int i=n-1;i>ind;i--){
    if(a[i]>a[ind]){
      swap(a[i],a[ind]);
      break;
    }
  }
  reverse(a.begin() + ind + 1,a.end());
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
  //better(a,n);
  optimal(a,n);
}