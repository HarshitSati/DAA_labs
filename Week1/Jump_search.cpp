#include<iostream>
#include<vector>
#include <cstdio>
using namespace std;
int binarySearch(vector<int> &v, int low,int high, int key,int &compare){
  int mid =0;
  if(low ==high)return -1;
  while(low<high){
  compare++;
  mid = (high+low)/2;
  if(key <v[mid])high = mid;
  else if(key >v[mid])low = mid+1;
  else return mid;
//  cout<<compare<<" ";
  }
return -1;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("binary_search.in","r",stdin);
  freopen("binary_search.out","w",stdout);
  int t;
  cin>>t;
  while(t--){
    int high,key,compare=0;
    cin>>high;
    cin>>key;
    vector<int> vrr(high);
    for(int i=0; i<high;i++){
      cin>>vrr[i];
    }
    //int low =0;
    int ans = binarySearch(vrr,0, high,key,compare);
    cout<<ans<<" total comparisions "<<compare<<"\n";
  }
}
