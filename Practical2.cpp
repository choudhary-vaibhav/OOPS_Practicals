#include<iostream>

using namespace std;

class complex 
{
    public:

    int real, imaginary;

    complex()
    {
        real = 0;
        imaginary = 0;
    }

    complex(int val)
    {
        real = val;
        imaginary = val;
    }

    complex(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    complex add( complex, complex );
};

complex complex::add( complex c1, complex c2 )
{
    complex c3;

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    return c3;
}


int main()
{
    int real, imaginary;

    cout<<"For Same Values!";
    cout<<"\nEnter real part of the first complex no:";
    cin>>real;

    complex C1(real);

    cout<<"\nFor Different Values!";
    cout<<"\nEnter real part of the second complex no:";
    cin>>real;
    cout<<"Enter imaginary part of the second complex no:";
    cin>>imaginary;

    complex C2(real, imaginary);

    complex C3;
    C3 = C3.add(C1, C2);

    cout<<"\nSum of Two complex numbers: "<<C3.real<<" + "<<C3.imaginary<<"i";
    return 0; 
}