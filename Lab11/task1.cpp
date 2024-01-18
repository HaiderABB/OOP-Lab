//#include <iostream>
//using namespace std;
//int main() {
//	int items;
//	double cost;
//	try
//	{
//		cout << "Enter the number of items: " << endl;
//		cin >> items;
//		if (items < 0)
//			throw items;
//		cout << "Enter the cost of one item: " << endl;
//		cin >> cost;
//		if (cost < 0)
//			throw cost; cout << "Total cost: "	<< items * cost << endl;
//	}
//	catch (int num)
//	{
//		cout << " Negative number of items: " << num<< endl;
//		cout << " Number of items must be non-negative" << endl;
//	}
//	catch (double dec)
//	{
//		cout << "Negative unit cost: " << dec<< endl;
//		cout << "Unit cost must be nonnegative :"<< endl;
//	}
//
//	//Output for 25 and 5.50 is 137.5.
//	//Output for -55 and 2.80 is "Number of items must be nonnegative."
//	//Output for 37 and -4.50 is "Unit cost must be nonnegative."
//	//Output for -10 and -2.50 is "Number of items must be nonnegative."
//}