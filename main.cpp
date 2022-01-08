#include<iostream>
#include"magasin.h"
#include"produit.h"

int main() {
	Magasin Nike;
	 
	Produit Ps1("Ps1", "Console de jeux sony", 10, 249.99);
	Produit Ps2("Ps2", "Console de jeux sony", 10, 249.99);
	Nike.addProduit(Ps1);
	Nike.addProduit(Ps2);
	
	Client guigui("bo");
	Client bido("hyper bo");
	Nike.addClient(guigui);
	Nike.addClient(bido);
	//Nike.changeQtProduit("Ps2", x);
	
	
	
	
	
	
	

	
	






	
	return 0;
}