//
// Created by Balazsoficial on 2025. 01. 08..
//
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace ::std;
int main()
{
    ofstream output("./output.txt");
    int k;
    int JelenlegiCiklusMuveleteinekMennyisege;
    int LegtobbVeghezvittMuveletEgyCiklusban;
    int SzamAmiHaromJegyu =100;
    int LegnagyobbEloforduloSzamAmireIgaz;
    int HanyszorFordultEloAJelenlegiMaximalisSzam =0;
    SetConsoleOutputCP(CP_UTF8);
    cout << "Add meg k értékét:" << endl;
    cin >> k;

    for (SzamAmiHaromJegyu; SzamAmiHaromJegyu < 1000; SzamAmiHaromJegyu++)
        {
        JelenlegiCiklusMuveleteinekMennyisege =0;
        int ideiglenes =SzamAmiHaromJegyu;
        for (SzamAmiHaromJegyu; SzamAmiHaromJegyu >0; SzamAmiHaromJegyu) {



            int egyes = SzamAmiHaromJegyu % 10;
            int tizes = SzamAmiHaromJegyu/10 % 10;
            int szazas = SzamAmiHaromJegyu/100 % 10;
            int osszeg = egyes + tizes + szazas;
            SzamAmiHaromJegyu = SzamAmiHaromJegyu -(osszeg*k);
          //  output <<"Szam: "<< SzamAmiHaromJegyu << endl;
            JelenlegiCiklusMuveleteinekMennyisege++;


        }
        if (JelenlegiCiklusMuveleteinekMennyisege>=LegtobbVeghezvittMuveletEgyCiklusban) {
            HanyszorFordultEloAJelenlegiMaximalisSzam++;
            if (JelenlegiCiklusMuveleteinekMennyisege>LegtobbVeghezvittMuveletEgyCiklusban) {
                HanyszorFordultEloAJelenlegiMaximalisSzam= 1;
            }
            LegtobbVeghezvittMuveletEgyCiklusban =JelenlegiCiklusMuveleteinekMennyisege;
            LegnagyobbEloforduloSzamAmireIgaz = ideiglenes;
            //cout <<"Új  érték találva ennél a számnál:"<< ideiglenes <<" Ennyi:" <<max<< endl;
            /*lehet engedélyezni debughoz, ellenőrizni de txtben ott van minden*/
            output << "Új hosszabb érték találva ennél a számnál: "<< ideiglenes<<" Ennyi:" <<LegtobbVeghezvittMuveletEgyCiklusban<< endl;
        }
        SzamAmiHaromJegyu =ideiglenes;
        }

    cout <<  " A leghosszab sor hossza  "<< LegtobbVeghezvittMuveletEgyCiklusban <<" volt ami:"<< HanyszorFordultEloAJelenlegiMaximalisSzam<<" szám esetében fordul elő! "<< endl;
    output << " A leghosszab sor hossza  "<< LegtobbVeghezvittMuveletEgyCiklusban <<" volt ami:"<< HanyszorFordultEloAJelenlegiMaximalisSzam<<" szám esetében fordul elő! "<< endl;

    cout << " Ennél a számnál: " << LegnagyobbEloforduloSzamAmireIgaz  << endl;
    output << " Ennél a számnál: " << LegnagyobbEloforduloSzamAmireIgaz  << endl;
    return 0;
}