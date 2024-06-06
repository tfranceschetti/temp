#include <stdbool.h>

bool palindromo(unsigned long long x)
{
	if (x < 10)
	{
		return true;
		// un numero a una sola cifra è sempre palindromo
	}

	unsigned long long divisor = 1; // divisore
	while (x / divisor >= 10)
	{
		divisor *= 10;
	}
	// al termine di questo ciclo divisore sarà il multiplo di dieci con tante cifre quante le cifre di x

	// ora verifichiamo se x è palindromo
	while (x > 0)
	{
		unsigned long long leading = x / divisor;	// trovo la prima cifra di x
		unsigned long long ending = x % 10;		// trovo l'ultima cifra di x
		if (leading != ending)
		{
			return false;	
			// se la prima e l'ultima cifra non coincidono, non è un palindromo 
		}

		// se prima e ultima cifra coincidono, le rimuovo e reitero il ciclo
		x = (x % divisor) / 10;
		divisor /= 100;		
		// al divisore sottraggo due zeri, dato che ho rimosso due cifre (prima e ultima)
	}

	return true; 
	// se tutte le cifre coincidono, è un palindromo
}
