#include<iostream>
using namespace std;
class Student{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdate(int a1,int b1,int c1);
    void getdata(){
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b<<endl;
        cout<<"the value of c is:"<<c<<endl;
        cout<<"the value of d is:"<<d<<endl;
        cout<<"the value of e is:"<<e<<endl;
        }

};
void Student::setdate(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Student s ;
    s.setdate(1,8,6);
    s.getdata();
    return 0;
}

