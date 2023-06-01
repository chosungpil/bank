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
		balance *= (100 + compoundInterest)/100;
	}

	void setCompoundInterest(int interest)
	{
		compoundInterest = interest;
	}

	int getBalancePrediction(int periodInYear)
	{
		int result = balance;
		for(int i = 0; i < periodInYear; i++)
		{
			result *= (100 + compoundInterest)/100;
		}
		return result;
	}

private:
	int balance{0};
	double compoundInterest{ 5 };
};