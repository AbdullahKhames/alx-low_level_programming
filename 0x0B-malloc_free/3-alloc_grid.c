#include "main.h"

/**
 * alloc_grid - function to alloc
 * @width: width
 * @height: heighjt
 * Return: returns pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int first;
	int second;
	int **temp;

	temp = malloc(height * sizeof(int));

	if (width <= 0 || height <= 0 || temp == 0)
	{	
		return (NULL);
	}
	else
	{
		for (first = 0; first < height; first++)
		{
			temp[first] = malloc(width * sizeof(int));
			if (temp[first] == 0)
			{
				while (first--)
					free(temp[first]);
				free(temp);
				return (NULL);
			}

			for (second = 0; second < width; second++)
			{
				temp[first][second] = 0;
			}
		}
	}
	return (temp);
}
