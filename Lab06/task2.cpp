//#include<iostream>
//using namespace std;
//class Quadratic
//{
//	int a, b, c;
//public:
//	Quadratic()
//	{
//
//	}
//	Quadratic(int num1,int num2,int num3)
//	{
//		cout << "Enter a " << endl;
//		cin >> a;
//		cout << "Enter b " << endl;
//		cin >> b;
//		cout << "Enter c : " << endl;
//		cin >> c;
//	}
//	Quadratic(const Quadratic& temp)
//	{
//		a = temp.a;
//		b = temp.b;
//		c = temp.c;
//	}
//	void setter()
//	{
//		cout << "Enter a : " << endl;
//		cin >> a;
//		cout << "Enter b : " << endl;
//		cin >> b;
//		cout << "Enter c : " << endl;
//		cin >> c;
//		cout << "The equation is : " << a << "x^2 + " << b << "x + " << c << endl;
//	}
//	friend Quadratic operator + (const Quadratic&temp1, const Quadratic& temp2)
//	{
//		int x, y, z;
//		x = temp1.a + temp2.a;
//		y = temp1.b + temp2.b;
//		z = temp1.c + temp2.c;
//		Quadratic temp;
//		temp.a = x;
//		temp.b = y;
//		temp.c = z;
//		return temp;
//	}
//    void operator = (const Quadratic& temp1)
//	{
//		a = temp1.a;
//		b = temp1.b;
//		c = temp1.c;
//		cout << a << "x^2 + " << b << "x+ " << c << endl;
//	}
//	friend Quadratic operator - (const Quadratic& temp1, const Quadratic& temp2)
//	{
//		int x, y, z;
//		x = temp1.a - temp2.a;
//		y = temp1.b - temp2.b;
//		z = temp1.c - temp2.c;
//		Quadratic temp;
//		temp.a = x;
//		temp.b = y;
//		temp.c = z;
//		return temp;
//	}
//	friend void operator * (const Quadratic& temp1)
//	{
//		cout << "Enter the number you want to multiply with the quadratic equation : " << endl;
//		int x, y, z;
//		int cons;
//		cin >> cons;
//		x = temp1.a * cons;
//		y = temp1.b * cons;
//		z = temp1.c * cons;
//		cout << "After constant product it becomes : " << x << "x^2 + " << y << "x + " << z << endl;
//	}
//    void operator >>(const Quadratic &temp1)
//	{
//		cout << "Enter a : " << endl;
//		cin >> a;
//		cout << "Enter b : " << endl;
//		cin >> b;
//		cout << "Enter c : " << endl;
//		cin >> c;
//	}
//	void operator<<(const Quadratic& temp1)
//	{
//		cout << a << " " << b << " " << c << endl;
//		cout << "The equation is : " << a << "x^2 + " << b << "x + " << c << endl;
//	}
//	void operator==(const Quadratic& temp)
//	{
//		bool check = true;
//		if (a == temp.a && b == temp.b && c == temp.c)
//		{
//			check = true;
//		}
//		else
//			check = false;
//		if (check)
//			cout << "The objects are equal " << endl;
//		else
//			cout << "They are not equal : " << endl;
//	}
//	void operator !=(const Quadratic& temp)
//	{
//		bool check = true;
//		if (a == temp.a && b == temp.b && c == temp.c)
//		{
//			check = true;
//		}
//		else
//			check = false;
//		if (check)
//			cout << "The objects are equal " << endl;
//		else
//			cout << "They are not equal : " << endl;
//	}
//};
//int main()
//{
//	int num1=0, num2=0, num3=0;
//	Quadratic obj1, obj3, obj5;
//	obj1.setter();
//	Quadratic obj2(obj1);
//	cout << "After the sum is : " << endl;
//	obj3=obj1 + obj2;
//	cout << "----------------------------" << endl;
//	cout << "Now for difference : " << endl;
//	Quadratic obj4(num1, num2, num3);
//	obj3 = obj1 - obj4;
//	cout << "----------------------------" << endl;
//	cout << "Now for constant product : " << endl;
//	*obj1;
//	cout << "----------------------------" << endl;
//	cout << "Now for input and output : " << endl;
//	obj5 >> obj5;
//	obj5 << obj5;
//	cout << "----------------------------" << endl;
//	cout << "Now checking whether the objects are equal or not : " << endl;
//	obj1 == obj2;
//	cout << "----------------------------" << endl;
//	cout << "Now checking for In-Equality : " << endl;
//	obj1 != obj4;
//
//}