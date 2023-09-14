#include "main.h"

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: coulm in array
 * @height: row in array
 * Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **tp, i, g;

	tp = malloc(sizeof(*tp) * height);

	if (tp == 0 || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tp[i] = malloc(sizeof(**tp) * width);
			if (tp[i] == 0)
			{
				while (i--)
					free(tp[i]);
				free(tp);
				return (NULL);
			}
			else
			{
				for (g = 0; g < width; g++)
					tp[i][g] = 0;
			}
		}
	}
	return (tp);
}
