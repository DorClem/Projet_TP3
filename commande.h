#ifndef COMMANDE_H
#define COMMANDE_H
#include"client.h"
#include<vector>
#include"client.h"
class Commande {
public:
	Commande(Client _client, Produit p,bool etat=false, bool statut = false);
	void addCommande(Produit produit);
	Client getClient();
	
	bool getStatut();
	bool getEtat();
	void updateStatutlivraison();
	void valider();
	std::string getIdClient();
	
	friend std::ostream& operator<<(std::ostream& os, const Commande& co);
	
private:
	Client _client;
	Produit _p;
	std::vector<Produit> _article_commande;
	bool _etat  ;
	bool _statut ;
};
std::string toString(Commande co);
#endif // !COMMANDE_H
