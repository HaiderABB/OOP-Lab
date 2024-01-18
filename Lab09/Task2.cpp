//#include<iostream>
//#include<vector>
//using namespace std;
//class Library {
//protected:
//	string title;
//	string author;
//	string type;
//	int year;
//public:
//	Library(){}
//	Library(string t, string s, int y, string type) { title = t; author = s; this->type = type; year = y; }
//	void setTitle(string t) { title = t; }
//	void setAuthor(string a) { author = a; }
//	void setYear(int y) {year = y; }
//	void displayDetails()
//	{
//		cout << title << " , " << author << " , " << year << endl;
//	}
//};
//class Book : public Library {
//public:
//	Book(){}
//	Book(string t, string s, int y, string type) :Library( t, s,  y, type){ }
//	void displayDetails()
//	{
//		cout << title << " , " << author << " , " << year << endl;
//	}
//};
//class Journal : public Library {
//public:
//	Journal() {}
//	Journal(string t, string s, int y, string type) :Library(t, s, y, type) { }
//	void displayDetails()
//	{
//		cout << title << " , " << author << " , " << year << endl;
//	}
//};
//class Magazine : public Library {
//public:
//	Magazine() {}
//	Magazine(string t, string s, int y, string type) :Library(t, s, y, type) { }
//	void displayDetails()
//	{
//		cout << title << " , " << author << " , " << year << endl;
//	}
//};
//class LibraryPatron {
//private:
//	string name;
//	vector<Library*> borrowedItems;
//
//public:
//	LibraryPatron(const string& name) : name(name) {}
//
//	void borrowItem(Library* item) {
//		borrowedItems.push_back(item);
//	}
//
//	void returnItem(Library* item) {
//		for (auto it = borrowedItems.begin(); it != borrowedItems.end(); ++it) {
//			if (*it == item) {
//				borrowedItems.erase(it);
//				break;
//			}
//		}
//	}
//
//	void displayBorrowedItems() {
//		cout << "Borrowed Items by " << name << ":" << endl;
//		for (Library* item : borrowedItems) {
//			item->displayDetails();
//			cout << endl;
//		}
//	}
//};
//int main()
//{
//	Book book1("Testing 1", "Haider Abbas", 2023, "Fictional");
//	Journal Journal1("Testing 2", "Momin Shehzad", 2024, "Comic");
//	Magazine Magazine1("Testing 3", "Abbas Moazzam", 2025, "Horror");
//	cout << "---Book---" << endl;
//    book1.displayDetails();
//	cout << "\n";
//
//
//	cout << "---Journal---" << endl;
//	Journal1.displayDetails();
//	cout << "\n";
//
//
//	cout << "---Magazine---" << endl;
//	Magazine1.displayDetails();
//	cout << "\n";
//
//	LibraryPatron pt("Patron Name");
//	pt.borrowItem(&book1);
//	pt.borrowItem(&Journal1);
//	pt.borrowItem(&Magazine1);
//
//
//	pt.displayBorrowedItems();
//
//	pt.returnItem(&Journal1);
//
//	pt.displayBorrowedItems();
//}