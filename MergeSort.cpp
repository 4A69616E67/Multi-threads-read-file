template <class T>
int GetArrayLen(T &array)
{
	return (sizeof(array) / sizeof(array[0]));
}
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int list[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int list_len = GetArrayLen(list);
	void MergeSort(int *list, int start_index, int end_index);
	MergeSort(list, 0, list_len - 1);
	for (int i = 0; i < list_len; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}

void MergeSort(int *list, int start_index, int end_index)
{
	if (start_index == end_index)
	{
		return;
	}
	int middle = (start_index + end_index) / 2;
	MergeSort(list, start_index, middle);
	MergeSort(list, middle + 1, end_index);
	void Merge(int *list, int start_index, int end_index);
	Merge(list, start_index, end_index);
}
void Merge(int *list, int start_index, int end_index)
{
	int middle = (start_index + end_index) / 2;
	int *temp = new int[end_index - start_index + 1];
	int i = start_index, j = middle + 1, p = 0;
	while (i <= middle && j <= end_index)
	{
		if (list[i] <= list[j])
		{
			temp[p] = list[i];
			i++;
		}
		else
		{
			temp[p] = list[j];
			j++;
		}
		p++;
	}
	if (i > middle)
	{
		while (j <= end_index)
		{
			temp[p] = list[j];
			p++;
			j++;
		}
	}
	else
	{
		while (i <= middle)
		{
			temp[p] = list[i];
			p++;
			i++;
		}
	}
	for (int i = 0; i < end_index - start_index + 1; i++)
	{
		list[start_index + i] = temp[i];
	}
}
