#include<iostream>
using namespace std;
class Account {
protected:
	int AccountNum;
	float Balance;
public:
	void setAccNum(int num) { AccountNum = num; }
	void setBalance(float balance) { Balance = balance; }
	int getAccNum() { return AccountNum; }
	float getBalance() { return Balance; }
	virtual void Debit(float)= 0;
	virtual void Credit(float) = 0;
	void print() 
	{
		cout << "Account Number " << AccountNum << endl;
		cout << "Balance " << Balance << endl;
	};
};
class CurrentAccount:public Account {
private:
	int ServiceCharges;
	float MinBalance;
public:
	CurrentAccount(){}
	CurrentAccount(int accNum, int Balance, int charges, float minBal) {
		AccountNum = accNum;
		this->Balance = Balance;
		ServiceCharges = charges;
		MinBalance = minBal;
	}
	void print() { Account::print();
	cout << "Service Charges : " << ServiceCharges << endl;
	cout << "Balance : " << MinBalance << endl;
	}
	void Debit(float amount) override
	{
		if (amount <= Balance)
		{
			Balance = Balance - amount;
		}
		else
			cout << "Insufficient Balance" << endl;
	}
	void Credit(float amount) override
	{
		Balance = amount;
	}
	~CurrentAccount(){}
};
class SavingsAccount :public Account {
	float interestRate;
public:
	SavingsAccount(){}
	SavingsAccount(int accNum, int Balance, float rate) {
		AccountNum = accNum;
		this->Balance = Balance;
		interestRate = rate;
	}
	void print()
	{
		Account::print();
		cout << "Interest Rate : " << interestRate << endl;
	}
    void Debit(float amount) override
	{
		if (amount <= Balance)
		{
			Balance = Balance - amount;
		}
		else
			cout << "Insufficient Balance" << endl;
	}
    void Credit(float amount) override
	{
		Balance = amount;
	}
	~SavingsAccount() {}
};
int main()
{
	Account* array[3];
	array[0] = new CurrentAccount(1, 10000, 100, 2000);
	array[1] = new SavingsAccount(2, 5000, 5);

	// Account is an abstract class and its object can not be created

	for (int i = 0; i < 2; i++) {
		cout << "After Credit" << endl;
		array[i]->Credit(1000);
		array[i]->print();
		cout << "After Debit" << endl;
		array[i]->Debit(1000);
		array[i]->print();
	}

	delete array[0];
	delete array[1];
}

