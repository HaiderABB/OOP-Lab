#pragma once
#include<iostream>
using namespace std;
class BiggerInt {
private:
	int int_length_;
	int* big_int_;
public:
	BiggerInt();
	//Constructor for Deep Copy
	BiggerInt(const int* obj, int size);
	void assign(const BiggerInt& obj);
	void assign(const int* big_int, int size);
	void append(const BiggerInt& obj);
	void append(const int* big_int, int size);
	int compareTo(const BiggerInt& obj);
	int compareTo(const int* big_int, int size);
	void print();
	void setter()
	{
		cout << "Enter the size" << endl;
		cin >> int_length_;
		while (int_length_ < 0)
		{
			cout << "Enter positive values : " << endl;
			cin >> int_length_;
		}
		if (big_int_ != nullptr)
		{
			delete[]big_int_;
		}
		big_int_ = new int[int_length_];
		cout << "Enter the values : " << endl;
		for (int i = 0; i < int_length_; ++i)
		{
			cin >> big_int_[i];
		}

	}
	void getter()
	{
		for (int i = 0; i < int_length_; ++i)
		{
			cout<< big_int_[i];
		}
	}
	int* getInt()
	{
		int* n = big_int_;
		return n;
	}
	int getSize()
	{
		int n = int_length_;
		return n;
	}
	~BiggerInt();
};