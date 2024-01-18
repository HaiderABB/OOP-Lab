//#include<iostream>
//using namespace std;
//void copyArray(int* &arr, int*& arr1, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		*(arr1 + i) = *(arr + i);
//	}
//}
//int reduceArray(int*& arr, int*& arr1, int size)
//{
//	int size1;
//	cout << "Enter the size you want to reduce the array\n";
//	cin >> size1;
//	int totalSize = size - size1;
//	for ( int i = 0; i < totalSize; ++i)
//	{
//		++arr;
//	}
//	cout << *arr;
//	cout << endl << "----------" << endl;
//	for (int j = 0; j < size; ++j)
//	{
//		*(arr1 + j) = NULL;
//	}
//	copyArray(arr, arr1, size1);
//	return size1;
//}
//int main()
//{
//	int size;
//	cout << "Enter size of the array \n";
//	cin >> size;
//	int* arr1 = new int[size];
//	int* ptr = new int[size];
//	cout << "Initialize the Array\n";
//	cout << "----------------------------" << endl;
//	for (int i = 0; i < size; ++i)
//	{
//		cin >> *(ptr + i);
//	}
//	copyArray(ptr, arr1, size);
//	int reducedSize=reduceArray(ptr, arr1, size);
//	for (int i = 0; i < reducedSize; ++i)
//	{
//		cout << *(ptr + i) << "\n";
//	}
//}