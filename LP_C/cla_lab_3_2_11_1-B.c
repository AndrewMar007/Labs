#include <stdio.h>

int main()
{
	int first = 0;
	scanf("%d", &first);
	if (first < 0 || first > 255) {
		perror("Incorrect IP address");
		return 1;
	}
	int second = 0;
	scanf("%d", &second);
	if (second < 0 || second > 255) {
		perror("Incorrect IP address");
		return 1;
	}
	int third = 0;
	scanf("%d", &third);
	if (third < 0 || third > 255) {
		perror("Incorrect IP address");
		return 1;
	}
	int fourth = 0;
	scanf("%d", &fourth);
	if (fourth < 0 || fourth > 255) {
		perror("Incorrect IP address");
		return 1;
	}
	long long answ = 0;
	printf("Human readable IP address is: %d.%d.%d.%d",first, second, third, fourth);
	answ = first * 256 * 256 * 256 + second * 256 * 256 + third * 256 + fourth;
	printf("IP address as a 32-bit number: %d", answ);

	return 0;
}