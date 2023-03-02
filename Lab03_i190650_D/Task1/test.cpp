#include "pch.h"
#include"../task1/Header.h"
//**************** Tests for question#1*******************
TEST(test1, unionf) {
	float arr1[] = { 1,2,3 };
	float arr2[] = { 1,5,6 };
	float arr3[5];
	float* arr5;
	float arr4[] = { 1,2,3,5,6 };
	arr5 = Union<float>(arr1, arr2, arr3, 3, 3);
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(arr4[i], arr5[i]);
		EXPECT_TRUE(true);
	}
}
TEST(test1, intersectionf) {
	float arr1[] = { 1,2,3 };
	float arr2[] = { 1,2,6 };
	float arr3[2];
	float* arr5;
	float arr4[] = { 1,2 };
	arr5 = intersection<float>(arr1, arr2, arr3, 3, 3);
	for (int i = 0; i < 2; i++)
	{
		EXPECT_EQ(arr4[i], arr5[i]);
		EXPECT_TRUE(true);
	}

}

TEST(test1, unioni) {
	int arr1[] = { 1,2,3 };
	int arr2[] = { 1,5,6 };
	int arr3[5];
	int* arr5;
	int arr4[] = { 1,2,3,5,6 };
	arr5 = Union(arr1, arr2, arr3, 3, 3);
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(arr4[i], arr5[i]);
		EXPECT_TRUE(true);
	}
}
TEST(test1, intersectioni) {
	int arr1[] = { 1,2,3 };
	int arr2[] = { 1,2,6 };
	int arr3[2];
	int* arr5;
	int arr4[] = { 1,2 };
	arr5 = intersection(arr1, arr2, arr3, 3, 3);
	for (int i = 0; i < 2; i++)
	{
		EXPECT_EQ(arr4[i], arr5[i]);
		EXPECT_TRUE(true);
	}

}
TEST(test1, uniond) {
	double arr1[] = { 1,2,3 };
	double arr2[] = { 1,5,6 };
	double arr3[5];
	double* arr5;
	double arr4[] = { 1,2,3,5,6 };
	arr5 = Union<double>(arr1, arr2, arr3, 3, 3);
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(arr4[i], arr5[i]);
		EXPECT_TRUE(true);
	}
}
TEST(test1, intersectiond) {
	double arr1[] = { 1,2,3 };
	double arr2[] = { 1,2,6 };
	double arr3[2];
	double* arr5;
	double arr4[] = { 1,2 };
	arr5 = intersection<double>(arr1, arr2, arr3, 3, 3);
	for (int i = 0; i < 2; i++)
	{
		EXPECT_EQ(arr4[i], arr5[i]);
		EXPECT_TRUE(true);
	}

}
