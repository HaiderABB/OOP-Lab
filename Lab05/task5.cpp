//#include<iostream>
//using namespace std;
//class Student {
//private:
//	string name;
//	static int totalSt;
//public:
//	Student(string n)
//	{
//		cout << "Enter the name of the student : " << endl;
//		cin >> n;
//		name = n;
//		++totalSt;
//	}
//	void Setter()
//	{
//		cout << "Enter the name you want to change it to : " << endl;
//		cin >> name;
//	}
//	Student(const Student& temp)
//	{
//		name = temp.name;
//		++totalSt;
//	}
//	const void getName()
//	{
//		cout << "The name is : " << name;
//	}
//	static void getTotalSt()
//	{
//		cout << "The total students are : " << totalSt << endl;
//	}
//};
//int Student::totalSt = 0;
//int main()
//{
//	Student obj1("Haider"), obj2("Abbas");
//	const Student obj3(obj1);
//	//obj3.Setter(); Doesnt let u modify
//	 obj1.getTotalSt();
//}