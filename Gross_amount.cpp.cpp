#include <iostream>

using namespace std;
int main ()
{
 
  int grossamount;
  cout<<"enter gross amount of employee =";
  cin>>grossamount;
  //Income Tax: 10%
//Global Life Insurance: 2.75%
//Pension Plan: 2.3% 
//Health Insurance: 200.0 rupees//
  
  cout<<"Income Tax (RS):"<<grossamount*10/100<<"\n";
  
  cout<<"Global Life Insurance (RS):"<<grossamount*2.75/100<<"\n";
  
  cout<<"pension plan(RS) :"<<grossamount*2.3/100<<"\n";
  
  cout<<"Health Insurance :"<<"200.0 rupees\n";
  
  cout<<"Net Salary (after tax deduction):"<<100000-10000-2750-2300-200 <<endl;
       return 0;
}