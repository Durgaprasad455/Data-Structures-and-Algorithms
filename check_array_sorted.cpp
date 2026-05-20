// check array is sorted or not

#include<bits/stdc++.h>
using namespace std;

bool issorted(vector<int>&a,int n){
  for(int i=1;i<n;i++){
    if(a[i]<a[i-1]){
      return false;
    }
  }
  return true;
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
  if(issorted(a,n)){
    cout<<"true"<<endl;
  }else{
    cout<<"false"<<endl;
  }
  return 0;
}
