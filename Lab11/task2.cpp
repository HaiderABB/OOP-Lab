//#include<iostream>
// #include<string>
//using namespace std;
//class tornadoException {
// int m;
// string s;
//public:
//	tornadoException(){
//		m = 0;
//		s = "Tornado: Take cover immediately!\n";
//	}
//	tornadoException(int m) {
//		this->m = m;
//		s = "Tornado: " + to_string(m) + " miles away and approaching!\n";}
//	~tornadoException() {}
//	string what() { return s; }
//};
//int main()
//{
//	int m;
//	try
//	{
//		cout << "Enter Distance of tornado" << endl;
//		cin >> m;
//		if (m == 0)
//	    throw tornadoException();
//	    else if (m > 0)
//		throw tornadoException(m);
//	    else if (m < 0)
//		throw m;
//	}
//	catch(int m)
//	{
//		cout << "Distance of Tornado is : " << m << endl;
//		cout << "Incorrect Distance, Enter a Non-negative Value!\n";
//	}
//	catch (tornadoException obj) 
//	{
//		cout << obj.what();
//	}
//}
//
//
//
