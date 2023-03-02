#include "pch.h"
#include"../lab9/Header.h"
TEST(check_queue, Test1) {
	string  s1 = "data structure is good and you are not good but not",s3="";
	s3 = cal(s1);
  EXPECT_EQ(s1, s3);
  EXPECT_TRUE(true);
}

//TEST(check_stack, Test1) {
//	string str1 = "test1.txt #include<iostream> using namespace std; nt main()  {system('paus');}";
//	EXPECT_EQ(cal_S(str1), 1);
//	EXPECT_TRUE(true);
//}
TEST(check_stack, Test2) {
	string str1 = "{()}";
	EXPECT_EQ(cal_S(str1), 1);
	EXPECT_TRUE(true);
}
