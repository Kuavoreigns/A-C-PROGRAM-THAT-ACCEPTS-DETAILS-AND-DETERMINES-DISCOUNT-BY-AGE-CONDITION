#include <iostream>
using namespace std;
int main (){
    /*The program is been designed to accept entries from the user and display 
    its result and also determine the discount based on their age*/
    string CustomerID, FirstName, LastName, MiddleName, EmailAddress, Address;
    int PhoneNumber,Age;
cout<<"You are welcome to Next Step Computing Consult. Kindly input the following entries and determine how much discount you will be offered to you"<<endl;
cout<<"Customer ID:";
cin>> CustomerID;
cout<<"First Name:";
cin>> FirstName;
cout<<"Last Name: ";
cin>> LastName;
cout<<"Midlle Name: ";
cin>> MiddleName;
cout<<"Phone Number: ";
cin>> PhoneNumber;
cout<<"Email: ";
getline(cin,EmailAddress);
cout<<"Address: ";
getline(cin,Address);
cout<<"Age: ";
cin>> Age;
//Discount
if (Age <=24)
{
cout<<"Congratulation you have qualified for a 15 percent discount"<<endl;
}
else {
cout<<"Congratulation you have qualified for a 10 percent discount on all services rendered up to GHC 3,000.00"<<endl;
}

    return 0;
}
