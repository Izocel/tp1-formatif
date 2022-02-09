#include "Utilitaire.h"


/// <summary>
/// Constructeur
/// </summary>
Utilitaire::Utilitaire(){}


/// <summary>
/// G�n�re un nombre al�atoire normaliser entre min et max
/// </summary>
/// <param name="min">minimum</param>
/// <param name="max">maximum</param>
/// <returns>Le nombre g�n�r�</returns>
int Utilitaire::getRandInt(int min, int max) const
{	
	// dist sert � normaliser le nombre g�n�r� entre min et max
	std::uniform_int_distribution<> dist(min, max);
	return dist(RNG);
}
