// leaders in an array
#include<bits/stdc++.h>
using namespace std;

//bruteforce
void bruteforce(vector<int>&a,int n){
  vector<int>ans;
  for(int i=0;i<n;i++){
    bool leader=true;
    for(int j=i+1;j<n;j++){
      if(a[j]>a[i]){
        leader=false;
        break;
      }
    }
    if(leader==true){
      ans.push_back(a[i]);
    }
  }
  for(int x:ans){
    cout<<x<<" ";
  }
}

//optimal solution 
void optimal(vector<int>&a,int n){
  int maxi=INT_MIN;
  vector<int>ans;
  for(int i=n-1;i>=0;i--){
    if(a[i]>maxi){
      ans.push_back(a[i]);
      maxi=a[i];
    }
  }
  for(auto it:ans){
    cout<<it<<" ";
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
  optimal(a,n);
}