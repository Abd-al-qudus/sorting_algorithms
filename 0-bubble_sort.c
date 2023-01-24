#include "sort.h"

/**
 * swap - swap numbers
 * @a: first number to swap
 * @b: second number to swap
 * Return: void
 */
void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
 * bubble_sort - bubble sort algorithm implemented in c
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	flag = 0;
	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				flag = 1;
				swap(&array[j], &array[j + 1]);
			}
		}
		if (flag == 0)
			return;
	}
}
