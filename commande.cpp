#include"commande.h"
#include<string>

Commande::Commande(Client client, Produit p, bool etat, bool statut) : _client(client), _p(p) {
	addCommande(p);
	
	

}
void Commande::addCommande(Produit produit) {
	_article_commande.push_back(produit);
}
bool Commande::getStatut() {
	return _statut ;
}
bool Commande::getEtat() {
	return _etat;
}
Client Commande::getClient() {
	return _client;
}
void Commande::updateStatutlivraison() {
	_statut = true ;
	_etat = true;
}
void Commande::valider() {
	_etat = true ;
}

std::string toString(Commande co) {
	return  toString(co.getClient()) + " / valide : " + std::to_string( co.getEtat()) + " / livree " + std::to_string(co.getStatut());
}
std::ostream& operator<<(std::ostream& os, const Commande& co) {
	os << toString(co) << std::endl;
	for (auto element : co._article_commande) {
		os << element;
	}
	return os;
}
std::string Commande::getIdClient() {
	return _client.getId();
}
