#include<iostream>
#include<stack>
using namespace std;
void push(string &s1,int &index,char ch)
{
	s1 += ch;
	index++;
}
char pop(string &s1, int &index)
{
	

	index--;
	return s1[index];
	
}
/*
void enqueu(string&s1, int& index,char ch)
{
	s1 += ch;
	index++;
}
char dequeu(string& s1, int& index)
{
	s1[index] = '\0';
	index++;

}
*/
bool balance(string exp)
{
	// base case: length of the expression must be even
	if (exp.length() & 1)
		return false;

	// take an empty stack of characters
	stack<char> stack;

	// traverse the input expression
	for (char ch : exp)
	{
		// if current char in the expression is an opening brace,
		// push it to the stack
		if (ch == '(' || ch == '{' || ch == '[') {
			stack.push(ch);
		}

		// if current char in the expression is a closing brace
		if (ch == ')' || ch == '}' || ch == ']')
		{
			// return false if mismatch is found (i.e. if stack is empty,
			// the number of opening braces is less than number of closing
			// brace, so expression cannot be balanced)
			if (stack.empty()) {
				return false;
			}

			// pop character from the stack
			char top = stack.top();
			stack.pop();

			// if the popped character if not an opening brace or does
			// not pair with current character of the expression
			if ((top == '(' && ch != ')') ||
				(top == '{' && ch != '}') ||
				(top == '[' && ch != ']'))
			{
				return false;
			}
		}
	}

	// expression is balanced only if stack is empty at this point
	return stack.empty();
}
	/*
bool balance(int& count, string& s1,int& s)
{
	string s2;
	int index = 0; static int index2 = 8;
	for (int i = 0; i < s; i++)
	{
		push(s2,index, s1[i]);
		char c = pop(s1, index2);
		//cout <<<< c << s1[i] << endl;
		if ( c== s1[i])
		{
			
		}
		else
			return 0;
		
	}
	return 1;
}
*/