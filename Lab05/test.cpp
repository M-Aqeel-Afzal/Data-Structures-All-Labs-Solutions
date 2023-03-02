#include "pch.h"
#include"../Lab05/Header.h"
#include<math.h>
TEST(minimum, Test1) {
	int arr[5] = { 5,4,8,3,6 };
  EXPECT_EQ(3, minimum<int>(arr,5));
  EXPECT_TRUE(true);
}
TEST(minimum, Test2) {
	double arr[5] = { 5.3,4.5,8.2,9.0,6.6 };
	EXPECT_EQ(4.5, minimum<double>(arr, 5));
	EXPECT_TRUE(true);
}
TEST(area_circle, Test1) {
	
	EXPECT_EQ(78.5, area<double>(5.0));
	EXPECT_TRUE(true);
}
TEST(area_circle, Test2) {

	EXPECT_EQ(314, area<int>(10));
	EXPECT_TRUE(true);
}
TEST(area_tri, Test1) {

	EXPECT_EQ(25.0, area<double>(5.0,5.0));
	EXPECT_TRUE(true);
}
TEST(area_tri, Test2) {

	EXPECT_EQ(100, area<int>(10,10));
	EXPECT_TRUE(true);
}
TEST(ATM, Test1) {
	ATM<int> a1;
	a1.create_account(10000, "3810121504015","aqeel");
	a1.debit(5000, "3810121504015");
	a1.credit(15000, "3810121504015");

	EXPECT_EQ(20000, a1.check_balance("3810121504015"));
	EXPECT_TRUE(true);
}

TEST(ATM, Test2) {
	ATM<float> a1;
	a1.create_account(10000.5, "3810121504015", "aqeel");
	a1.debit(5000.0, "3810121504015");
	a1.credit(15000.0, "3810121504015");

	EXPECT_EQ(20000.5, a1.check_balance("3810121504015"));
	EXPECT_TRUE(true);
}

TEST(ATM, Test3) {
	ATM<double> a1;
	a1.create_account(10000.55, "3810121504025", "sahil");
	a1.debit(5000.0, "3810121504025");
	a1.credit(15000.0, "3810121504025");

	EXPECT_EQ(20000.55, a1.check_balance("3810121504025"));
	EXPECT_TRUE(true);
}


TEST(task4_add, Test1) {
	calculator<int> c1;
	EXPECT_EQ(10, c1.add(5, 5));
	EXPECT_TRUE(true);
}
TEST(task4_add, Test2) {
	calculator<double> c1;
	EXPECT_EQ(10.0, c1.add(5.0, 5.0));
	EXPECT_TRUE(true);
}
TEST(task4_divide, Test1) {
	calculator<int> c1;
	EXPECT_EQ(1, c1.divide(5, 5));
	EXPECT_TRUE(true);
}
TEST(task4_divide, Test2) {
	calculator<int> c1;
	EXPECT_EQ(-1, c1.divide(5, 0));
	EXPECT_TRUE(true);
}
TEST(task4_sqrt, Test1) {
	calculator<int> c1;
	EXPECT_EQ(5, c1.sqrt(25));
	EXPECT_TRUE(true);
}
TEST(task4_sqrt, Test2) {
	calculator<int> c1;
	EXPECT_EQ(-1, c1.sqrt(-25));
	EXPECT_TRUE(true);
}
TEST(task4_fec, Test1) {
	calculator<int> c1;
	EXPECT_EQ(120, c1.factorial(5));
	EXPECT_TRUE(true);
}
TEST(task4_is_prime, Test1) {
	calculator<int> c1;
	EXPECT_EQ(1, c1.IsPrime(13));
	EXPECT_TRUE(true);
}
TEST(task4_is_prime, Test2) {
	calculator<int> c1;
	EXPECT_EQ(0, c1.IsPrime(20));
	EXPECT_TRUE(true);
}