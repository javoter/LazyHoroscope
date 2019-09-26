//Authors:
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
        string firstName;
        string lastName;
        int index;

        cout <<"What is your first name?"<<endl;
        cin >> firstName;

        cout <<"What is your last name?"<<endl;

        cin >> lastName;

        cout <<"Welcome, "<<firstName.at(0)<<"."<<lastName.at(0)<<"., here is your fortune..."<<endl;

        cout <<"your lucky number is "<<firstName.length()<<endl;

        index = lastName.length()-1;

                if(firstName.at(0) == 'a' || firstName.at(0) == 'e' || firstName.at(0) == 'i' || firstName.at(0) == 'o' || firstName.at(0) == 'u' || firstName.at(0) == 'A' || firstName.at(0) == 'E' || firstName.at(0) == 'I' || firstName.at(0) == 'O' || firstName.at(0) == 'U')
                { 
                        cout <<"you are destined to be famous!"<<endl;
                }

                else  
                {
                        cout <<"you should keep a low profile."<<endl;
                }
if(lastName.at(index) == 'A' || lastName.at(index) == 'a' || lastName.at(index) == 'E' || lastName.at(index) == 'e' || lastName.at(index) == 'I' || lastName.at(index) == 'i' || lastName.at(index) == 'O' || lastName.at(index) == 'o' || lastName.at(index) == 'U' || lastName.at(index) == 'u') 
{
        cout <<"you have already met your true love."<<endl;
}


    cout <<"have a good day!"<<endl;








                return 0;
        }
