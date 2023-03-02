#include "pch.h"
#include"../Task5/Header.h"
TEST(Test1, first_ab) {
	int a[2] = { 50,10 },
		b[2] = { 10,20 },
		c[2] = { 20,5 };
	string order = "ab";
  EXPECT_EQ(15000, Chain_mul(a, b,c, order));
  EXPECT_TRUE(true);
}
TEST(Test2, first_bc) {
	int a[2] = { 50,10 },
		b[2] = { 10,20 },
		c[2] = { 20,5 };
	string order = "bc";
	EXPECT_EQ(3500, Chain_mul(a, b,c, order));
	EXPECT_TRUE(true);
}
TEST(Test3, first_ac) {
	int a[2] = { 50,10 },
		c[2] = { 20,5 };
	string order = "ac";
	EXPECT_EQ(0, Chain_mul(a, c, order));
	EXPECT_TRUE(true);
}
TEST(Test4, first_ab) {
	int a[2] = { 50,10 },
		b[2] = { 10,20 };
	string order = "ab";
	EXPECT_EQ(10000, Chain_mul(a, b, order));
	EXPECT_TRUE(true);
}
TEST(Test5, first_aa) {
	int a[2] = { 50,10 };
	string order = "aa";
	EXPECT_EQ(0, Chain_mul(a,a, order));
	EXPECT_TRUE(true);
}
TEST(Test6, first_a) {
	int a[2] = { 50,10 };
	EXPECT_EQ(0, Chain_mul(a));
	EXPECT_TRUE(true);
}