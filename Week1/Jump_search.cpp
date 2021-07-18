//time complexity of bin search O(n/jump + line_search O(jump))
// t -> test case
//n -> length of array
//
#include<iostream>
#include<vector>
#include <cstdio>
using namespace std;
int linearSearch(vector<int> &vrr, int start, int end, int key){ //end - i+ jump or start + jump
  while(start <= end){
    //cout<<" "<<vrr[start]<<" ";
    if(vrr[start] == key) return start;
    start++;
  }
//  cout<<"\n";
  return -1;
}
int jumpSearch(vector<int> &vrr, int n,int key){
  int jump =n/2 -1;
  for(int i =0; i < n- jump; i+=jump){
  //  cout<<vrr[i]<<" "<<vrr[i+jump]<<" ";
    if(vrr[i] <= key&&key <= vrr[i+jump ]) return linearSearch(vrr, i, i+jump, key);
  }
  return -1;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("binary_search.in","r",stdin);
  freopen("jump_search.out","w",stdout);
  int t;
  cin>>t;
  while(t--){
    int n,key;
    cin>>n;
    cin>>key;
    vector<int> vrr(n);
    for(int i=0; i<n;i++){
      cin>>vrr[i];
    }
    //int low =0;
    int ans = jumpSearch(vrr, n,key);
    //cout<<ans<<"\n";
    if(ans) cout<<"Present "<<key<<" at "<<ans<<"\n";
    else cout<<"Not Present "<<key;
  }
}
