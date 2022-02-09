#ifndef SORT_DEF
#define SORT_DEF

#include "Magicien.h"

class Sort
{

public:
	Sort() { };
	/// <summary>
	/// Constructeur
	/// </summary>
	/// <param name="nom">Le nom</param>
	/// <param name="type">Le type (atk/def)</param>
	/// <param name="dommage"> Le dmg (+/-)  du sort.</param>
	Sort(std::string nom, std::string type, int dommage);

	/// <summary>
	/// Applique l'algorythme du sort sur le joueur en référence
	/// selon le nom et le type du sort.
	/// </summary>
	/// <param name="refMagicien">Le magicien affecté</param>
	/// <returns></returns>
	bool appliquer(Magicien& refMagicien);


	int getDommage() const;
	std::string getType() const;

	
private:
	std::string m_nom{ "" };
	std::string m_type{ "" };
	int m_dommage{ 0 };
};
#endif
