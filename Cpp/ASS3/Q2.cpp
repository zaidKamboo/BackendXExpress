#include<iostream>
using namespace std;
class Integer{
  int val;
  public:
      Integer()
      {
          cout<<" Enter a value:";
          cin>>val;
      }
      void operator ++ (int)
      {
          val++;
      }
      void operator -- (int)
      {
          val--;
      }
      void display(){
          cout <<" Value is :" <<val<<endl;
      }
};
int main()
{
    Integer integer1;
    integer1++;
    cout<<" After increment:"<<endl;
    integer1.display();
    integer1--;
    integer1--;
    cout<<" After decrement"<<endl;
    integer1.display();
}
