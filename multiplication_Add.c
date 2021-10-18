#include <stdio.h>

# define N 5

int array[N] = {3, 12, 6, 8, 7}; 

// This program multiplies the elements of the array by a number and then adds all its elements

int mult(int a, int m)
{
    int i;
    int producto = 0;
    for(i = 0; i < m; i++)
    {
        producto = producto + a;
    }
    return producto;
}

int addArray(int *a, int lenght)
{
	int i;
	int add = 0;
	
	for (i=0; i<lenght; i++)
	{ 
		int currentNumber = a[i];
		add = add + currentNumber;
	} 
	return add;
}

int result(int *a, int lenght)
{
	int res;
	int i;
	int m = 2;
	for (i=0; i<lenght; i++)
	{ 
        a[i] = mult(array[i], m);
	} 
	res = addArray(a, lenght);
	return res;
}

int main()
{
	int res = result(array, N);
	return 0;
}
