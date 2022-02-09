#include "BouclierMagique.h"

bool BouclierMagique::estActif() const {return m_ptsAbsorbtion > 0;}

bool BouclierMagique::recevoirDommage(int dommage)
{
	if (m_ptsAbsorbtion - dommage > m_ptsMax)
		m_ptsAbsorbtion = m_ptsMax;

	else if (m_ptsAbsorbtion - dommage < 0)
		m_ptsAbsorbtion = 0;
	else
		m_ptsAbsorbtion -= dommage;

	return estActif();
}
