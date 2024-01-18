//#include<iostream>
//using namespace std;
//class Operation 
//{
//	int a, b;
//public:
//	Operation()
//	{
//		cout << "Constructor called : " << endl;
//		setter();
//		getter();
//	}
//	void setter()
//	{
//		cout << "Enter a : " << endl;
//		cin >> a;
//		cout << "Enter b : " << endl;
//		cin >> b;
//	}
//	void getter()
//	{
//		cout << "The value of a is : " << a << endl;
//		cout << "The value of b is : " << b << endl;
//	}
//	int sum();
//	int difference();
//	int product();
//	float division();
//	~Operation()
//	{
//		a=NULL;
//		b = NULL;
//	}
//};
//inline int Operation::sum() {
//	cout << "The sum of a and b is : " << a + b << endl;
//	return 0;
//}
//inline int Operation::difference()
//{
//	cout << "The difference of a and b is : " << a - b << endl;
//	return 0;
//}
//inline int Operation::product()
//{
//	cout << "The product of a and b is : " << a * b << endl;
//	return 0;
//}
//inline float Operation::division()
//{
//	double div = a / b;
//	cout << "The division of a and b gives : " << div << endl;
//	return 9;
//}
//int main()
//{
//	int num = 0;
//	while (num != -1)
//	{
//		cout << "Functions              Input" << endl;
//		cout << "sum                    1" << endl;
//		cout << "division               2" << endl;
//		cout << "difference             3" << endl;
//		cout << "product                4" << endl;
//		cout << " Enter your choice : " << endl;
//		cin >> num;
//		while (num < 1 || num>4)
//		{
//			cout << "Enter right option : " << endl;
//			cin >> num;
//		}
//		Operation op1;
//		if (num == 1)
//		{
//			
//			op1.sum();
//		}
//		else if (num == 2)
//		{
// 
//			
//			op1.division();
//		}
//		else if (num == 3)
//		{
//		
//			op1.difference();
//		}
//		else if (num == 4)
//		{
//		
//			op1.product();
//		}
//		cout << "------------------------------------" << endl;
//		cout << "Enter -1 to exit or any other digit if you dont want to exit : " << endl;
//		cin >> num;
//		system("cls");
//	}
//	cout << "Bye-Bye" << endl;
//}