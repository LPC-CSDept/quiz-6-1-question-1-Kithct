#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getinput(int &,int &,float &,float &);
//void getinput(float &,float &);
void swapTwoValues(int &,int &,float &,float &);
//void swapTwoValues(float &,float &);

int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

// ******************************
// Implement all your functions here
// ******************************
void getinput(int &n1,int &n2)
{
	cin>>n1>>n2;
}
void getinput(float &f1,float &f2)
{
	cin>>f1>>f2;
}
void swapTwoValues(int &n1,int n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
void swapTwoValues(float &f1,float &f2)
{
	float temp;
	temp=f1;
	f1=f2;
	f2=temp;
}