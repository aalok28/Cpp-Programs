#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main()
{

    int a,b,c;
    float r1,r2;
    cout<<"Enter the values of a , b & c: ";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots are:"<<r1<<" "<<r2;
    getch();


    return 0;
}
