#include<iostream>
#define f(x,y) x+y
using namespace std;

int main()
{
float x0, y0, xn, h, yn, slope;
int i, n;
cout<<" \nSolution of Initial value problem using Euler’s method."<< endl;
cout<<" \n\nEnter Initial Condition"<< endl;
cout<<" x0 : ";
cin>> x0;
cout<<" y0 : ";
cin >> y0;
cout<<" Enter Calculation Point xn : ";
cin>>xn;
cout<<" Enter Number of Steps: ";
cin>> n;

/* Calculating step size (h) */
h = (xn-x0)/n;

/* Euler's Method */
cout<<"\nx0\ty0\tslope\tyn\n";
cout<<" ----------------------------------\n";

for(i=0; i < n; i++)
{
slope = f(x0, y0);
yn = y0 + h * slope;
cout<< x0<<"\t"<< y0<<"\t"<< slope<<"\t"<< yn<< endl;
y0 = yn;
x0 = x0+h;
}
cout<<"\n Value of y at x : "<< xn<< " is " << yn;
return 0;
}