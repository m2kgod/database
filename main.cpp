#include<iostream>
#include<fstream>
#include "progressbar.h"
#include "db.h"

using namespace std;

void banner(),progress();//prototype of banner

int main()//main function
{
    int i;
    char country[20];
    progressb();
    cout<<endl<<endl;
    banner();//we are calling the banner function
    cout<<endl<<endl;
    progressb();
    data();
    
    
    return 0;

}

void banner()
{
    string str;
    fstream file("banner.txt", ios::in);
    while(getline(file,str))
    {
        cout<< str << endl;

    }
    file.close();
}
