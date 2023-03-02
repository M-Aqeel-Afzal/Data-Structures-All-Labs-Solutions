#include<iostream>
using namespace std;
int Chain_mul(int(&a)[2])
{
	return 0;
}
int Chain_mul(int(&a)[2], int(&b)[2], string s1)
{
	if (s1[0] == s1[1])
		return 0;

	if (s1[0] == 'a' || s1[0] == 'A' && s1[1] == 'b' || s1[1] == 'B')
	{
		if (a[1] == b[0])
		{
			return a[0] * b[0] * b[1];
		}
		else
			return 0;
	}
	/*if (s1[0] == 'b' || s1[0] == 'B' && s1[1] == 'a' || s1[1] == 'A' || s1[1] == 'c' || s1[1] == 'C')
	{
		if (b[1] == a[0])
		{
			return b[0] * a[0] * a[1];
		}
		else
			return 0;
	}
	*/
}
int Chain_mul(int(&a)[2], int(&b)[2], int(&c)[2], string s1)
{
	int sum;
	if (s1[0] == 'a' || s1[0] == 'A' && s1[1] == 'b' || s1[1] == 'B')
	{
		if (a[1] == b[0])
		{
			sum = Chain_mul(a, b, "ab");
			a[1] = b[1];
			if (a[1] == c[0])
			{
				sum = sum + Chain_mul(a, c, "ac");
				return sum;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	if (s1[0] == 'b' || s1[0] == 'B' && s1[1] == 'c' || s1[1] == 'C')
	{
		if (b[1] == c[0])
		{
			sum = Chain_mul(b, c, "ab");
			b[1] = c[1];
			if (a[1] == b[0])
			{
				sum = sum + Chain_mul(a, b, "ab");
				return sum;
			}
			else
				return 0;
		}
		else
			return 0;
	}

}