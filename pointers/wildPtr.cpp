#include<bits/stdc++.h>
using namespace std;

void wildPtr() {
    int* ptr; 
    
    cout << "Wild Pointer Address: " << ptr <<endl;

    if (ptr != nullptr) {
        
    }
}

void safePtr() {
    int* ptr = nullptr; 
    
    cout << "Safe Pointer Address: " << ptr << endl;

    if (ptr != nullptr) {
        *ptr = 10; 
    } else {
        cout << "Pointer is null, skipping dereference to avoid crash." << endl;
    }

    int value = 100;
    ptr = &value; 
    
    if (ptr != nullptr) {
        cout << "Now pointing to value: " << *ptr << endl;
    }
}

int main(){
  wildPtr();
  safePtr();

}