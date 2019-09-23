//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
 string firstName;
 string lastName;
 

 cout <<" Enter first name ";
 cin >> firstName;
 
 cout <<" Enter last name ";

 cin >> lastName;

 cout <<"Welcome, "<<firstName.at(0)<<" "<<lastName.at(0)<<" here is your fortune...";

 cout <<"Your lucky number is "<<firstName.length()<<"."; 

 



  return 0;
}
