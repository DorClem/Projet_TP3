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
	guigui.changeQtProduit("Ps2", 390);
	guigui.delProduit("Ps1");
	std::cout << Nike;
	



	
	
	
	
	
	
	

	
	






	
	return 0;
}