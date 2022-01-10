#include<iostream>
#include"magasin.h"
#include"produit.h"

int main() {
	Magasin Nike;
	 
	Produit Ps1("Ps1", "Console de jeux sony", 10, 249.99);
	Produit Ps2("Ps2", "Console de jeux sony", 10, 249.99);
	Nike.addProduit(Ps1);
	Nike.addProduit(Ps2);
	
	Client guigui( "dorms", "guigui", "gdorms");
	
	Nike.addClient(guigui);
	
	guigui.addProduit(Ps2);
	guigui.addProduit(Ps1);
	Client clement("dormis", "clement", "cdorms");
	Nike.addClient(clement);
	Nike.ajouterProduitClient(clement, Ps2);
	Nike.ajouterProduitClient(clement, Ps1);
	clement.changeQtProduit(Ps2, 3000);
	Nike.changeQtProduitClient(clement, Ps2, 1);
	std::cout << clement;




	
	
	
	
	
	
	

	
	






	
	return 0;
}