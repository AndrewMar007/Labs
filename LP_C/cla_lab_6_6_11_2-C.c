#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIM "."

int valid_digit(char *ip_str)
{
	while (*ip_str) {
		if (*ip_str >= '0' && *ip_str <= '9')
			++ip_str;
		else
			return 0;
	}
	return 1;
}

int is_valid_ip(char *ip_str)
{
	int i, num, dots = 0;
	char *ptr;

	if (ip_str == NULL)
		return 0;

	ptr = strtok(ip_str, DELIM);

	if (ptr == NULL)
		return 0;

	while (ptr) {

		if (!valid_digit(ptr))
			return 0;

		num = atoi(ptr);

		if (num >= 0 && num <= 255) {
			ptr = strtok(NULL, DELIM);
			if (ptr != NULL)
				++dots;
		} else
			return 0;
	}

	if (dots != 3)
		return 0;
	return 1;
}

int main()
{
	char ip1[] = "127.0.0.1";
	char ip2[] = "127.0.01";
	char ip3[] = "127.0..1";
	char ip4[] = "127.297.100.abc";
	char ip5[] = "127.247.100.234";

	printf("%s", ip1);
	is_valid_ip(ip1)? printf(" is a valid IP address\n"): printf(" is not a valid IP address\n");
	printf("%s", ip2);
	is_valid_ip(ip2)? printf(" is a valid IP address\n"): printf(" is not a valid IP address\n");
	printf("%s", ip3);
	is_valid_ip(ip3)? printf(" is a valid IP address\n"): printf(" is not a valid IP address\n");
	printf("%s", ip5);
	is_valid_ip(ip5)? printf(" is a valid IP address\n"): printf(" is not a valid IP address\n");
	return 0;
}
