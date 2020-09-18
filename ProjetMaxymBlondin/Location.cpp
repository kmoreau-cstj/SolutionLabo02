// But : Le programme calcule le co�t de location d'un v�hicule
// Auteur : Maxym Blondin
// Date : 2020-09-17

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");			// Convertir correctement les accents de Windows � la console

	int jour;		//Int�gration des variables
	int kil;		//Int�gration des variables
	int cout = 45;	//Int�gration des variables


	std::cout << "Veuillez entrer le nombre de jours que vous avez lou� l'automobile: ";		// Demande des informations a l'utilisateur sur le nombre de jours que l'automobile a �t� lou�e
	std::cin >> jour;
	std::cout << "Veuillez entrer le nombre de Kilom�tres parcourus: ";							// Demande des informations a l'utilisateur sur le nombre de kilom�tre parcouru durant la location
	std::cin >> kil;


	if (kil <= (250 * jour)) // Si la personne a parcouru moin de 250 km par jours
	{
		std::cout << std::endl << "Le co�t de location de l'automobile pour la dur�e de la location est de: " << (jour * cout) << " $"; // Affichage du co�t pour les journ�es
		std::cout << std::endl << "Le co�t de l'essence total est de: " << (kil * 0.076) << " $"; //Probl�me rencontr�: le total pour le prix (kilom�tre) se d�finit automatiquement avec la r�ponse: 62$, peu importe le chiffre entr� (r�solu), Affichage du co�t pour l'essence
		std::cout << std::endl << "Le co�t total pour la location est donc de: " << ((kil * 0.076) + (cout * jour)) << " $"; // Affichage du co�t total de la location
	}

	else
	{
		std::cout << std::endl << "Le co�t de location de l'automobile pour la dur�e de la location est de: " << (jour * cout) << " $";
		std::cout << std::endl << "Le co�t de l'essence total est de: " << (kil * 0.076) << " $"; //Probl�me rencontr�: le total pour le prix (kilom�tre) se d�finit automatiquement avec la r�ponse: 62$, peu importe le chiffre entr� (r�solu)
		std::cout << std::endl << "Le co�t pour le kilom�trage par jours est de: " << ((kil * 0.05) - (12.5 * jour)) << " $"; // Affichage du co�t pour le kilom�trage fait par jour en d�duisant le 250 kilom�tres gratuits par jour
		std::cout << std::endl << "Le co�t total pour la location est donc de: " << ((kil * 0.05) - (12.5 * jour) + (jour * cout) + (kil * 0.076)) << " $"; // Affichage du co�t total de la location en d�duisant les kilom�tre gratuit
	}


		/*
		Plan de test
		Kilom�tre parcouru						Nombre de jours				Co�t total de la location
		750										5							287.00$
		1000									4							256.00$
		8250									15							1527.00$
		2100									42							2049.60$
		2313									9							583.938$
		11250									30							2392.50$		
		
		�chec : 4
		Apr�s correction du code (4): R�ussi
		
		*/ 
	}














	return 0;
}