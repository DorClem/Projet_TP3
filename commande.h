#ifndef COMMANDE_H
#define COMMANDE_H
#include"client.h"
#include<vector>
class Commande {
public:
	
private:
	Client _client;
	std::vector<std::string /*Object*/> _article_commande;

	bool _statut;
};
#endif // !COMMANDE_H
