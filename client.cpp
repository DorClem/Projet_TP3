#include<vector>
#include<string>
#include<iostream>
#include"client.h"


Client::Client(std::string nom,
	std::string prenom,
	std::string id,
	std::vector<Produit> panier) : _nom(nom), _prenom(prenom), _id(id), _panier(panier) {

}
Client::Client(std::string nom,
	std::string prenom,
	std::string id): _nom(nom), _prenom(prenom), _id(id) {

}

std::string Client::getNom() {
	return _nom;
}
std::string Client::getPrenom() {
	return _prenom;
}
std::string Client::getId() {
	return _id;
}
std::string toString(Client c) {
	return c.getNom() + " / " + c.getPrenom() + " / " + c.getId();
}
std::ostream& operator<<(std::ostream& os, const Client& c) {
	os << toString(c) << std::endl;
	for (auto element : c._panier) {
		os << element;
	}
	return os ;
}
void Client::addProduit(Produit produit) {
	_panier.push_back(produit);
}
void Client::payer() {
	_panier.clear();
}
void Client::changeQtProduit(std::string nomProduit, int nb) {
	int c = 0;
	for (int i = 0; i < _panier.size(); i++) {
		if (_panier[i].getTitle() == nomProduit) {


			_panier[i].updateQuantite(nb);

			c++;
		}
	}if (c != 1) {
		std::cout << "Il n' y a pas de produit avec ce nom";
	}

}
void Client::delProduit(std::string nomProduit){
int c = 0;
for (int i = 0; i < _panier.size(); i++) {
	if (_panier[i].getTitle() == nomProduit) {


		_panier.erase(_panier.begin() + i);

		c++;
	}
}if (c != 1) {
	std::cout << "Il n' y a pas de produit avec ce nom";
}

}



