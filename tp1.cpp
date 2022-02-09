#include "tp1.h"

int main()
{
	Magicien magicienGentil{};
	changerBaton(magicienGentil);

	Magicien magicienMechant{};
	changerBaton(magicienMechant);

}





std::string afficheChoixMagicien(Magicien& magicien) {
	std::string newString{"1- Changer de baton\n"};
	if (magicien.peutUtiliserBaton()) {
		newString += "2- Lancer sort d'attaque\n";
		newString += "3- Utiliser sort défense\n";
	}

	return newString;
}

void changerBaton(Magicien& magicien) {
	int random = UTILITAIRE.getRandInt(0, NB_BATONS);
	magicien.equiperBaton(*BATONS_MAGIQUES[random]);
	return;
}

void attaquerJoueur(Magicien& magicienSource, Magicien& magicienCible) {
	magicienSource.utiliserBaton(magicienCible, 0);
	return;
}


