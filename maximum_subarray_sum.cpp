// maximum subarray sum of an array using kadane algorithm

#include<bits/stdc++.h>
using namespace std;

//brute force solution
void brute(vector<int>&a,int n){
  int maxi=INT_MIN;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int summ=0;
      for(int k=i;k<j;k++){
        summ+=a[k];
      }
      maxi=max(maxi,summ);
    }
  }
  cout<<maxi<<endl;
}

//better solution just same as b=above but removing inner for loop
void better(vector<int>&a,int n){
  int maxi=INT_MIN;
  for(int i=0;i<n;i++){
    int summ=0;
    for(int j=i;j<n;j++){
      summ+=a[j];
      maxi=max(maxi,summ);
    }
  }
  cout<<maxi<<endl;
}

//optimal solution using Kadane's algorithm
void kadaneAlg(vector<int>&a,int n){
  int maxi=INT_MIN;
  int summ=0;
  for(int i=0;i<n;i++){
    summ+=a[i];
    maxi=max(summ,maxi);
    if(summ<0){
      summ=0;
    }
  }
  cout<<maxi<<endl;
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
  //brute(a,n);
  //better(a,n);
  kadaneAlg(a,n);
}