#include<iostream>
using namespace std;

class BankAccount{
  private:
    string holder;
    double balance;
  public:
    BankAccount(string name,double initialbalance){
      holder=name;
      if(initialbalance>=0){
        balance=initialbalance;
      }else{
        balance=0;
      }
    }

    void deposit(double amount){
      if(amount>0){
        balance+=amount;
        cout<<"Deposited:"<<amount<<endl;
      }
    }

    void withdraw(double amount){
      if(amount>0 and amount<=balance){
        balance-=amount;
        cout << "Withdrawn: " << amount <<endl;
      }else{
        cout << "Invalid withdrawal amount!" <<endl;
      }
    }

    double getbalance() const{
      return balance;
    }
};

int main(){

  BankAccount mine("Harsha",0);
   cout<<mine.getbalance()<<endl;
  mine.deposit(500.0);
   cout<<mine.getbalance()<<endl;
  mine.withdraw(200.0);
  cout<<mine.getbalance()<<endl;

}