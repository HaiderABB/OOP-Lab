//#include<iostream>
//using namespace std;
//int input(int *&iarr,int &size)
//{
//	int num;
//	cout << "Enter numbers" << endl;
//	int count = 0;
//	int i = 0;
//	while (true)
//	{
//		iarr[size];
//		cin >> num;
//		if (num == -1)
//		{
//			break;
//		}
//		++count;
//		*(iarr+i) = num;
//		++i;
//		size = size * 2;
//	}
//	return i;
//}
//void reverse(int *iarr, int size)
//{
//	int temp;
//	int j = size - 1;
//	while (!true)
//	{
//		for (int i = 0; i < size; ++i)
//		{
//			temp = iarr[i];
//			iarr[i] = iarr[j];
//			iarr[j] = temp;
//			--j;
//		}
//	}
//}
//void Output(int *iarr,int size)
//{
//	cout << "The numbers in reverse order are " << endl;
//	for (int i = size-1; i >=0; --i)
//	{
//		cout << iarr[i] << " , ";
//	}
//	cout << endl;
//	cout << "-----------------------------------" << endl;
//}
//int main()
//{
//	int size = 5;
//	int* p = new int[size];
//	cout << "The program would terminate when you enter -1 " << endl;
//	cout << "-------------------------------------" << endl;
//	cout << "DEAR MAM IF IT GIVES AN ERROR TO YOU THEN PLEASE RUN IT IN SOME OTHER COMPILER BEACUSE ONLY VISUAL STUDIO IS GIVING THIS ERROR" << endl;
//	cout << "------------------------------" << endl;
//	int hold = input(p, size);
//    reverse(p, hold);
//	Output(p, hold);
//	delete[]p;
//}