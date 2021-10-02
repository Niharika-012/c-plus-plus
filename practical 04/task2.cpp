
/* access through using "using" keyword
*/

#include<iostream>

using namespace std;

 namespace first{
     
      int add(int a , int b)
     {
        
         return a+b;
     }
 }
    
    namespace second{
     
      float add(float a , float b)
     {
         
         return a+b;
     }
 }
    

using namespace first;

 int main(){
     
     cout<<"Sum : "<<add(1,2)<<endl;
     cout<<"Sum : "<<add(1.2f,2)<<endl;
     cout<<"Sum : "<<add(2,2.1f)<<endl;
     cout<<"Sum : "<<add(1.1f,2.3f)<<endl;
     cout<<"Sum : "<<add(0,0)<<endl;
     
     return 0;
 }
