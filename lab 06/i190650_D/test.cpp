#include "pch.h"
#include"../lab 06/Header.h"
#include<iostream>
using namespace std;
static int s = 0;
string s1 = "alpha", s2 = "";
TEST(push, Test1) {

	
	
	for (int i = 0; i < 5; i++)
	{
		push(s2, s, s1[i]);
	}
  EXPECT_EQ(s1, s2);
  EXPECT_TRUE(true);
}
TEST(pop, Test1) {
	
	 
		EXPECT_EQ('a',pop(s2, s));
		EXPECT_TRUE(true);
	
	
}
/*
static int si2 = 0,si3=0;
string s3 = "alpha", s4 = "";
TEST(enqueu, Test1) {

	for (int i = 0; i < 5; i++)
	{
		enqueu(s4, si2, s3[i]);
	}
	EXPECT_EQ(s3, s4);
	EXPECT_TRUE(true);


}
TEST(dequeu, Test1) {

	
		dequeu(s4, si3);
	
	EXPECT_EQ(s3, s4);
	EXPECT_TRUE(true);


}
*/
TEST(balance, Test1) {
	
	
	string s5 = "{[(){}]}";
	

	EXPECT_EQ(true, balance(s5));
	EXPECT_TRUE(true);


}