#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b;

	printf("二つの整数を入力してください：　\n");
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

	printf("最大公約数は%d\n", a);

	return 0;
}
