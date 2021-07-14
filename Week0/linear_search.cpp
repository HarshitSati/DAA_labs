//TC = Time Complexity/ total comparisions
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
 ifstream fin("linear_search.in");
 ofstream fout("linear_search.out");

 int n, key, TC =0;
 bool flag = true;
 fin>>n;
 vector <int> vrr;
 vrr.resize(n);
 for( int i=0; i < n; i++){
   fin>>vrr[i];
 }
 fin>>key;
 for (int i: vrr){
   TC +=1;
   if(i == key) {
     fout<<"key is in array"<<"\n";
     flag = false;
     break;
   }
 }
 if(flag){
   fout<<"Key is not in array";
 }
 fout<<"Total number of comparisons "<<TC<<"\n";
}
