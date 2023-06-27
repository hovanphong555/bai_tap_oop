#include<iostream>
using namespace std;

void fun(int *p)
{
    int q = 10;
    cout<<" hello";
    q=100;
    p = &q;
    
}
void vui(int &s){
    int a=6;
    s=7;

}

int main()
{
    int r = 30;
    int *p = &r;
    fun(p);
    cout<<*p;

    int a=3;
    int *s=&a;
    vui(a);
    cout<<a;
}


