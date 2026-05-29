// rotate an array by d places

#include<bits/stdc++.h>
using namespace std;

// bruteforce 
void rotateArray(vector<int>&a, int n,int d){
  d=d%n;
  vector<int>temp;
  for(int i=0;i<d;i++){
    temp.push_back(a[i]);
  }  
  for(int i=d;i<n;i++){
    a[i-d]=a[i];
  }
  for(int i=n-d;i<n;i++){
    a[i]=temp[i-(n-d)];
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}

// reverse function
void reverse(vector<int>&v ,int i ,int j){
  while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
  }
}

// optimal solution -> by revresing elements 
void optimal(vector<int>&a,int n,int d){
  d=d%n;
  reverse(a,0,d-1 );
  reverse(a,d+1,n-1);
  reverse(a,0,n-1);
}

int main(){
  int n;
  cin>>n;
  int d;
  cin>>d;
  vector<int>a;
  for(int i=0;i<n;i++){
    int c;
    cin>>c;
    a.push_back(c);
  }
  // rotateArray(a,n,d);
  optimal(a,n,d);
  return 0;
}