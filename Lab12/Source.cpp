//
//#include<iostream>
////#include<list>
//using namespace std;
//
//class Hash_Class
//{
//   
//    int Frequency[26];
//    int array[26];
//    int NoofBuckets = 26;
//public:
//    Hash_Class(int bucks);
//    int hashFunction(char x);
//    void displayHash();
//    void insertItem(string s);
//
//};
//
//Hash_Class::Hash_Class(int bucks)
//{
//    this->NoofBuckets = bucks;
//    for (int i = 0; i < 26; i++)
//    {
//        Frequency[i]=0;
//        array[i] = 0;
//    }
//}
//
//void Hash_Class::insertItem(string S)
//{
//    for (int i = 0; i < S.length(); ++i)
//    {
//        int index = hashFunction(S[i]);
//        Frequency[index]++;
//    }
//
//}
//
//int Hash_Class::hashFunction(char c)  //return the index
//{
//    return (c - 'a');
//}
//
//
//
//void  Hash_Class::displayHash()
//{                 //Calling the Display Function
//    for (int i = 0; i < 26; ++i)
//        cout << (char)(i + 'a') << ' ' << Frequency[i] << endl;
//
//}
//
//int main()
//{
//    string s = "ababcdddddddz";
//    int n = s.length();
//    Hash_Class obj(26);
//    cout << "Elements are inserted in the list" << endl;
//    obj.insertItem(s);
//    cout << endl;
//    cout << "Display the list after the insertion" << endl;
//    obj.displayHash();
//    cout << endl;
//
//    return 0;
//}
//
//
////#include<iostream>
////using namespace std;
////class hashing
////{
////private:
////	int* hashtable;
////	int key;
////	bool b;
////public:
////	hashing()
////	{
////		hashtable= new int[7];
////		b = 1;
////		key = 0;
////	}
////	bool search(int val)
////	{
////
////	}
////	void insert(int val)
////	{
////	
////		if (b)
////		{
////			for (int i = 0; i < 7; i++)
////			{
////				//hashtable[i] = 0;
////			}
////		}
////				key = val % 7;
////				if(hashtable[val]!=0)
////				hashtable[val]=key;
////				if (hashtable[0] == 0)
////					cout << "*" << endl;
////			
////		
////	}
////	bool isempty()
////	{
////
////	}
////	void delete_v()
////	{
////
////	}
////	bool clear()
////	{
////
////	}
////
////
////};
////int main() {
////	hashing h1;
////	h1.insert(4);
////
////	return 0;
////}