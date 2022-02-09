#include "Sort.h"


Sort::Sort(std::string nom, std::string type, int dommage)
	{m_nom = nom; m_type = type; m_dommage = dommage;};

// TODO: appliquer les bons effets selon le nom et type
bool Sort::appliquer(Magicien& refMagicien)
{

	if (m_type.find("Atk")) {

		if (m_nom.find("Incin�rateur")) {
			// Possibiliter de faire une m�thode dommageBouclierVie() 
			//avec check et delta dommage
			refMagicien.dommageBouclier(m_dommage);
			refMagicien.dommageVie(m_dommage);
		}
		else {
			// Foudre
			refMagicien.dommageVie(m_dommage);
		}
	}
	else {
		if (m_nom.find("Gu�rison")) {
			refMagicien.dommageBouclier(m_dommage);
		}
		else {
			// Protection
			refMagicien.dommageVie(m_dommage);
		}	
	}
	return refMagicien.estVivant();
}

int Sort::getDommage() const {return m_dommage;}

std::string Sort::getType() const {return m_type;}
