#include "BatonMagique.h"




BatonMagique::BatonMagique(Sort refSortAtk, Sort refSortDef)
{
	m_sortAtk = refSortAtk; 
	m_sortDef = refSortDef;
	m_nom = m_sortAtk.getNom() + " de " + m_sortDef.getNom();
}

//bool BatonMagique::lancerSortAtk(Magicien refMagicien)
//{
//	return m_sortAtk.appliquer(refMagicien);
//}
//
//bool BatonMagique::lancerSortDef(Magicien refMagicien)
//{
//	return m_sortDef.appliquer(refMagicien);
//}
