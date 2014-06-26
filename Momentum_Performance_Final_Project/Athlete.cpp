//
//  Athlete.cpp
//  Momentum_Performance_Final_Project
//
//  Created by Drew Sears on 6/25/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include "Athlete.h"

void Athlete::introduction()
{
    cout << "Welcome to Momentum Performance!\n\n" << endl;
    
}

void Athlete:: askForInformation()
{
    double Weight= 0;
    double Height= 0;
    cout << "What is your name?(First name only) \n";//asks for name
    cin >> Name;
    cout << Name << " How old are you? \n";// asks for age
    cin >> Age;
    
    cout << "How tall are you (Ex: 6.5) " << Name << " \n";// asks for height, then determines if you're tall
    cin >> Height;
    if (Height> 6.2)
        cout << "Wow you're tall!\n" << endl;
    else
        cout << "Not bad\n"<< endl;
    
    
    cout << "How much do you weigh\n";//asks for weight and determines if you have good weight
    cin >> Weight;
    if (Weight > 300)
        cout << "Woah good thing your doing Momentum Performance\n" << endl;
    else cout << "Good weight!\n" << endl;
}

void Athlete:: askForBSC()
{
    int Bench = 0;
    int Squat = 0;
    int Clean = 0;
    cout << "Now lets do your BSC(Bench, Squat, Clean)\n";
    
    cout << "How much can you bench?\n";//asks for bench and determines if its more satisfactory
    cin >> Bench;
    if (Bench < 160)
        cout << "Oh! You need to get that up!\n";
    else cout << "Very Nice! Always can be better though\n";
    
    cout << "How much can you squat?\n";
    cin >> Squat;
    if (Squat< 225)
        cout << "Not bad but let's get that number up!\n";
    else cout << "Wow thats awesome, you can always do better though\n";
    
    cout << "How much can you clean\n";
    cin >> Clean;
    if (Clean < 145)
        cout << "Ouch lets get that number up\n";
    else cout << "Very nice! Lets improve on that!\n";
    
}

 



void Athlete::getName(){
    
    cout << Name << endl;;
    
}

void Athlete::getAge(){
    cout << Age << endl;;
    
}

void Athlete::getHeight(){
    
    cout << Height << endl;;
    
}

void Athlete::getWeight(){
    cout << Weight << endl;;
}


void Athlete::getBench(){
    cout << Bench << endl;;
}

void Athlete::getSquat(){
    cout << Squat << endl;
    
}

void Athlete::getClean(){
    cout << Clean << endl;
}