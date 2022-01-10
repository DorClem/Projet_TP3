#include<iostream>
#include<string>
#ifndef PRODUIT_H
#define PRODUIT_H
class Produit  {
public:
	Produit(std::string title, std::string desc, int quantite_dispo, double prix);
	
	
	std::string getTitle();
	std::string getDesc();
	int getQuantite_dispo();
	double getPrix();
	void updateQuantite(int nbr);
private:
	std::string _title;
	std::string _desc;
	int _quantite_dispo;
	double _prix;
	
};
std::string toString(Produit p);
std::ostream& operator<<(std::ostream& os, const Produit& produit);

#endif // !PRODUIT_H
