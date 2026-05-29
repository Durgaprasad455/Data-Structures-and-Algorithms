// maximum consecutive ones

#include<bits/stdc++.h>
using namespace std;

// optimal
void optimal(vector<int>&a,int n){
  int count=0;
  int maxi=0;
  for(int i=0;i<n;i++){
    if(a[i]==1){
      count+=1;
      maxi=max(maxi,count);
    }else{
      count=0;
    }
  }
  cout<<maxi<<" ";
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
  optimal(a,n);
  return 0;
}