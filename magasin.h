#include<iostream>
#include<vector>
#ifndef MAGASIN_H
#define MAGASIN_H
#include"commande.h"
#include"client.h"
#include"produit.h"
class Magasin  {
public:
	Magasin();
	
	void addProduit(Produit produit);
	void addClient(Client client);
	void addCommande(Commande commande);
	void delProduit(int id);
	void delClient(int id);
	void delCommande(int id);
	void del(int id);
	void getProduits();
	void afficheProduit(std::string nomProduit);
	void afficheClientNom(std::string nomClient );
	void afficheClientId(std::string idClient);
	void ajouterProduitClient(Client &c, Produit p);
	void changeQtProduitClient(Client& c, Produit p, int nb);
	
	void changeQtProduit( std::string nomProduit , int nb);
	std::vector<Client> getClient();
	void affichetoutlesClients();
	
	friend std::ostream& operator<<(std::ostream& os, const Magasin& liste);
	//ça serait bien de tout mettre les choses aussi en focntion helper 

	

private:

	std::vector < Produit > _produits;
	std::vector< Client > _clients;
	std::vector< Commande > _orders;

};



#endif // !MAGASIN_H
