#include<iostream>
using namespace std;
template<typename T>
T Mul_matrix(T m1[][4], T m2[][4], int r1, int c1, int r2, int c2)
{
	T sum = 0;
	if (c1 != r2)
	{
		for (int i = 0; i < r1; i++)
		{
			for (int k = 0; k < r1; k++)
			{
				for (int j = 0; j < c2; j++)
				{
					sum = sum + m1[i][j] * m2[k][j];
				}

			}
		}
	}
	else
	{
		for (int i = 0; i < r1; i++)
		{
			for (int k = 0; k < r1; k++)
			{
				for (int j = 0; j < c2; j++)
				{
					sum = sum + m1[i][j] * m2[j][k];
				}

			}
		}
	}
	return sum;
}
