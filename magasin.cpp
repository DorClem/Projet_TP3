#include"magasin.h"
#include<string>

Magasin::Magasin(){

}
std::vector<Client> Magasin::getClient() {
	return _clients;
}


void Magasin::addProduit( Produit produit ) {
	_produits.push_back(produit);
}
void Magasin::addClient(Client client) {
	_clients.push_back(client);
}
void Magasin::addCommande(Commande commande) {
	_commandes.push_back(commande);
}
void Magasin::delProduit(int id) {
	if (id < _produits.size()) {
		_produits.erase(_produits.begin() + id);
	}
}
void Magasin::delClient(int id) {
	if (id < _clients.size()) {
		_clients.erase(_clients.begin() + id);
	}
}
void Magasin::delCommande(int id) {
	if (id < _commandes.size()) {
		_commandes.erase(_commandes.begin() + id);
	}
}
std::ostream& operator<<(std::ostream & os, const Magasin & liste) {
		for (auto element : liste._produits) {
			os << element;
		}
		for (auto element : liste._clients) {
			os << element;
		}
		for (auto element : liste._commandes) {
			os << element;
		}
		return os;
}

void Magasin::getProduits() {
	for (auto element : _produits) {
		std::cout << element;
	}
}
void Magasin::afficheProduit(std::string nomProduit) {
	int c = 0;
	for (int i = 0; i < _produits.size(); i++) {
		if (_produits[i].getTitle() == nomProduit) {
			std::cout << _produits[i];
			c ++;
		}
	}
	if (c != 1) {
		std::cout << "Il n' y a pas de produit avec ce nom";
	}

}
void Magasin::changeQtProduit( std::string nomProduit, int nb) {
	int c = 0;
	for (int i = 0; i < _produits.size(); i++) {
		if (_produits[i].getTitle() == nomProduit) {
			
			
			 _produits[i].updateQuantite(nb);	 
			 		 
			c ++;
		}
	}
	if (c != 1) {
		std::cout << "Il n' y a pas de produit avec ce nom";
	}

}
void Magasin::affichetoutlesClients() {
	for (auto element : _clients) {
		std::cout << element;
	}

}
void Magasin::afficheClientNom(std::string nomClient) {
	int c = 0;
	for (int i = 0; i < _clients.size(); i++) {
		if (_clients[i].getNom() == nomClient) {
			std::cout << _clients[i];
			c++;
		}
	}
	if (c != 1) {
		std::cout << "Il n' y a pas de clients avec ce nom";
	}

}
void Magasin::afficheClientId(std::string idClient) {
	int c = 0;
	for (int i = 0; i < _clients.size(); i++) {
		if (_clients[i].getId() == idClient) {
			std::cout << _clients[i];
			c++;
		}
	}
	if (c != 1) {
		std::cout << "Il n' y a pas de clients avec ce nom";
	}

} 
void Magasin::ajouterProduitClient(Client &c, Produit p) {
	c.addProduit(p);
}
void Magasin::changeQtProduitClient(Client& c, Produit p, int nb) {
	c.changeQtProduit(p, nb);
}
void Magasin::validerUnecommande(Commande& co) {
	co.valider();

}
void Magasin::updateSatutcommande(Commande& co) {
	co.valider();
}
std::vector<Commande> Magasin::getCommande() {
	return _commandes;
}

void Magasin::afficheCommandes() {
	for (auto element : _commandes) {
		std::cout << element;
	}
}

void Magasin::afficheCommandesClient(Client& client) {
	int c = 0;
	for (int i = 0; i < _commandes.size(); i++) {
		if (_commandes[i].getIdClient() == client.getId()) {
			std::cout << _commandes[i];
			c++;
		}
	}
	if (c != 1) {
		std::cout << "Il n' y a pas de clients avec ce nom";
	}

}

	


