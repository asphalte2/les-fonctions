// les fonctions.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

void  Aficharge(){
     
    std::cout << "bonjour tout le monde" << '\n';

}
int somme(int premiernombre, int secondnombre)
{
    return premiernombre + secondnombre;
    
}
int sommebis(int a, int b, int c, int d ) {
    return a + b + c + d;
}

float sommeAB(){
    float a = 8.5f;
    float b = 5.5;
    return a + b;
}

int main() {
    int a = 15;
    int b = 22;

    int c = 2;
    int d = 4;

    std::cout << sommebis(a,b,c,d) << "\n";
    std::cout << somme(a,b) + somme(c,d) << "\n";
    Aficharge();
    return 0;
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
