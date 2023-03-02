#include<iostream>
using namespace std;
class Hashing
{

    int count[26];
    int element = 26;
public:
    Hashing(int bucks);
    int hashFunction(char x);
    void displayHash();
    void insert(string s);

};

Hashing::Hashing(int bucks)
{
    this->element = bucks;
    for (int i = 0; i < 26; i++)
        count[i] = 0;
      
    
}

void Hashing::insert(string S)
{
    for (int i = 0; i < S.length(); ++i)
    {
        int index = hashFunction(S[i]);
        count[index]++;
    }

}

int Hashing::hashFunction(char c)  
{
    return (c - 'a');
}



void  Hashing::displayHash()
{                
    for (int i = 0; i < 26; ++i)
        cout << (char)(i + 'a') << ' ' << count[i] << endl;

}

//int main()
//{
//    string s = "ababedscdddddddz";
//    int n = s.length();
//    Hashing obj(26);
//    cout << " insertion" << endl;
//    obj.insert(s);
//    cout << endl;
//    cout << "Displaying" << endl;
//    obj.displayHash();
//    cout << endl;
//
//    return 0;
//}