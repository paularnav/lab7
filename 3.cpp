# lab7
#include<iostream>
using namespace std;
class rectangular
{
 public:
 float l,b;
 float perimeter(float l,float b);
 float area(float l,float b);
};
float rectangular::perimeter(float l,float b)
{ return(2*l+2*b);}
float rectangular::area(float l,float b)
{ return(l*b);}
int main()
{
 rectangular rect1,rect2;
 float pr1,pr2,ar1,ar2;
 pr1=rect1.perimeter(3.5,5.5);
 pr2=rect2.perimeter(4.5,6.5);
 ar1=rect1.area(3.5,5.5);
 ar2=rect2.area(4.5,6.5);
 if(pr1>pr2)
 { cout<<pr1<<" is greater perimeter."<<endl;}
 else
 {cout<<pr2<<" is smaller perimeter."<<endl;}
 if(ar1>ar2)
 { cout<<ar1<<" is greater area."<<endl;}
 else
 {cout<<ar2<<" is smaller area."<<endl;}

 return 0;
}
