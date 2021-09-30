#include<iostream>

using namespace std;

void Char()
{
  char a='A';
  cout<<"Char: "<<a<<endl;
  }
  
void Bool()
{
  bool a= false;
  cout<<"Bool: "<<a<<endl;
  }
 
void Short()
{
  short a=2;
  cout<<"Short: "<<a<<endl;
}

void Int()
{
  int a=1234;
  cout<<"Int: "<<a<<endl;
  }
  
void Long()
{
  long a= 1567890324;
  cout<<"Long: "<<a<<endl;
  }
  
void Float()
{
  float a=23.567f;
  cout<<"Float: "<<a<<endl;
  }
  
void Double()
{
  double a=678.11134100;
  cout<<"Double: "<<a<<endl;
  }

void long_double()
{
    long double a=12.675439091;
  cout<<"LOng Double: "<<a<<endl;
  }
  
void wideChar()
{
  
  wchar_t a = L'z';
  wcout<<"Wide char: "<<a<<endl;
  }
  

int main()
{
  Char();
  Bool();
  Short();
  Int();
  Long();
  Float();
  Double();
  long_double();
  wideChar();
  
  return 0;
  
