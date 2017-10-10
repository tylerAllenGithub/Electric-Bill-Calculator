/*Tyler Allen
CS111
2-26-2015
Assignment 3 Program 2
This program will create an electric bill based on the following rate & consumption table.////////////////*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int month;
  int current;//declare variables
  int previous;
  int totalConsumed;
  double totalAmount;
  double extraCost;
  
  cout<<"Enter the month: ";
  cin>>month;//assign 1st input to month
  if(month<=0||month>12)//if month is invalid
    {
      cout<<month<<" is an invalid month."<<endl;
    }
  else//if month is valid
    {
  cout<<"Enter the current meter reading: ";
  cin>>current;//assign 2nd input to current
  cout<<"Enter the previous meter reading: ";
  cin>>previous;//Assign 3rd input to previous
  totalConsumed=current-previous;//get total electricity consumed
  if(totalConsumed<0)//if total consumed is negative or zero
       {
      cout<<"The readings are invalid"<<endl;
       }
     else
        {
	  if(totalConsumed>=0&&totalConsumed<=400)
	    {
	      extraCost=0;
	    }
	  else
	    {
	      if(month>=5&&month<=9)
		{
		  extraCost=7.525*(((totalConsumed-400.0)/100.0));
                   
		}
	      else
                extraCost=6.575*(((totalConsumed-400.0)/100.0));
	    }
	      totalAmount=8.50+extraCost;   
	      cout<<"You consumed "<<totalConsumed<<" and your amount due is $"<<fixed<<setprecision(2)<<totalAmount<<"."<<endl;
	}
    }
  return 0;
}   
    
