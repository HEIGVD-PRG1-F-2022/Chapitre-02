#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

   const double PI = 3.14159,
                CM3_EN_LITRE = 1E-3; // 1 litre = 1000 cm3

   double r1, h1, // rayon [cm] et hauteur [cm] du cylindre 1
          r2, h2, // rayon [cm] et hauteur [cm] du cylindre 2
          h3;     // hauteur [cm] du tronc de cône
   
   // Saisies utilisateur (supposées correctes)             
   cout << "Entrez le rayon du cylindre 1 [cm]      : ";
   cin >> r1;
   cout << "Entrez le rayon du cylindre 2 [cm]      : ";
   cin >> r2;
   cout << "Entrez la hauteur du cylindre 1 [cm]    : ";
   cin >> h1;
   cout << "Entrez la hauteur du cylindre 2 [cm]    : ";
   cin >> h2;
   cout << "Entrez la hauteur du tronc de cone [cm] : ";
   cin >> h3;

   // Calculs des divers volumes [cm3] et du volume total [litre]
   const double
      VOLUME_CYLINDRE_1 = PI * r1 * r1 * h1,                     
      VOLUME_CYLINDRE_2 = PI * r2 * r2 * h2,                     
      VOLUME_CONE       = PI * (r1 * r1 + r1 * r2 + r2 * r2) * h3 / 3, 
      VOLUME_TOTAL      = (VOLUME_CYLINDRE_1 + VOLUME_CYLINDRE_2 + VOLUME_CONE)
                          * CM3_EN_LITRE; 
      
   // Affichage du résultat
   cout << "\nLa contenance de la bouteille est de "
        << fixed << setprecision(1)
        << VOLUME_TOTAL << " litre"
        << (VOLUME_TOTAL < 2 ? "" : "s") << "." << endl;
         
   return EXIT_SUCCESS;
}

// Entrez le rayon du cylindre 1 [cm]      : 4
// Entrez le rayon du cylindre 2 [cm]      : 1
// Entrez la hauteur du cylindre 1 [cm]    : 12
// Entrez la hauteur du cylindre 2 [cm]    : 1
// Entrez la hauteur du tronc de cone [cm] : 3
// 
// La contenance de la bouteille est de 0.7 litre.
