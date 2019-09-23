//author:chenxinyi
//date:20190923
#include <iostream>
using namespace std;
int getIndex(int *a, int l, int h)
{
	int i = l, j = h, key = a[l];
	while (i < j)  
	{
		//error1:while (a[j] >= key )
		//error2:while (a[l] >= key )
		while (a[j] >= key && i<j)
			j--;
		a[i] = a[j];
		while (a[i] <= key && i<j)
			i++;
		a[j] = a[i];
	}
	a[i] = key;
	return i;
}
void quickSort(int *array, int low, int high)
{
	if (low < high)
	{
		int index = getIndex(array, low, high);
		quickSort(array, low, index - 1);
		quickSort(array, index + 1, high);
	}
}
int main()
{
	int * Array;
	int len;
	cin >> len;
	Array = new int[len];
	for (int i = 0; i < len; i++)
	{
		cin >> Array[i];
	}
	//error:quickSort(Array, 0, len);
	quickSort(Array, 0, len - 1);
	for (int i = 0; i < len; i++)
	{
		cout << Array[i] << "  ";
	}
	return 0;
}
