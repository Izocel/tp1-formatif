#include "BatonMagique.h"


BatonMagique::BatonMagique(Sort& refSortAtk, Sort& refSortDef)
{
	m_sortAtk = refSortAtk; 
	m_sortDef = refSortDef;
}

bool BatonMagique::lancerSortAtk(Magicien& refMagicien)
{
	return m_sortAtk.appliquer(refMagicien);
}

bool BatonMagique::lancerSortDef(Magicien& refMagicien)
{
	return m_sortDef.appliquer(refMagicien);
}
