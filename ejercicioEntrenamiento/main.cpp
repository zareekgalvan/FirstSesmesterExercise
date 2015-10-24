//
//  main.cpp
//  ejercicioEntrenamiento
//
//  Created by Zareek Galvan on 8/10/15.
//  Copyright (c) 2015 Zareek Galvan. All rights reserved.
//

#include <iostream>
using namespace std;

int cantidadDivisible(int inf, int sup)
{
    int cant=0;
    
    while (inf <= sup)
    {
        if (inf%15 == 0)
        {
            cant++;
        }
        inf++;
    }
    
    return cant;
}

int cantidadDivisibleAlgoritmica(int inf, int sup)
{
    return (sup/15 - inf/15) + (inf%15 == 0 ? 1 : 0);
}


int main()
{
    int inf, sup;
    cin>>inf>>sup;
    cout<<cantidadDivisible(inf, sup)<<endl;
    cout<<cantidadDivisibleAlgoritmica(inf, sup)<<endl;;
}