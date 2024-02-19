// Variety of notations for expressing initialization

#include<iostream>
#include<complex>
#include<vector>

using namespace std;

int main()
{
	double d1 = 2.3;
	double d2 {2.3};

	complex<double> z=1;
	complex<double> z2{d1,d2};
	complex<double> z3={1,2};

	vector<int> v{1,2,3,4,5,6};


	cout<<"d1: "<<d1<<"\n";
	cout<<"d2: "<<d2<<"\n";
	cout<<"z: "<<z<<"\n";
	cout<<"z2: "<<z2<<"\n";
	cout<<"z3: "<<z3<<"\n";
	cout<<"v:";

	for(int i:v)
	{
		cout<<" "<<i;
	}
	cout<<endl;

	return 0;

}
