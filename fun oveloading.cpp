#include<iostream>
using namespace std;
class emp{
    public:
    void fun(int x){
        cout<<"the value of x is:"<<x<<endl;
    }
    void fun(double x){
        cout<<"the value of x is: "<<x<<endl;
    }
    void fun(int x,int y){
        cout<<"the value of x and y is:"<<x<<","<<y<<endl;
    }

};
int main(){
    emp a;
    a.fun(5);
    a.fun(2344.565687);
    a.fun(1,0);
}