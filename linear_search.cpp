// linear search
#include<bits/stdc++.h>
using namespace std;  

int main(){
  int n;
  cin>>n;
  vector<int>a;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  int key;
  cin>>key;
  for(int i=0;i<n;i++){
    if(a[i]==key){
      cout<<"Element found at index "<<i<<endl;
      return 0;
    }
  }
  cout<<"Element not found"<<endl;
  return 0;
}