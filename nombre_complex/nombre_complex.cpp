#include <iostream>
#include"complex.h"
using namespace std;
int main()
{
    Complex* Z1 = new Complex(3, 7);
    Complex* Z2 = new Complex(3, 6);
    Z1->afficher();
    cout << endl;
    Z2->afficher();
    cout << endl;

    double a = -4.0;

    Complex *Z3 = new Complex(*Z1 - *Z2);
    Z3->afficher();
    cout << endl;

    Complex Z4 = *Z1 * a;
    Z4.afficher();
    cout << endl;


    Complex Z5 = *Z1 / Z4;
    Z5.afficher();
    cout << endl;


    
    if ((*Z1 == *Z2) == true) {
        Z1->afficher();
        cout << " et ";
        Z2->afficher();
        cout << " sont deux nombres  egaux ";
        
    }
    else if ((*Z1 < *Z2) == true) {
        Z1->afficher();
        cout << " est moins que ";
        Z2->afficher();
    }
    else if ((*Z1 < *Z2) == false) {
        Z1->afficher();
        cout << " est plus que ";
        Z2->afficher();
    }

    

    // supression des objets qui sont crées  dynamiquement 
    delete Z1;
    delete Z2;
    delete Z3;

}
