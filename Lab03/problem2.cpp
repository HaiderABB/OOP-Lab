//#include<iostream>
//#include<cstring>
//#include<cctype>
//using namespace std;
//char** allocateMemory(int& rows, int& cols) {
//    cout << "Enter number of rows: ";
//    cin >> rows;
//    cout << "Enter number of columns: ";
//    cin >> cols;
//    char** matrix = new char* [rows];
//    for (int i = 0; i < rows; i++) {
//        matrix[i] = new char[cols];
//    }
//    return matrix;
//}
//void inputMatrix(char** matrix, const int rows, const int cols) {
//    cout << "Enter values for the matrix: " <<endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//}
//void displayMatrix(char **matrix,const int &rows,const int&cols)
//{
//    cout << "Matrix: " << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            std::cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//void separateMatrix(char** matrix, const int& rows, const int& cols, char*& alphabets, char*& numbers, char*& specialChar, int&index_alpha,int&index_num,int &index_spec) {
//    int count_alpha = 0, count_num = 0, count_spec = 0;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            if (isalpha(matrix[i][j])) {
//                count_alpha++;
//            }
//            else if (isdigit(matrix[i][j])) {
//                count_num++;
//            }
//            else {
//                count_spec++;
//            }
//        }
//    }
//    alphabets = new char[count_alpha];
//    numbers = new char[count_num];
//    specialChar = new char[count_spec];
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            if (isalpha(matrix[i][j])) {
//                alphabets[index_alpha] = matrix[i][j];
//                index_alpha++;
//            }
//            else if (isdigit(matrix[i][j])) {
//                numbers[index_num] = matrix[i][j];
//                index_num++;
//            }
//            else {
//                specialChar[index_spec] = matrix[i][j];
//                index_spec++;
//            }
//        }
//    }
//}
//int main()
//{
//    int rows, cols;
//    char** matrix = allocateMemory(rows, cols);
//    inputMatrix(matrix, rows, cols);
//    displayMatrix(matrix, rows, cols);
//    int index_alpha = 0, index_num = 0, index_spec = 0;
//    char* alphabets;
//    char* numbers;
//    char* specialChar;
//    separateMatrix(matrix, rows, cols, alphabets, numbers, specialChar,index_alpha,index_num,index_spec);
//
//    cout << "Alphabets: " << endl;
//    for (int i = 0; i < index_alpha; i++) {
//        cout << alphabets[i] << " ";
//    }
//    cout << endl;
//    cout << "Numbers " << endl;
//    for (int j = 0; j < index_num; ++j)
//    {
//        cout << numbers[j] << " ";
//    }
//    cout << endl;
//    cout << "Special characters : " << endl;
//    for (int j = 0; j <index_spec; ++j)
//    {
//        cout << specialChar[j] << " ";
//    }
//}