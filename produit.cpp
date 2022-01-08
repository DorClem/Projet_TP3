#include"produit.h"
#include<string>
#include<iostream>

Produit::Produit(std::string title, std::string desc, int quantite_dispo, double prix) : _title(title), _desc(desc), _quantite_dispo(quantite_dispo), _prix(prix) {

}
std::string Produit::getTitle() {
	return _title;
}
std::string Produit::getDesc() {
	return _desc;
}
int Produit::getQuantite_dispo() {
	return _quantite_dispo;
}
double Produit::getPrix() {
	return _prix;
}
void Produit::updateQuantite(int nbr) {
	_quantite_dispo = nbr;
}

std::string toString(Produit p) {
	return p.getTitle() + "/" + p.getDesc() + "/" + std::to_string(p.getQuantite_dispo()) + "/" + std::to_string(p.getPrix());
}
std::ostream& operator<<(std::ostream& os, const Produit& p) {
	os << toString(p) << std::endl;
	return os;
}