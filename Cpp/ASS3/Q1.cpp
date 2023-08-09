#include<iostream>
using namespace std;
class Part{
    int p_id;
    string p_name;
    float p_price;
    public:
        Part(int id,string name,float price)
        {
            p_id    = id;
            p_name  = name;
            p_price = price;
        }
        Part(Part &obj){
            p_id    = obj.p_id;
            p_name  = obj.p_name;
            p_price = obj.p_price;
        }
        void display(){
            cout << " Part details are :" << " id:"<<p_id<<" name:"<<p_name<<" price:"<<p_price<<endl;
        }
};
int main()
{
    int i;
    string n;
    float p;
    cout << " Enter details(Id,Name & Price) :";
    cin>>i>>n>>p;
    Part obj(i,n,p);
    obj.display();
    Part obj2(obj);
    cout<<" By using copy constructor : "<< endl;
    obj2.display();
}
