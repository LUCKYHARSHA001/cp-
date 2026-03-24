#include<bits/stdc++.h>
using namespace std;

int main(){
  int value=67;
  void* ptr=&value;

  int* destruct=static_cast<int*>(ptr);
  cout<<*destruct<<endl;
}