#pragma once
#include "Utilitaire.h"

// Instances de jeu
const Utilitaire UTILITAIRE;

	//Sorts d'attaques
const Sort* SORT_ATK[2]{
	new Sort{ "Foudre","Atk", ATK_FOUDRE },
	new Sort{ "Incinérateur","Atk", ATK_INCINERATEUR }
};

	//Sorts défenses
const Sort* SORT_DEF[2]{
	new Sort{ "Guérison","Atk", DEF_GUERISON },
	new Sort{ "Protection", "Atk", DEF_PROTECTION }

};

	//BatonMagiques
const BatonMagique* BATONS_MAGIQUES[4]{
	new BatonMagique{*SORT_ATK[0], *SORT_DEF[0]},
	new BatonMagique{*SORT_ATK[0], *SORT_DEF[1]},
	new BatonMagique{*SORT_ATK[1], *SORT_DEF[0]},
	new BatonMagique{*SORT_ATK[1], *SORT_DEF[1]}
};
const int NB_BATONS = 4;
