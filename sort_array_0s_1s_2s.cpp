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

// better solution using count
void better(vector<int>&a,int n){
  int c0=0,c1=0,c2=0;
  for(int i=0;i<n;i++){
    if(a[i]==0){
      c0++;
    }
    else if(a[i]==1){
      c1++;
    }
    else{
      c2++;
    }
  }
  for(int i=0;i<c0;i++){
    a[i]=0;
  }
  for(int i=c0;i<c1;i++){
    a[i]=1;
  }
  for(int i=c1;i<c2;i++){
    a[i]=2;
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" "; 
  }
}

// optimal solution using dutch national flag algorithm
void dutchFlag(vector<int>&a,int n){
  int l=0,m=0,h=n-1;
  while(m<=h){
    if(a[m]==0){
      swap(a[l],a[m]);
      l++;
      m++;
    }
    else if(a[m]==1){
      m++;
    }
    else{
      swap(a[h],a[m]);
      h--;
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
  //bruteforce(a,n);
  //better(a,n);
  dutchFlag(a,n);
  return 0;
}