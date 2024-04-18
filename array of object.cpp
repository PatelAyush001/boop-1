#include<iostream>
using namespace std;
 
class Employee
{
  int id;
  char name[30];
  public:
  void getdata();
  void putdata();
};
void Employee::getdata(){
  cout<<"Enter Id : ";
  cin>>id;
  cout<<"Enter Name : ";
  cin>>name;
}
void Employee::putdata(){
  cout<<id<<" ";
  cout<<name<<" ";
  cout<<endl;
}
int main(){
    int i,n;
    std::cout<<"Enter Objects No. : "<<endl;
    std::cin>>n;
  Employee emp[50];
  for(i=0;i<n;i++){
  emp[i].getdata();
  }
  for(i=0;i<n;i++){
  emp[i].putdata();
  }
  return 0;
 
}