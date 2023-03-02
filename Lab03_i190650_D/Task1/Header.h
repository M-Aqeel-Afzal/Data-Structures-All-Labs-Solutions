#include<iostream>

//************** Task#01 ****************
template <typename T>
T* Union(T(&arr1)[3], T(&arr2)[3], T(&arr3)[5], T l1, T l2)
{
	int i, j, k = 0, m;
	for (i = 0; i < l1; i++, k++)
	{
		arr3[k] = arr1[i];
	}
	for (i = 0; i < l2; i++)
	{
		m = 0;
		for (j = 0; j < l1; j++)
		{
			if (arr2[i] == arr1[j])
				m = 1;
		}
		if (m == 0)
		{
			arr3[k] = arr2[i];
			k++;
		}
	}
	return arr3;
}
template <typename T>
T* intersection(T(&arr1)[3], T(&arr2)[3], T(&arr3)[2], T l1, T l2)
{
	int i, k = 0;
	for (i = 0; i < l2; i++)
	{


		if (arr1[i] == arr2[i])
		{
			arr3[k] = arr2[i];
			k++;
		}
	}
	return arr3;
}





