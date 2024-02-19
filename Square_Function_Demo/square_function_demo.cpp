// Square a double precision floating-point number

#include<iostream>

using namespace std;

double square(double x)
{
        return x*x;
}

// The 'return type' void indicates that a function does not return a value
void print_square(double x)
{
        cout<<"The Square of "<<x<<" is "<<square(x)<<"\n";
}

int main()
{
        print_square(1.234);
}
