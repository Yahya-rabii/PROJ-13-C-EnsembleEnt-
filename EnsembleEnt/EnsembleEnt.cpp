#include <iostream>
#include "Header.h"

using namespace std;

int main()
{

    EnsembleEnt E(4);
    EnsembleEnt F(4);

    int a = 0;

    for (int i = 0; i < 4; i++)
    {

        cout << " E :: element "<<i+1<<" : ";
        cin >> a;


        E.ajouter_element(a);



    }



    for (int i = 0; i < 4; i++)
    {

        cout << " F :: element " << i + 1 << " : ";
        cin >> a;


        F.ajouter_element(a);



    }

    E.afficher();
    F.afficher();

    E.ajouter_element(111);
    E.afficher();

    if (E.identiques(F)) {




        cout << " identique " << endl;



    }

    else {

        cout << "  non identique " << endl;

    }

}
