#include <stdbool.h>

extern bool palindromo(unsigned long long x);

int main(void)
{
	palindromo(122);
	palindromo(10);
	palindromo(1);
	palindromo(809908);
	palindromo(56765);
	palindromo(11221);
	return 0;
}
