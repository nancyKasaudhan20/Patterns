// 1
// 2 1 
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=i;j>0;j--){
        cout<<j<<"\t";
    } cout<<endl;
  }
  return 0;
}