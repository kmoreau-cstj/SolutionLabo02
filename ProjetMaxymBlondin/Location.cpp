// But : Le programme calcule le coût de location d'un véhicule
// Auteur : Maxym Blondin
// Date : 2020-09-17

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");			// Convertir correctement les accents de Windows à la console

	int jour;		//Intégration des variables
	int kil;		//Intégration des variables
	int cout = 45;	//Intégration des variables


	std::cout << "Veuillez entrer le nombre de jours que vous avez loué l'automobile: ";		// Demande des informations a l'utilisateur sur le nombre de jours que l'automobile a été louée
	std::cin >> jour;
	std::cout << "Veuillez entrer le nombre de Kilomètres parcourus: ";							// Demande des informations a l'utilisateur sur le nombre de kilomètre parcouru durant la location
	std::cin >> kil;


	if (kil <= (250 * jour)) // Si la personne a parcouru moin de 250 km par jours
	{
		std::cout << std::endl << "Le coût de location de l'automobile pour la durée de la location est de: " << (jour * cout) << " $"; // Affichage du coût pour les journées
		std::cout << std::endl << "Le coût de l'essence total est de: " << (kil * 0.076) << " $"; //Problème rencontré: le total pour le prix (kilomètre) se définit automatiquement avec la réponse: 62$, peu importe le chiffre entré (résolu), Affichage du coût pour l'essence
		std::cout << std::endl << "Le coût total pour la location est donc de: " << ((kil * 0.076) + (cout * jour)) << " $"; // Affichage du coût total de la location
	}

	else
	{
		std::cout << std::endl << "Le coût de location de l'automobile pour la durée de la location est de: " << (jour * cout) << " $";
		std::cout << std::endl << "Le coût de l'essence total est de: " << (kil * 0.076) << " $"; //Problème rencontré: le total pour le prix (kilomètre) se définit automatiquement avec la réponse: 62$, peu importe le chiffre entré (résolu)
		std::cout << std::endl << "Le coût pour le kilométrage par jours est de: " << ((kil * 0.05) - (12.5 * jour)) << " $"; // Affichage du coût pour le kilométrage fait par jour en déduisant le 250 kilomètres gratuits par jour
		std::cout << std::endl << "Le coût total pour la location est donc de: " << ((kil * 0.05) - (12.5 * jour) + (jour * cout) + (kil * 0.076)) << " $"; // Affichage du coût total de la location en déduisant les kilomètre gratuit
	}


		/*
		Plan de test
		Kilomètre parcouru						Nombre de jours				Coût total de la location
		750										5							287.00$
		1000									4							256.00$
		8250									15							1527.00$
		2100									42							2049.60$
		2313									9							583.938$
		11250									30							2392.50$		
		
		Échec : 4
		Après correction du code (4): Réussi
		
		*/ 
	}














	return 0;
}