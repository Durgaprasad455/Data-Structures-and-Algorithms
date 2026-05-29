// rotate the array by one place
#include<bits/stdc++.h>
using namespace std;

// bruteforce / optimal
void rotateArray(vector<int>&a, int n){
  int temp=a[0];
  for(int i=1;i<n;i++){
    a[i-1]=a[i];
  }
  a[n-1]=temp;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}

int main(){
  int n;
  cin>>n;
  vector<int>a;
  for(int i=0;i<n;i++){
    int c;
    cin>>c;
    a.push_back(c);
  }
  rotateArray(a,n);
  return 0;
}
