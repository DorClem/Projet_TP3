#ifndef CLIENT_H
#define CLIENT_H
#include"produit.h"
#include<string>
#include<vector>
class Client {
public:
	
	Client(std::string nom,
	std::string prenom,
	std::string id,
	std::vector<Produit> panier);
	Client(std::string nom,
		std::string prenom,
		std::string id);
	std::string getNom();
	std::string getPrenom();
	std::string getId();
	void addProduit(Produit produit);
	void payer();
	friend std::ostream& operator<<(std::ostream& os, const Client& client);
	void changeQtProduit(Produit& p, int nb);
	void delProduitNom(std::string nomProduit);
	void delProduit(Produit& p);

	
private:
	std::string _nom;
	std::string _prenom;
	std::string _id;
	std::vector<Produit> _panier;
};
std::string toString(Client c);






#endif // CLIENT_H
