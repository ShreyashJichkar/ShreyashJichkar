222#include <iostream>
using namespace std;
void add (int a,float b)
{
cout<<"subtraction="<<a-b;
}
void sub(int a,float b)
{
cout <<"subtraction="<<a-b;
}
void prod (int a, float b)
{
cout <<"product="<<a*b;
}
void div(float a,float b)
{
cout <<"division="<<a/b;
}
int main()
{
   float a,b;
   cout<<"enter two no, =";
   cin>>a>>b;
   add(a,b);
   sub(a,b);
   prod(a,b);
   div(a,b);
}
   
