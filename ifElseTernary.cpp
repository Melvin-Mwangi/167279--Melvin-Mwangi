#include<iostream>
using namespace std;
int main()
    {
  int age;
  cout<<"Enter the age of your child:";
  cin>>age;
  if(age>=4)
    {
    cout<<"Admit successfull"<<age<<endl;
    }
    else
      {
      cout<<"Admit failed"<<endl;
      }
      //using ternary operate
      cout<<"Using a ternary operator"<<endl;
      string message =(age>=4)?"Admitted successfull":"Admitted failed";
      cout<<message<<endl;
      return 0;
   }
