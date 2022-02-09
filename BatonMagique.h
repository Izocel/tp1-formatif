#ifndef BATONMAGIQUE_DEF
#define BATONMAGIQUE_DEF

#include "Sort.h"
#include "Magicien.h"

class BatonMagique
{

public:
	BatonMagique(){};
	BatonMagique(Sort& refSortAtk, Sort& refSortDef);

	bool lancerSortAtk(Magicien& refMagicien);
	bool lancerSortDef(Magicien& refMagicien);


private:
	Sort m_sortAtk;
	Sort m_sortDef;

};
#endif
