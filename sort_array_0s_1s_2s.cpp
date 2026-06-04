// sort an array of 0s,1s and 2s
#include<bits/stdc++.h>
using namespace std;

//bruteforce using direct sort function
void bruteforce(vector<int>&a,int n){
  sort(a.begin(),a.end());
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
  bruteforce(a,n);
  return 0;
}