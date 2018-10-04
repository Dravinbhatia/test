#include<iostream>
#include<string>
using namespace std;
class Account
{
public:
  string name;
  double accno;
  string type;
  double accbal;
  void details(){
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"Enter your account no."<<endl;
    cin>>accno;
    cout<<"Enter the type of account: Savings or current"<<endl;
    cin>>type;
    cout<<"Enter your acc. balance"<<endl;
    cin>>accbal;

  }

};
class Current: public Account
{ public:
  void sercharge()
  {
    double s;
    cout<<"rate of service charge is 2% pa"<<endl;
    s=(2*accbal)/100;
    accbal=accbal-s;
    cout<<"Service charge to be charged="<<s<<endl;
    cout<<"Your remaining balance in account is="<<(accbal)<<endl;
  }
};
class Saving:public  Account
{public:
  double d;
  void deposit()
  {
    cout<<"Enter the amount to be deposited"<<endl;
    cin>>d;
    accbal=accbal+d;
    cout<<"Your updated balance is"<<accbal<<endl;
  }
  void withdrawl()
  {
    double w=0.0;
    cout<<"Enter the amount you want to withdraw"<<endl;
    cin>>w;
    accbal=accbal-w;
    cout<<"Your remaining balance is="<<accbal<<endl;
  }
  void interest()
  {
    double i=0;
    cout<<"Rate of interest is 6% pa"<<endl;
    i=(6*accbal)/100;
    cout<<"interest amount is="<<i<<endl;
  }
};
int main()
{int flag=0;
  cout<<"Enter 1 if you want to access Current account or enter 2 to access savings account"<<endl;
  cin>>flag;
  if(flag==1){
    Current obj;
    obj.details();
    obj.sercharge();
    obj.penalty();
  }
  else if(flag==2){
    Saving obj;
    obj.details();
    int flag1=0;
    cout<<"Enter 1 if u wanna deposit or enter 2 if u wanna withdraw"<<endl;
    cin>>flag1;
    if(flag1==1)
    obj.deposit();
    else if(flag1==2)
    obj.withdrawl();
    obj.interest();
  }
  else
  cout<<"You entered wrong choice"<<endl;
  return 0;
}
