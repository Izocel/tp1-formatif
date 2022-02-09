#ifndef UTILITAIRE_DEF
#define UTILITAIRE_DEF

#include <iostream>
#include <string>
#include <random>

#include "Sort.h"
#include "Magicien.h"
#include "BatonMagique.h"
#include "BouclierMagique.h"


/// <summary>
/// Instances pour la g�n�ration de nombre al�atoire
/// </summary>
std::random_device rd;
std::mt19937 RNG(rd());

/// <summary>
/// Constantes pour les sorts de d�fense
/// </summary>
const int DEF_GUERISON{ -3 };
const int DEF_PROTECTION{ -6 };


/// <summary>
/// Constantes pour les sorts d'attaque
/// </summary>
const int ATK_FOUDRE{ 4 };
const int ATK_INCINERATEUR{ 8 };


class Utilitaire {
public:
	Utilitaire();

	/// <summary>
	/// G�n�ration d'un nombre al�atoire
	/// </summary>
	/// <param name="min">minimum</param>
	/// <param name="max">maximum</param>
	/// <returns>un entier entre min et max</returns>
	int getRandInt(int min, int max) const;
};
#endif