class Account
{
public:
	explicit Account(int money) : balance((money))
	{
		
	}
	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

	void applyCompoundInterest()
	{
		balance *= (1 + compoundInterest);
	}

	void setCompoundInterest(double x)
	{
		compoundInterest = x;
	}

	int getBalancePrediction(int year)
	{
		int result = balance;
		for(int i=0;i<year;i++)
		{
			result *= (1 + compoundInterest);
		}
		return result;
	}

private:
	int balance{0};
	double compoundInterest{ 0.05 };
};