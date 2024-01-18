#include"taskHeader.h"
	BiggerInt::BiggerInt() {
		big_int_ = nullptr;
	};
	BiggerInt::BiggerInt(const int* obj, int size)
	{
		big_int_ = new int[size];
		for (int i = 0; i < size; ++i)
		{
			big_int_[i] = obj[i];
		}
		int_length_ = size;
	}
	void BiggerInt::assign(const BiggerInt& obj)
	{
		if (big_int_ != nullptr)
		{
			delete[]big_int_;
			big_int_ = nullptr;
		}
		int_length_ = obj.int_length_;
		big_int_ = new int[int_length_];
		for (int i = 0; i < int_length_; ++i)
		{
			big_int_[i] = obj.big_int_[i];
		}
	}
	void BiggerInt::assign(const int* big_int, int size)
	{
		if (big_int_ != nullptr)
		{
			delete[]big_int_;
			big_int_ = nullptr;
		}
		int_length_ = size;
		big_int_ = new int[int_length_];
		for (int i = 0; i < int_length_; ++i) {
			big_int_[i] = big_int[i];
		}
	}
	void BiggerInt::append(const BiggerInt& obj)
	{
		int newSize = int_length_ + obj.int_length_;
		int* newBigInt = new int[newSize];
		for (int i = 0; i < int_length_; ++i)
		{
			newBigInt[i] = big_int_[i];
		}
		int count = 0;
		for (int j = int_length_; j < newSize; ++j)
		{
			newBigInt[j] = obj.big_int_[count];
			++count;
		}
		delete[]big_int_;
		big_int_ = newBigInt;
		int_length_ = newSize;
	}
	void BiggerInt::append(const int* big_int, int size)
	{
		int newSize = int_length_ + size;
		int* newBigInt = new int[newSize];
		for (int i = 0; i < int_length_; ++i)
		{
			newBigInt[i] = big_int_[i];
		}
		int count = 0;
		for (int j = int_length_; j < newSize; ++j)
		{
			newBigInt[j] = big_int[count];
			++count;
		}
		delete[]big_int_;
		big_int_ = newBigInt;
		int_length_ = newSize;
	}
	int BiggerInt::compareTo(const BiggerInt& obj)
	{
		int x;
		if (obj.int_length_ > int_length_)
		{
			x = 1;
			return x;
		}
		else if (obj.int_length_ == int_length_)
		{
			x= 0;
			return x;
		}
		else if (obj.int_length_ < int_length_)
		{
			x=2;
			return x;
		}
	}
	int BiggerInt::compareTo(const int* big_int, int size) {
		int x;
		if (int_length_ > size)
		{
			x = 1;
			return x;
		}
		else if (int_length_ == size)
		{
			x = 0;
			return x;
		}
		else if (int_length_ < size)
		{
			x = 2;
			return x;
		}
	}
	void BiggerInt::print()
	{
		if (big_int_ !=nullptr)
		{
			for (int i = 0; i < int_length_; ++i)
			{
				cout << big_int_[i];
			}
		}
		else
			cout << "No value assigned " << endl;
	}
	BiggerInt::~BiggerInt()
	{
		delete[] big_int_;
		big_int_ = nullptr;
	}

	void main()
	{
		BiggerInt obj1, obj2;
		int option=0;
		while (option!=-1)
		{
			cout << "Initialize the values : " << endl;
				obj1.setter();
				cout << endl;
				cout << "Enter the options : " << endl;
				cout << "deep copy                                 2" << endl;
				cout << "shallow copy                              3" << endl;
				cout << "append values by using parameter          4" << endl;
				cout << "append values by using object             5" << endl;
				cout << "compare values by object                  6" << endl;
				cout << "compare values by parameter               7" << endl;
				cin >> option;
				while (option < 2 || option>7)
				{
					cout << "Enter again " << endl;
					cin >> option;
				}
			 if (option == 2)
			 {
				obj2.assign(obj1.getInt(), obj1.getSize());
				cout << "After deep copy" << endl;
				obj2.getter();

			 }
			else if (option == 3)
			{
				obj2.assign(obj1);
				cout << "After shallow copy" << endl;

				obj2.getter();
			}
			else if (option == 4)
			{
				 cout << "Initialize the second object : " << endl;
				obj2.setter();
				obj1.append(obj2);
				cout << "After appending:" << endl;

				obj1.getter();
			}
			else if (option == 5)
			{
				  cout << "Initialize the second object : " << endl;
				obj2.setter();
				obj1.append(obj2);
				cout << "After appending:" << endl;
				obj1.getter();
			}
			else if (option == 6)
			{
				 int check;
				 cout << "Initialize the second object : " << endl;
				 obj2.setter();
				check=obj1.compareTo(obj2);
				if (check == 0)
				{
					cout << "Both are equal :" << endl;
				}
				else if (check == 1)
				{
					cout << "Object 1 has greater value " << endl;
				}
				else
					cout << "Object 1 has smaller value " << endl;
			}
			else if (option == 7)
			{
				 int check;
				 cout << "Initialize the second object : " << endl;
				 obj2.setter();
				 check = obj1.compareTo(obj2.getInt(),obj2.getSize());
				 if (check == 0)
				 {
					 cout << "Both are equal :" << endl;
				 }
				 else if (check == 1)
				 {
					 cout << "Object 1 has greater value " << endl;
				 }
				 else
					 cout << "object 1 has smaller value " << endl;
			}
			 cout << endl;
			 cout << "Enter -1 to exit : " << endl;
			 cin >> option;
		}
		obj1.~BiggerInt();
		obj2.~BiggerInt();

	}
