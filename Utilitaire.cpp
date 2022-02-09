#include "Utilitaire.h"


/// <summary>
/// Constructeur
/// </summary>
Utilitaire::Utilitaire(){}


/// <summary>
/// Génère un nombre aléatoire normaliser entre min et max
/// </summary>
/// <param name="min">minimum</param>
/// <param name="max">maximum</param>
/// <returns>Le nombre généré</returns>
int Utilitaire::getRandInt(int min, int max) const
{	
	// dist sert à normaliser le nombre généré entre min et max
	std::uniform_int_distribution<> dist(min, max);
	return dist(RNG);
}
