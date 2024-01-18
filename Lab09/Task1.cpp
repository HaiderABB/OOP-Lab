//#include<iostream>
//#include<string>
//#include<string.h>
//using namespace std;
//class Person {
//protected:
//	string name;
//	int ID;
//	int age;
//public: 
//	Person() { cout << "Constructor of Person " << endl; }
//	Person(int id, int a, string n)
//	{
//		ID = id;
//		age = a;
//		name = n;
//	}
//	void print()
//	{
//		cout << " Name : " << name;
//	}
//	~Person() {
//		cout << "Destructor of Person " << endl;
//	}
//};
//class Student:public Person {
//protected:
//	double cgpa;
//	string rollNo;
//public:
//	Student(){ cout << "Constructor of Student" << endl; }
//	Student(double c, string roll, int id, int a, string n) :Person(id, a, n) { cout << "Constructor of Student" << endl; cgpa = c; rollNo = roll; }
//	~Student() { cout << "Destructor of Student" << endl; }
//	void print()
//	{
//	Person::print();
//		cout << " , " << "CGPA = " << cgpa << " , " << "Age : " << age << endl;
//	}
//	void input()
//	{
//		cout << "Enter Name : ";
//		cin.ignore();
//		getline(cin,name);
//		cout << "Enter age : " << endl;
//		cin >> age;
//		cout << "Enter ID : " << endl;
//		cin >> ID;
//		cout << "Enter Cgpa " << endl;
//		cin >> cgpa;
//		cout << "Enter Roll No : " << endl;
//		cin.ignore();
//		getline(cin, rollNo);
//	}
//};
//class Undergrad : public Student {
//	string fyp_name;
//public:
//	Undergrad(){ cout << "Constructor of Undergrad" << endl; }
//	Undergrad(string fn, double c, string roll, int id, int a, string n):Student( c,  roll,  id, a,  n)
//	{
//		fyp_name = fn;
//		cout << "Constructor of Undergrad" << endl;
//	}
//	void print()
//	{
//
//		Student::print();
//		cout << "FYP Name  : " << fyp_name;
//	}
//	void input()
//		{
//		cout << "Enter FYP Name : " << endl;
//		cin.ignore();
//		getline(cin, fyp_name);
//		}
//	~Undergrad()
//	{
//		cout << "Destructor of Undergrad" << endl;
//	}
//};
//class Postgrad :public Student
//{
//	string supervisorName;
//	string thesisTopic;
//public:
//	Postgrad(){ cout << "Constructor of Postgrad " << endl; }
//	Postgrad(string sName, string topic, double c, string roll, int id, int a, string n) : Student(c, roll, id, a, n)
//	{
//		supervisorName = sName;
//		thesisTopic = topic;
//		cout << "Constructor of Postgrad " << endl;
//	}
//	void print()
//	{
//
//	 Student::print();
//	 cout << "Supervisor Name : " << supervisorName << " , " << " Thesis Topic :" << thesisTopic << endl;
//	}
//	void input()
//	{
//		cout << "Enter SuperVisor Name : " << endl;
//		cin.ignore();
//		getline(cin, supervisorName);
//		cout << "Enter Thesis Topic " << endl;
//		cin.ignore();
//		getline(cin, thesisTopic);
//	}
//    void changeInfo(char*Topic)
//    {
//		int i = 0;
//		while (Topic[i] != '\0')
//		{
//			thesisTopic[i] = Topic[i];
//			++i;
//		}
//    }
//	void changeInfo(char* Topic, char* sName)
//	{
//		int i = 0;
//		while (Topic[i] != '\0')
//		{
//			thesisTopic[i] = Topic[i];
//			++i;
//		}
//		i = 0;
//		while (Topic[i] != '\0')
//		{
//			supervisorName[i] = sName[i];
//			++i;
//		}
//	}
//	~Postgrad()
//	{
//		cout << "Destructor of Postgrad" << endl;
//	}
//};
//int main()
//{
//	char t[] = "Testing";
//	char n[] = "Abdullah";
//	Student* ptr1 = new Undergrad("Expense Manager", 3.25, "22l7862", 123, 19, "Haider Abbas");
//	Student* ptr2 = new Postgrad("Ahmed Zafar", "AI", 3.39, "22l7959", 245, 20, "Momin Shehzad");
//	ptr1->print();
//	ptr1->input();
//	ptr1->print();
//	cout << "Enter Details for the postgrad" << endl;
//	cout << "-----------" << endl;
//	ptr2->print();
//	ptr2->input();
//	ptr2->print();
//	ptr2->changeInfo(t);
//	ptr2->changeInfo(t, n);
//}