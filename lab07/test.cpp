//#include "pch.h"
#include"../lab07/Header.h"
using namespace std;
int main()
{
	DT list;
	list.insert(2);
	//	list.insert(4);
	//	list.insert(1);
	//	list.insert(1);
		list.sort();
		list.print();
	return 0;
}
//TEST(TestCaseName, TestName) {
//	list.insert(2);
//	list.insert(4);
//	list.insert(1);
//	list.insert(1);
//	list.sort();
//	list.print();
//  EXPECT_EQ(2, 1);
//  EXPECT_TRUE(true);
//}