// largest element in the array
#include<bits/stdc++.h>
using namespace std;

// brute force solution
void bruteForce(vector<int>&a,int n){
  sort(a.begin(),a.end());
  cout<<a[n-1]<<endl;;
}


// optimal solution
void optimalSolution(vector<int>&a,int n){
  int largest=a[0];
  for(int i=0;i<n;i++){
    if(a[i]>largest){
      largest=a[i];
    }
  }
  cout<<largest<<endl;
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
  // bruteForce(a,n);
  optimalSolution(a,n);
  return 0;
}