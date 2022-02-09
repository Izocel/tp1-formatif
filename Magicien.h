#ifndef MAGICIEN_DEF
#define MAGICIEN_DEF

#include <string>
#include "BatonMagique.h"
#include "BouclierMagique.h"



class Magicien
{

public:
	Magicien() {};
	bool estVivant();

	/// <summary>
	/// Permet de cahnger le baton du magicien
	/// </summary>
	/// <param name="refBaton">Le baton en r�f�rence</param>
	void equiperBaton(BatonMagique& refBaton);

	/// <summary>
	/// Appliquera le sort selon le mode
	/// � l'instance cible en r�f�rence.
	/// </summary>
	/// <param name="magicienCible">L'instance cible</param>
	/// <param name="mode">[0/1] (atk/def)</param>
	/// <returns>vrai si la cible est toujour en vie</returns>
	bool utiliserBaton(Magicien& refCible, int mode);

private:
	int m_ptsVie{ 50 };
	int m_ptsMagie{ 50 };
	BatonMagique m_Baton;
	BouclierMagique m_Bouclier;
};
#endif
