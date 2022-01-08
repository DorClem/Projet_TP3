#include<vector>
#include<string>
#include<iostream>
#include"client.h"

Client::Client(std::string nom,
	std::string prenom,
	std::string id,
	std::vector<std::string /*Object*/> panier) : _nom(nom), _prenom(prenom), _id(id), _panier(panier) {

}
Client::Client(std::string nom) : _nom(nom) {

}
std::string Client::getNom() {
	return _nom;
}
std::string toString(Client c) {
	return c.getNom();
}
std::ostream& operator<<(std::ostream& os, const Client& c) {
	os << toString(c) << std::endl;
	return os;
}



