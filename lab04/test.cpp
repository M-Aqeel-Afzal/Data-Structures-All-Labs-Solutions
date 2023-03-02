#include "pch.h"
#include"../lab04/Header.h"
/*
List<int> obj;
TEST(TestCaseName1, TestName1)
{
	int* list = new int[obj.getsize()];
	list = obj.get_list();
	//Command 1

	obj.insert_at_end(5);
	EXPECT_EQ(5, list[0]);

	//Command 2
	obj.insert_at_end(4);
	EXPECT_EQ(4, list[1]);

	//Command 3
	obj.insert_at_end(6);
	EXPECT_EQ(6, list[2]);

	//Command 4
	obj.insert_at_end(1);
	EXPECT_EQ(1, list[3]);
}
TEST(TestCaseName2, TestName2) {
	int* list = new int[obj.getsize()];
	list = obj.get_list();
	obj.Remove_data_item(4);
	EXPECT_EQ(6, list[1]);
}
//1.2.3
TEST(TestCaseName3, TestName3) {
	int* list = new int[obj.getsize()];
	list = obj.get_list();
	obj.Insert_in_middle(9, 2);
	EXPECT_EQ(9, list[2]);
}
//1.2.4
TEST(TestCaseName4, TestName4) {
	int* list = new int[obj.getsize()];
	list = obj.get_list();
	int temp[4] = { 5,6,9,1 };
	for (int i = 0; i < 4; i++)
	{
		EXPECT_EQ(temp[i], list[i]);
	}

}
//1.2.5
TEST(TestCaseName5, TestName5) {
	int* list = new int[obj.getsize()];
	list = obj.get_list();
	obj.Replace_data_item(7, 6);
	int temp[4] = { 5,7,9,1 };
	for (int i = 0; i < 4; i++)
	{
		EXPECT_EQ(temp[i], list[i]);
	}
}
//1.2.6
TEST(TestCaseName6, TestName6) {
	EXPECT_EQ(false, obj.IsEmpty());
}
//1.2.7
TEST(TestCaseName7, TestName7) {
	EXPECT_EQ("Empty list", obj.Clear_the_list());
}*/
TEST(TestCaseName2, TestName1) {
	LeCream<double> obj;
	obj.set_Flavour("chocolate");
	obj.set_Number_of_scoops(3);
	obj.set_wafer("no");
	obj.Calculate_Price();
	EXPECT_EQ(180, obj.get_price());
}
TEST(TestCaseName2, TestName2) {
	LeCream<double> obj;
	obj.set_Flavour("Almond crunch");
	obj.set_Number_of_scoops(2);
	obj.set_wafer("No");
	obj.Calculate_Price();
	EXPECT_EQ(100, obj.get_price());
}
TEST(TestCaseName3, TestName3) {
	LeCream<double> obj;
	obj.set_Flavour("Coffee");
	obj.set_Number_of_scoops(3);
	obj.set_wafer("yes");
	obj.Calculate_Price();
	EXPECT_EQ(160, obj.get_price());
}
TEST(TestCaseName4, TestName4) {
	LeCream<double> obj;
	obj.set_Flavour("Mango");
	obj.set_Number_of_scoops(4);
	obj.set_wafer("No");
	obj.Calculate_Price();
	EXPECT_EQ(0, obj.get_price());
}