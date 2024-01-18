//#include<iostream>
//using namespace std;
//class Time {
//	int hr;
//	int min;
//public:
//	Time() {}
//	Time(int h, int m);
//	void setTime(int h , int m);
//	void getTime(int& h, int& m);
//	void printTime();
//	void incrementHours();
//	void incrementMin();
//	int retHour();
//	int retMin();
//};
//Time::Time(int h, int m)
//{
//	hr = h, min = m;
//}
//int Time :: retMin()
//{
//	return min;
//}
//int Time:: retHour()
//{
//	return hr;
//}
//void Time::setTime(int h, int m)
//{
//	hr = h;
//	min = m;
//}
//void Time::getTime(int& h, int& m)
//{
//	h = hr;
//	m = min;
//
//}
//void Time::printTime()
//{
//	cout << "Time : " << hr << " : " << min << endl;
//}
//void Time:: incrementHours()
//{
//	if (hr == 23)
//	{
//		hr = 0;
//	}
//	else
//		++hr;
//}
//void Time:: incrementMin()
//{
//	if (min == 59)
//	{
//		min = 0;
//		incrementHours();
//	}
//	else
//		++min;
//
//}
//	class Date {
//		int month;
//		int day;
//		int year;
//		public:
//			Date(){}
//			Date(int m, int d, int y);
//			void setDate(int m, int d, int y);
//			void getDate(int& m, int& d, int& y);
//			void printDate();
//			int retYear();
//			int retMonth();
//			int retDay();
//	};
//	Date::Date(int m, int d, int y)
//	{
//		month = m;
//		day = d;
//		year = y;
//	}
//	int Date:: retDay()
//	{
//		return day;
//	}
//	int Date:: retMonth()
//	{
//		return month;
//	}
//	void Date ::setDate(int m, int d, int y)
//	{
//		month = m;
//		day = d;
//		year = y;
//	}
//	void Date::getDate(int& m, int& d, int& y)
//	{
//		m = month;
//		d = day;
//		y = year;
//	}
//	void Date::printDate()
//	{
//		cout << "The Date is : " << endl;
//		cout << day << " / " << month << " / " << year << endl;
//	}
//	int Date:: retYear()
//	{
//		return year;
//	}
//	class Event {
//		string eventName;
//		Time EventTime;
//		Date eventDate;
//	public:
//		Event(int h = 0, int min = 0, int m = 1, int d = 1,int y=1990, string n ="Christmas")
//		{}
//		void setEventData(int h, int min, int m, int d, int y, string n);
//		void printEventData();
//	};
//	void Event::setEventData(int h, int min, int m, int d, int y, string n)
//	{
//		EventTime.setTime(h, min);
//		eventDate.setDate(m, d, y);
//		eventName = n;
//	}
//	void Event::printEventData()
//	{
//		cout << "-----------------------" << endl;
//		cout << "Event Name : " << eventName << endl;
//		cout << "Event Date : " << eventDate.retDay() << " / " << eventDate.retMonth() << " / " << eventDate.retYear() << endl;
//		cout << "Event Time : " << EventTime.retHour() << " : " << EventTime.retMin() << endl;
//	}
//int main()
//{
//	Event Object;
//	Object.setEventData(6, 0, 12, 25, 10, "Christmas");
//	Object.printEventData();
//	Event Object2;
//	Object2.setEventData(1,15,7,4,2010,"Fourth of July");
//	Object2.printEventData();
//	return 0;
//}