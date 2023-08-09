#include<iostream>
using namespace std;
class Circle{
    int radius;
    public:
        Circle(int ra,float pi=3.14){
            radius = ra;
            cout << "Area of circe with radius = "<<ra<<" is = "<<pi*radius*radius;
        }
};
int main(){
    int r;
    cout << "Enter radius of circle:";
    cin >> r;
    Circle obj(r);
}
