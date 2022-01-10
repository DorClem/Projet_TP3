#include<iostream>
#include"magasin.h"
#include"produit.h"

int main() {
	int x; 
	std::string element;
	Magasin Easystore;
	std::cout << "Bienvenue dans Easystore ! " << std::endl;
	do {
		std::cout << " 1 : Gestion de Magasin " << std::endl;
		std::cout << " 2 : Gestion des Utilisateur " << std::endl;
		std::cout << " 3 : Gestion des Commandes " << std::endl;
		std::cin >> x;
		std::cout<<""<<std::endl;
		switch (x)
		{
		case 1 : 
			std::cout << " 1 : ajout d'un produit " << std::endl;
			std::cout << " 2 : affichage des produits " << std::endl;
			std::cout << " 3 : mise a jour des quantités " << std::endl;
			std::cout << " 4 : Affichage des commandes " << std::endl;
			std::cout << " 5 : Affichage des clients " << std::endl;
			std::cin >> x;
			switch (x) {
			case 1 :
				std::cout << " Saisissez le nom du produit : " << std::endl;
				std::cin >> element;
				Produit p1(element, element , 12 , 23);

			}

			break;
			
		}

	} while (x >= 0 && x <= 3);


	



	
	
	
	
	
	
	

	
	






	
	return 0;
}