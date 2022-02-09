#include "Magicien.h"

bool Magicien::estVivant() {return m_ptsVie > 0;}

void Magicien::equiperBaton(BatonMagique& refBaton){ m_Baton = refBaton; }
bool Magicien::utiliserBaton(Magicien& refCible, int mode)
{
	return mode == 0 ? m_Baton.lancerSortAtk(refCible)
		: m_Baton.lancerSortDef(refCible);
}


bool Magicien::dommageBouclier(int dommage)
{
	return m_Bouclier.recevoirDommage(dommage);
}
bool Magicien::dommageVie(int dommage)
{
	if (m_ptsVie + dommage > m_ptsVieMax)
		m_ptsVie = m_ptsVieMax;

	else if (m_ptsVie + dommage < 0)
		m_ptsVie = 0;
	else
		m_ptsVie += dommage;


	return m_ptsVie > 0;
}
;
