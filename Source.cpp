#include <iostream>
using namespace std;

int getNatNum() 
{
	int number = 0;
	while(number < 1)
	{
		cout << "Enter a positive integer\n";
		cin >> number;
		cout << endl;
	}

	return number;
}

void populateList(bool* array, int arrayLength)
{
	//0 signifies dark, 1 signifies light
	for (int i = 0; i < arrayLength; i++)
	{
		array[i] = (i + 1) % 2;
	}
}

void printList(bool* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void swap(bool* left, bool* right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}

void sort(bool* arr, int elem)
{
	int i, j;
	bool swapped;
	for (i = 0; i < elem; i++)
	{
		swapped = false;
		for (j = 0; j < elem; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//LEFT OFF HERE
				swap(&arr[j], &arr[j+1]);
				printList(arr, elem);
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}
}

int main()
{
	int n = getNatNum();
	int length = n * 2;
	bool* list = new bool[length];
	populateList(list, length);
	printList(list, length);
	sort(list, length);
	delete[] list;
}