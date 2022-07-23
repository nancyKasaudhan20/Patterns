// A A A 
// B B B 
// C C C
#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    for(char i='A';i<=c;i++){
       for(char j='A';j<=c;j++){
        cout<<i<<"\t";
       } cout<<endl;
    }
}