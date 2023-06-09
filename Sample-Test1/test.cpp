#include "pch.h"
#include <vector>
#include "../Project2/cal.cpp"
class AccountFixture : public testing::Test
{
public:
	Account account{10000};
};
TEST_F(AccountFixture, CrateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(5000);
	EXPECT_EQ(15000, account.getBalance());
}
TEST_F(AccountFixture, Widthdraw) {
	account.withdraw(1000);
	EXPECT_EQ(9000, account.getBalance());
}
