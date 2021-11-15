#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b;

	printf("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F@\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else

		{
			b -= a;
		}
	}

	printf("Å‘åŒö–ñ” = %d\n", a);

	return 0;
}