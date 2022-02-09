#ifndef BOUCLIERMAGIQUE_DEF
#define BOUCLIERMAGIQUE_DEF

class BouclierMagique
{

public:
	/// <summary>
	/// Constructeur
	/// </summary>
	BouclierMagique() {};

	/// <summary>
	/// Vérifie si le bouclier a encore des points d'absorbtions
	/// </summary>
	/// <returns>Vrai ou faux</returns>
	bool estActif() const;

	/// <summary>
	/// Sert pour l'ajout ou la perte de points d'absorbtion
	/// </summary>
	/// <param name="dommage">Le nombre de point (+/-) à distribuer</param>
	/// <returns> vrai si encore points absorbtions</returns>
	bool recevoirDommage(int dommage);

private:
	int m_ptsMax{ 50 };
	int m_ptsAbsorbtion{ 0 };


};
#endif

