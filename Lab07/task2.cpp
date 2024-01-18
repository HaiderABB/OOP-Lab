//#include<iostream>
//using namespace std;
//class Stat {
//	int size;
//	int* array;
//public:
//	Stat()
//	{}
//	void getter()
//	{
//	
//		for (int j = 0; j < size; ++j)
//		{
//			cout << array[j] << ", ";
//		}
//		cout << endl;
//	}
//	void setter()
//	{
//		cout << "Enter size : " << endl;
//		cin >> size;
//		array = new int[size];
//		cout << "Initialize values : " << endl;
//		for (int i = 0; i < size; ++i)
//		{
//			cin >> array[i];
//		}
//	}
//	friend int median(Stat const &temp)
//	{
//		int store, median;
//		if (temp.size % 2 == 0)
//		{
//			store = temp.size / 2;
//			median=(temp.array[store] + temp.array[store - 1])/2;
//		}
//		else
//		{
//			store = temp.size / 2;
//			median = temp.array[store];
//		}
//		return median;
//	}
//	~Stat()
//	{
//		delete[] array;
//		array = nullptr;
//	}
//};
//int main()
//{
//	Stat obj1;
//	obj1.setter();
//	obj1.getter();
//	cout << "The median of the array is : " << median(obj1);
//}