//#include<iostream>
//using namespace std;
////FUNCTION FOR INITIALIZING THE ARRAY
//void input(int **array,int rows,int columns)
//{
//	cout << "Initialize the array : " << endl;
//	for (int i = 0; i < rows; ++i)
//	{
//		for (int j = 0; j < columns; ++j)
//		{
//			cin >> array[i][j];
//		}
//	}
//}
////FUNCTION FOR SUM ROWS WISE
//void rowSum(int** array, int rows, int columns)
//{
//	int sum;
//	cout << "The sum of every row now " << endl;
//	for (int i = 0; i < rows; ++i)
//	{
//		sum = 0;
//		cout << "The sum of row " << i + 1 << " ";
//		for (int j = 0; j < columns; ++j)
//		{
//			sum = sum + array[i][j];
//		}
//		cout << sum << endl;
//	}
//}
////FUNCTION FOR SUM COLUMNS WISE
//void columnSum(int **array,int rows,int columns)
//{
//	int sum;
//	for (int i = 0; i < rows; ++i)
//	{
//		sum = 0;
//		cout << "The sum of column " << i + 1 << " ";
//		for (int j = 0; j < columns; ++j)
//		{
//			sum = sum + array[j][i];
//		}
//		cout << sum << endl;
//	}
//}
//int  main()
//{
//	int rows, columns;
//	cout << "Enter rows " << endl;
//	cin >> rows;
//	cout << "---------------" << endl;
//	cout << "Enter columns " << endl;
//	cin >> columns;
//	int** array = new int* [rows];
//	for (int i = 0; i < rows; ++i)
//		array[i] = new int[columns];
//	cout << "---------------" << endl;
//	input(array, rows, columns);
//	rowSum(array, rows, columns);
//	cout << "---------------" << endl;
//	columnSum(array, rows, columns);
//	cout << "---------------" << endl;
//
//}