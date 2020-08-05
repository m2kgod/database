#include<iostream>
using namespace std;
void data()
{
	
	char name[20],dad[20],mom[20],state[20],district[20],country[20],phone[16],ch[10],user[20];
	int code;
	cout<<endl<<"Enter the name of you who use this program : ";
	cin.getline(user,20);
	cout<<endl<<"Enter user's country of origin :";
	cin.getline(country,20);
	cout<<endl<<"Enter user's name :";
	cin.getline(name,20);
	cout<<endl<<"Enter user's father's name :";
	cin.getline(dad,20);
	cout<<endl<<"Enter user's mother's name:";
	cin.getline(mom,20);
	cout<<endl<<"Choose user's gender (Male/Female/other) : ";
	cin>>ch;
	cout<<endl<<"Enter user's country code : +";
	cin>>code;
	if(code==91)
	{
	   cout<<endl<<"Enter user's state : ";
	   cin.getline(state,20);
	   
	   cout<<endl<<"Enter user's district : ";
	   cin.getline(district,20);
	}
	cout<<endl<<"Enter the user's phone number(Maybe user have phone number using the above information) :";
	cin>>phone;
	cout<<endl<<"\n\t\t\t\t USER BIO DATA";
	cout<<"\n\t\t\t\t ---------------";
	cout<<endl<<"\n User's information given by:"<<user;
	cout<<endl<<"\n User's Name:"<<name;
	cout<<endl<<"\n User's Father's Name:"<<dad;
	cout<<endl<<"\n User's Mother's Name:"<<mom;
	cout<<endl<<"\n User's country:"<<country;
	cout<<endl<<"\n User's State:"<<state;
	cout<<endl<<"\n User's District:"<<district;
	cout<<endl<<"\n User's phone number :+"<<code<<" "<<phone;
	cout<<endl<<"\n User's Gender:"<<ch;
	cout<<endl<<"\n Fetching country information.......";
   
   cout<<"\t\t\t\tUSER NOT FOUND IN THE GOVERNMENT DATABASE ";	
	
}
