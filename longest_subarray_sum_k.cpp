// longest subarray with sum k

#include<bits/stdc++.h>
using namespace std;

// brute force
void bruteforce(vector<int>&a,int n,int k){
  int len=0;
  for(int i=0;i<n;i++){
    int s=0;
    for(int j=i;j<n;j++){
      s+=a[j];
      if(s==k){
        len=max(len,j-i+1);
      }
    }
  }
  cout<<len<<" ";
}
// better solution in case of only +ve numbers in array
// optimal solution in case of zeros's,-ve,+ve numbers in array
void optimalnegposzeros(vector<int>&a,int n,int k){
  map<long long , int >presummap;
  long long summ=0;
  int maxlen=0;
  for(int i=0;i<n;i++){
    summ+=a[i];
    if(summ==k){
      maxlen=max(maxlen,i+1);
    }
    long long rem=summ-k;
    if(presummap.find(rem)!=presummap.end()){
      int len=i-presummap[rem];
      maxlen=max(maxlen,len);
    }
    if(presummap.find(summ)==presummap.end()){
      presummap[summ]=i;
    }
  }
  cout<<maxlen<<" ";
}
// optimal solution using 2 pointers and greedy approach in case of only +ve numbers and zeros in array

void optimal(vector<int>&a,int n,int k){
  int i=0,j=0;
  int sum=a[0];
  int maxlen=0;
  while(j<n){
    while(sum>k){
      sum-=a[i];
      i++;
    }
    if(sum==k){
      maxlen=max(maxlen,j-i+1);
    }
    j++;
    if(j<n){
      sum+=a[j];
    }
  }
  cout<<maxlen<<" ";
}

int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int>a;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  //bruteforce(a,n,k);
  //better(a,n,k);
  //optimalnegposzeros(a,n,k);
  optimal(a,n,k);
  return 0;
}