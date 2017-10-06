//
//  main.cpp
//  PRG-3-20-Pizza-Pi
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Joe's Pizza Palace needs a program to calculate the number of slices a pizza of any size
//  can be divided into. The program should perform the following steps:
//
//  A) Ask the user for the diameter of the pizza in inches.
//  B) Calculate the number of slices that may be taken from a pizza of that size.
//  C) Display a message telling the number of slices.
//
//  To calculate the number of slices that may be taken from the pizza, you must know
//  the following facts:
//  * Each slice should have an area of 14.125 inces.
//  * To calculate the number of slices, simply divide the area of the pizza by 14.125.
//  * The area of the pizza is calculated with this fomula:
//  Area = PIr^2
//
//  Make sure the output of the program displays the number of slices in fixed-point
// notation, rounded to one decimal place of precision. Used a named constant for pi.


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float fltPizzaDiamter,
          fltPizzaRadius,
          fltPizzaArea,
          fltPizzaSlicesTotal;
    
    float const FLT_PIZZA_SLICE_AREA = 14.125f,
                FLT_PI = 3.14159f;
    
    cout << "Please enter the diameter of your pizza: " << endl;
    cin >> fltPizzaDiamter;
    
    fltPizzaRadius = fltPizzaDiamter / 2.0f;
    
    fltPizzaArea = FLT_PI * pow(fltPizzaRadius, 2.0f);
    
    fltPizzaSlicesTotal = fltPizzaArea / FLT_PIZZA_SLICE_AREA;
    
    cout << setprecision(1) << fixed << showpoint;
    
    cout << "Your pizza contains " << fltPizzaSlicesTotal << " slices of pizza." << endl;
    
    return 0;
}


