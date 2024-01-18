//#include<iostream>
//using namespace std;
//class Shape {
//protected:
//	string type;
//public:
//	Shape(){}
//	Shape(string t) { type = t; }
//	virtual void area_calc() {};
//	void print() { cout << type << endl; }
//	~Shape(){}
//};
//
//class Rectangle :public Shape {
//public:
//	Rectangle(float h, float w,string t): Shape(t){
//		height = h;
//		width = w;
//	}
//	void area_calc() {
//		float area;
//		area = height * width;
//		cout << area << endl;
//	}
//	virtual void print() { cout << type << endl; }
//	~Rectangle(){}
//private:
//	float height;
//	float width;
//};
//class Triangle :public Shape {
//private:
//	float base;
//	float height;
//public:
//	Triangle(float b, float h,string t) : Shape(t){ base = b;
//	height = h;
//	}
//	void area_calc() {
//		float area;
//		area = (0.5) * base * height;
//		cout << area << endl;
//	}
//	virtual void print() { cout << type << endl; }
//	~Triangle(){}
//};
//class Circle:public Shape {
//public:
//	Circle(float r, string t):Shape(t) { radius = r; }
//    void area_calc() {
//		float area;
//		area = (3.14) * radius * radius;
//		cout << area << endl;
//	}
//	~Circle(){}
//	virtual void print() { cout << type << endl; }
//private:
//	float radius;
//};
//int main()
//{
//
//	Shape* S;
//	S = new Circle (9.45, "Circle");
//	S->area_calc();
//	S->print();
//    S=new Rectangle(8.98, 2.34, "Rectangle");
//	S->area_calc();
//	S->print();
//	S=new Triangle(9.97, 4.56, "Triangle");
//	S->area_calc();
//	S->print();
//
//}