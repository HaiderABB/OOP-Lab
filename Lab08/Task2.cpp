//#include<iostream>
//#include<string>
//using namespace std;
//class Author {
//	string name;
//	string email;
//	char gender;
//public:
//	Author() {};
//	Author(const string& n, const string& Email, char g);
//	string getName()const;
//	string getEmail()const;
//	void setEmail(const string& n);
//	void print()const;
//	char getGender()const;
//};
//char Author::getGender()const
//{
//	return gender;
//}
//
//void Author::print()const
//{
//	cout << "Name of the Author is : " << name << endl;
//	cout << "Gender : " << gender << endl;
//	cout << "Email : " << email << endl;
//}
//
//void Author::setEmail(const string& n)
//{
//	email = n;
//}
//Author ::Author(const string& n, const string& Email, char g)
//{
//	name = n;
//	email = Email;
//	gender = g;
//}
//string Author::getName()const
//{
//	return name;
//}
//string Author::getEmail()const {
//	return email;
//}
//
//class Book {
//	string name;
//	Author author;
//	double price;
//	int qtyInStock = 0;
//public:
//	Book(string n, const Author& temp, double p, int total);
//	Book(string n, const Author& temp, double p);
//	string getName()const;
//	Author getAuthor();
//	double getPrice();
//	void setPrice(double p);
//	int getQuantity();
//	void setQuantity(int q);
//	void print();
//	string getAuthorName();
//};
//Book::Book(string n, const Author& temp, double p)
//{
//	name = n;
//	author = temp;
//	price = p;
//}
//
//string Book:: getAuthorName()
//{
//	return author.getName();
//}
//
//void Book::print() {
//	cout << "Book name : " << name << endl;
//	cout << "Price : " << price << endl;
//	cout << "Quantity in Stock : " << qtyInStock << endl;
//	cout << "Author : " << endl;
//}
//
//void Book::setQuantity(int q)
//{
//	qtyInStock = q;
//}
//
//int Book::getQuantity() {
//	return qtyInStock;
//}
//
//double Book::getPrice()
//{
//	return price;
//}
//void Book::setPrice(double p)
//{
//	price = p;
//}
//
//Book::Book(string n, const Author& a, double p, int total)
//{
//	author = a;
//	name = n;
//	qtyInStock = total;
//	price = p;
//}
//string Book::getName()const {
//	return name;
//}
//Author Book::getAuthor() {
//	return author;
//}
//
// int main() {
//	// Declare and construct an instance of Author
//	Author peter("Peter Jones", "peter@somewhere.com", 'm');
//	peter.print(); // Peter Jones (m) at peter@somewhere.com
//	// Declare and construct an instance of Book
//	Book book("C++ for Dummies", peter, 19.99,100);
//	book.print();
//	// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
//	peter.setEmail("peter@xyz.com");
//	peter.print(); // Peter Jones (m) at peter@xyz.com
//	book.print();
//	// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
//	book.getAuthor().setEmail("peter@abc.com");
//	book.print();
//	// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
//}