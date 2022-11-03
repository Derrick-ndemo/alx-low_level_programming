/**
 * _pow_recursion - function that returns power
 *
 * @x: reps the number
 * @y: what number to power to
 *
 * Return: Power
*/

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	
	result *= _pow_recursion(x, y - 1);
	return (result);
} 
