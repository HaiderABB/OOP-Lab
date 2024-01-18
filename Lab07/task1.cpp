//#include<iostream>
//using namespace std;
//class sterling {
//	long int pounds;
//	int shillings;
//	int pence;
//	double in;
//public:
//	sterling()
//	{
//		pounds = 0;
//		shillings = 0;
//		pence = 0;
//	}
//	sterling(double d)
//	{
//		double store;
//		in = d;
//		pounds = d;
//		store = (d - pounds) * 20;
//		shillings = store;
//		pence = (store-shillings)*12;
//	}
//	sterling(long int p, int s, int Pe)
//	{
//		pounds = p;
//		shillings = s; 
//		pence = Pe;
//		in = 0;
//	}
//	sterling getSterling()
//	{
//		return *this;
//	}
//	void putSterling()
//	{
//		cout << "$" << pounds << "." << shillings << "." << pence << endl;
//	}
//	sterling operator*(const sterling& temp)
//	{
//		long int p;
//		int s;
//		int pe;
//		sterling obj1;
//		p = pounds * temp.pounds;
//		s = shillings * temp.shillings;
//		pe = pence * temp.pence;
//		while (s > 19)
//		{
//			++p;
//			s = s - 20;
//		}
//		while (pe > 11)
//		{
//			++s;
//			pe = pe - 12;
//		}
//		obj1.pounds = p;
//		obj1.pence = pe;
//		obj1.shillings = s;
//		return obj1;
//	}
//	sterling operator+(const sterling&temp)
//	{
//		long int p;
//		int s;
//		int pe;
//		sterling obj1;
//	  p = pounds + temp.pounds;
//	  s = shillings + temp.shillings;
//	  pe = pence + temp.pence;
//	  if (s > 19)
//	  {
//		  ++p;
//		  s = s - 20;
//
//	  }
//	  if (pe > 11)
//	  {
//		  ++s;
//		  pe = pe - 12;
//	  }
//	  if (s > 19)
//	  {
//		  ++p;
//		  s = s - 20;
//	  }
//	  obj1.pounds = p;
//	  obj1.shillings = s;
//	  obj1.pence = pe;
//	  return obj1;
//	}
//	sterling operator-(const sterling& temp)
//	{
//		long int p;
//		int s;
//		int pe;
//		sterling obj1;
//		if (temp.pounds > pounds)
//		{
//			p = temp.pounds - pounds;
//		}
//		else
//		{
//			p = pounds - temp.pounds;
//		}
//		if (temp.shillings > shillings)
//		{
//			s = temp.shillings-shillings;
//		}
//		else
//		{
//			s = shillings - temp.shillings;
//		}
//		if (temp.pence > pence)
//		{
//			pe = temp.pence - pence;
//		}
//		else
//		{
//			pe = pence - temp.pence;
//		}
//
//		obj1.pounds = p;
//		obj1.shillings = s;
//		obj1.pence = pe;
//		return obj1;
//	}
//	void operator=(const sterling& temp)
//	{
//		pounds = temp.pounds;
//		shillings = temp.shillings;
//		pence = temp.pence;
//	}
//	sterling operator/(double d)
//	{
//		double store;
//		store = in / d;
//		sterling temp;
//		temp.pounds = store;
//		store = (store - temp.pounds) * 20;
//		temp.shillings = store;
//		temp.pence = (store - temp.shillings) * 12;
//		return temp;
//	}
//};
//int main()
//{
//	sterling st1(20.31), st2(30.98);
//	st1.putSterling();
//	st2.putSterling();
//	sterling st4;
//	cout << "Adding : " << endl;
//	st4 = st1 + st2;
//	st4.putSterling();
//	cout << "Subtracting : " << endl;
//	st4 = st1 - st2;
//	st4.putSterling();
//	cout << "Multiplication : " << endl;
//	st4 = st1 * st2;
//	st4.putSterling();
//	cout << "Division : " << endl;
//	st4 = st1 / 23.78;
//	st4.putSterling();
//}