/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, num;

	printf("Enter number to print table: ");
	scanf("%d", &num);

	for (i = 0; i <= 9; i++)
	{
		printf("%d * %d = %d\n", num, i, (num * i));
	}
	return (0);
}
