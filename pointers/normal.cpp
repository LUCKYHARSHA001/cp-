#include<iostream>
using namespace std;

int main(){
  int c=15;
  int* ptr=&c;

  cout<<c<<endl;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  *ptr=20;
  cout<<c<<endl;
}