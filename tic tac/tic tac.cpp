// tic tac.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;


int main(int argc, char** argv)
{
    
    int a, b;
    int som, diff, pro, quo, reste;
    cout << "donne la valeur de a:";
    cin >> a;
    cout << "donner la valeur de b";
    cin >> b;

    som = a + b;
    diff = a - b;
    pro = a * b;
    quo = a / b;

    reste = a % b;


    
    cout << "LA somme est " << som << endl;;
    cout << "la difference "<< diff<< endl;
    cout << "le produit "<< pro << endl;
    cout << "le quotint " << quo << endl;
    cout << "le reste : " << reste << endl;

    system("pause");






















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
