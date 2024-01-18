#include<iostream>
using namespace std;
class ComplexNumber 
{
private:
	int real, imaginary;
	static int count;
public:
	ComplexNumber()
	{
		real = 0;
		++count;
		imaginary =0;
	}
	ComplexNumber(int a ,int b)
	{
		++count;
	}
	void Input()
	{
		cout << "Enter real number : " << endl;
		cin >> real;
		cout << "Enter the complex part : " << endl;
		cin>>imaginary;
	}
	void Output()
	{
		cout << real << " + " << imaginary << "i" << endl;
	}
	void DisplayStaticCount()
	{
		cout << "The total number of objects created are : " << count << endl;
	}
	bool isEqual(const ComplexNumber&temp)
	{
		if (real == temp.real && imaginary == temp.imaginary)
		{
			return 0;
		}
		else
			return 1;
	}
	ComplexNumber Conjugate();
	void operator = (const ComplexNumber& temp1)
	{
		real = temp1.real;
		imaginary = temp1.imaginary;
		cout << real << " + " << imaginary << "i" << endl;
	}
	ComplexNumber operator+ (const ComplexNumber& num);
	ComplexNumber operator- (const ComplexNumber& num);
	ComplexNumber operator* (const ComplexNumber& num);
	ComplexNumber& operator ++()
	{
		real = ++real;
		imaginary = ++imaginary;
		ComplexNumber temp2(0, 0);
		temp2.real = real;
		temp2.imaginary = imaginary;
		return temp2;
	}
	ComplexNumber& operator --()
	{
		ComplexNumber temp2(0, 0);
		temp2.real = real-1;
		temp2.imaginary = imaginary-1;
		return temp2;
	}
	ComplexNumber operator ++(int) {
		ComplexNumber temp2(0, 0);
		temp2.real = real+1;
		temp2.imaginary = imaginary+1;
		return temp2;
	} // post-increment
	ComplexNumber operator --(int) {
		ComplexNumber temp2(0, 0);
		temp2.real = real-1;
		temp2.imaginary = imaginary-1;
		return temp2;
	} // post-decrement
	bool operator>=(const ComplexNumber& num)
	{
		if (real >= num.real && imaginary >= num.imaginary)
		{
			return 0;
		}
		else
			return 1;
	}
	bool operator<=(const ComplexNumber& num)
	{
		if (real <= num.real && imaginary <= num.imaginary)
		{
			return 0;
		}
		else
			return 1;
	}
	bool operator!=(const ComplexNumber& num)
	{
		if (real == num.real && imaginary == num.imaginary)
		{
			return 1;
		}
		else
			return 0;
	}
	~ComplexNumber()
	{

	}
};
int ComplexNumber::count = 0;
ComplexNumber ComplexNumber::operator+(const ComplexNumber&temp)
{
	int r, i;
	r = real + temp.real;
	i = imaginary + temp.imaginary;
	ComplexNumber temp2(0,0);
	temp2.real = r;
	temp2.imaginary = i;
	return temp2;
}
ComplexNumber ComplexNumber::operator-(const ComplexNumber&temp)
{
	int r, i;
	r = real - temp.real;
	i = imaginary - temp.imaginary;
	ComplexNumber temp2(0, 0);
	temp2.real = r;
	temp2.imaginary = i;
	return temp2;
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber& temp)
{
	int r, i;
	r = real * temp.real;
	i = imaginary * temp.imaginary;
	ComplexNumber temp2(0, 0);
	temp2.real = r;
	temp2.imaginary = i;
	return temp2;
}
ComplexNumber ComplexNumber::Conjugate()
{
	int newIm;
		newIm = -1*(imaginary);
		ComplexNumber temp2(0, 0);
		temp2.real = real;
		temp2.imaginary = newIm;
		return temp2;
}
int main()
{
	int check;
	ComplexNumber comp1(5,7), comp2(39,12);
	comp1.Input();
	comp2.Input();
	ComplexNumber comp3;
	cout << "The two imaginary numbers are : " << endl;
	comp1.Output();
	comp2.Output();
	cout << "First adding the two objects : " << endl;
	comp3 = comp1 + comp2;
	cout << "Now subtracting the two objects : " << endl;
	comp3 = comp1 - comp2;
	cout << "Now multiplying the two objects : " << endl;
	comp3 = comp1 * comp2;
	cout << "Now taking the conjugate : " << endl;
	comp3=comp1.Conjugate();
	comp3=comp2.Conjugate();
	cout << "Now comparing the two complex numbers : " << endl;
	check=comp1.isEqual(comp2);
	cout << check << endl;
	cout << "Pre Increment : " << endl;
	comp3=++comp1;
	comp3=++comp2;
	cout << "Pre Decrement : " << endl;
	comp3 = --comp1;
	comp3 = --comp2;
	cout << "Post Decrement : " << endl;
	comp3 = comp1--;
	comp3 = comp2--;
	cout << "Post Increment : " << endl;
	comp3 = comp1++;
	comp3 = comp2++;
	cout << "Greater then equal to, 0 means true and 1 means false : " << endl;
	check = comp1 >= comp2;
	cout << check << endl;
	cout << "Less then equal to, 0 means true and 1 means false : " << endl;
	check = comp1 <= comp2;
	cout << check << endl;
	cout << "Not Equal to : " << endl;
	check = comp1 != comp2;
	cout << check << endl;
}