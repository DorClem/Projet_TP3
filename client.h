#ifndef CLIENT_H
#define CLIENT_H
#include<string>
#include<vector>
class Client {
public:
	Client(std::string nom);
	Client(std::string nom,
	std::string prenom,
	std::string id,
	std::vector<std::string /*Object*/> panier);
	std::string getNom();
	

	
private:
	std::string _nom;
	std::string _prenom;
	std::string _id;
	std::vector<std::string /*Object*/> _panier;
};
std::string toString(Client c);
std::ostream& operator<<(std::ostream& os, const Client& client);




#endif // CLIENT_H
