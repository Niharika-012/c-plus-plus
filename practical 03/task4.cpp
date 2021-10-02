/*Task4- take a char variable and use cin to take
its value from the user , cout it and it will only return
one character and loss rest of the data you entered!
resolve this problem by using getline()..*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    
    cout<<"Enter your name : "<<endl;

    getline(cin , a);
    
    cout<<"Hi,"<<a<<" How are you doing?\n"<<endl;
    
    return 0;
}
    
