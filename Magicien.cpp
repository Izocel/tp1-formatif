#include "Magicien.h"

bool Magicien::estVivant() {return m_ptsVie > 0;}

void Magicien::equiperBaton(BatonMagique& refBaton){ m_Baton = refBaton; }
bool Magicien::utiliserBaton(Magicien& refCible, int mode)
{

	return true;
	//return mode == 0 ? m_Baton.lancerSortAtk(refCible)
	//	: m_Baton.lancerSortDef(refCible);
};
