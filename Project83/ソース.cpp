#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b;

	printf("��̐�������͂��Ă��������F�@\n");
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

	printf("�ő���� = %d\n", a);

	return 0;
}