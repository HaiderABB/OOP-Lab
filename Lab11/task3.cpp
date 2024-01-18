//#include <iostream>
//#include<string>
//using namespace std;
//string monthName(int month)
//{
//    if (month == 1)
//		return "January";
//	else if (month == 2)
//		return "February";
//	else if (month == 3)
//		return "March";
//	else if (month == 4)
//		return "April";
//	else if (month == 5)
//		return "May";
//	else if (month == 6)
//		return "June";
//	else if (month == 7)
//		return "July";
//	else if (month == 8)
//		return "August";
//	else if (month == 9)
//		return "September";
//	else if (month == 10)
//		return "October";
//	else if (month == 11)
//		return "November";
//	else if (month == 12)
//		return "December";
//}
//
//class invalidDay {
//private: 
//string s;
//public: 
//	invalidDay()
//	{
//		s = "Day Entered is Invalid.";
//	}
//	string getString() 
//	{
//		return s;
//	}
//};
//
//class invalidMonth {
//private: string s;
//public: 
//	invalidMonth() {
//		s = "Month Entered is Invalid.";
//	}
//
//	string getString()
//	{
//		return s;
//	}
//};
//class invalidYear {
//private: 
//	string s;
//public : 
//	invalidYear()
//	{
//	   s = "Year Entered is Invalid.";
//	}
//
//	string getString() 
//	{
//		return s;
//	}
//};
//
//int main() 
//{
//	int day, month, year;
//	try 
//	{
//		cout << "Enter Day :" << endl;
//		cin >> day;
//		if (day > 31 || day < 1)
//			throw invalidDay();
//	}
//	catch (invalidDay obj) 
//	{
//		cout << endl;
//		cout << obj.getString() << endl;
//	}
//	try 
//	{
//		cout << " Enter Month " << endl;
//		cin >> month;
//		if (month > 12 || month < 1)
//			throw invalidMonth();
//		else if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
//			throw invalidMonth();
//		else if (day == 30 && month == 2)
//			throw invalidMonth();
//	}
//	catch (invalidMonth obj)
//	{
//		cout << endl;
//		cout << obj.getString() << endl;
//	}
//	try 
//	{
//		cout << " Enter Year : ";
//		cin >> year;
//		if (day == 29 && month == 2 && (year % 4 != 0))
//			throw invalidYear();
//		cout << monthName(month) << " " << day << ", " << year << endl;
//	}
//	catch (invalidYear obj)
//	{
//		cout << endl;
//		cout << obj.getString() << endl;
//	}
//}