/*
    Insertion sort algorithm

    Pseudo:
    for i = 2:n,
    for (k = i; k > 1 and a[k] < a[k-1]; k--)
    swap a[k,k-1]
  -> invariant: a[1..i] is sorted
    end
*/

#include <iostream>

typedef unsigned int UINT;

void insertionSort(int array[], UINT size)
{
	for (UINT i = 1; i < size; i++)
	{
		int x = array[i];
		UINT j = i;
		while (j > 0 && array[j-1] > x)
		{
			array[j] = array[j-1];
			j--;
		}
		array[j] = x;
	}
}

int main()
{

  int test[7] = {3, 6, 1, 4, 0, 8, 2};
  UINT size = sizeof(test) / sizeof(test[0]);

  insertionSort(test, size);
  for (UINT i = 0; i < size; ++i)
  {
    std::cout << test[i] << std::endl;
  }

  return 0;
}
