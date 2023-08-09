#include<iostream>
using namespace std;
class Matrix{
    int a[3][3];
    public:Matrix(){
        cout<<"Enter Matrix values:"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin >>a[i][j];
            }
        }
    }
    void display(){
        cout<<"The Matrix values are:"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    friend void interchange(Matrix &obj);
};
void interchange(Matrix &obj){
    int m,n,t;
    cout<<"Enter the column no's you want to interchange:";
    cin>>m>>n;
    m--;
    n--;
    for(int i=0;i<3;i++)
    {
        t           = obj.a[i][m];
        obj.a[i][m] = obj.a[i][n];
        obj.a[i][n] = t;
                
    }
    
    
}
int main(){
    Matrix obj;
    obj.display();
    interchange(obj);
    cout<< "After interchanging ";
    obj.display();
}
