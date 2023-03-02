#include "pch.h"
#include"../Task3/Header.h"
TEST(Task3, T1) {
	int m1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 },
		m2[3][4] = { 1,0,3,4,5,6,1,8,0,0,0,12 };
  EXPECT_EQ(858, Mul_matrix<int>(m1, m2, 3, 4, 3, 4));
  EXPECT_TRUE(true);
}
TEST(Task3, T2) {
	int m1[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 },
		m2[4][4] = { 1,0,3,4,5,6,1,8,0,0,0,12 ,13,14,15,16 };
	EXPECT_EQ(3616, Mul_matrix<int>(m1, m2, 4, 4, 4, 4));
	EXPECT_TRUE(true);
}
