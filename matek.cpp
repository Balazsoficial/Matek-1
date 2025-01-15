//
// Created by Balazsoficial on 2025. 01. 08..
//
#include <iostream>
#include <fstream>
using namespace ::std;
int main()
{
    ofstream output("./output.txt");
    int k;
    int maxtemp;
    int max;
    int szam =100;
    int maxszam;
    int koztesszam =0;
    cout << "Add meg k értékét:" << endl;
    cin >> k;

    for (szam; szam < 1000; szam++)
        {
        maxtemp =0;
        int ideiglenes =szam;
        for (szam; szam >0; szam) {



            int egyes = szam % 10;
            int tizes = szam/10 % 10;
            int szazas = szam/100 % 10;
            int osszeg = egyes + tizes + szazas;
            szam = szam -(osszeg*k);
            output <<"Szam: "<< szam << endl;
            maxtemp++;


        }
        if (maxtemp>=max) {
            koztesszam++;
            if (maxtemp>max) {
                koztesszam= 1;
            }
            max =maxtemp;
            maxszam = ideiglenes;
            //cout <<"Új  érték találva ennél a számnál:"<< ideiglenes <<" Ennyi:" <<max<< endl;
            /*lehet engedélyezni debughoz , ellenőrizni de txtben ott van minden*/
            output << "Új hosszabb érték találva ennél a számnál:"<<" Ennyi:" <<max<< endl;
        }
        szam =ideiglenes;
        }

    cout <<  " A leghosszab sor hossza  "<< max <<" volt ami:"<< koztesszam<<" szám esetében fordul elő! "<< endl;
    output << " A leghosszab sor hossza  "<< max <<" volt ami:"<< koztesszam<<" szám esetében fordul elő! "<< endl;

    cout << " Ennél a számnál: " << maxszam  << endl;
    output << " Ennél a számnál: " << maxszam  << endl;
    return 0;
}