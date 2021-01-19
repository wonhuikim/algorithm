#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total, temp;
	int pack = 0;

	scanf("%d", &total);

	while (total > 2) {

		if (total % 5 == 0)
		{
			temp = total / 5;
			pack += temp;

			total -= (temp * 5);
		}

		else {
			total -= 3;
			pack += 1;

			if (total % 5 == 0 && total >= 5 && total != 0)
			{
				temp = total / 5;
				pack += temp;

				total -= (temp * 5);
			}
		}
	}

	if (total == 0)
		printf("%d", pack);
	else
		printf("-1");

	return 0;
}