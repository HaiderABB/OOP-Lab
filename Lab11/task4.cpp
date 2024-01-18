//#include <iostream>
//using namespace std;
//void F3(int a, int b)
//{
//	string eString;
//	double _result_;
//	eString = " ";
//	cout << "Function 3 starts" << endl;
//	try {
//
//		if (b == 0) {
//			throw eString;
//		}
//		else
//			_result_ = float(a) / float(b);
//		throw _result_;
//	}
//	catch (string s) {
//		cout << "2nd Number is 0" << endl;
//	}
//	catch (double p) {
//		cout << "1st Number when divided by 2nd Number gives : " << _result_ << endl << endl;
//
//	}
//	cout << "Function 3 ends" << endl;
//}
//void F2(int a, int b) {
//	cout << "Function 2 starts" << endl;
//	F3(a, b);
//	cout << "Function 2 ends" << endl;
//}
//void F1(int a, int b) 
//{
//	cout << "Function 1 starts" << endl;
//	F2(a, b);
//	cout << "Function 1 ends" << endl;
//}
//
//int main() {
//	cout << "main starts" << endl;
//	F1(9, 0);
//	cout << "main ends"<<endl;
//}