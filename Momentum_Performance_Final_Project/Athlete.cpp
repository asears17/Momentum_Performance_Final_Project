//
//  Athlete.cpp
//  Momentum_Performance_Final_Project
//
//  Created by Drew Sears on 6/25/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include "Athlete.h"

Athlete :: Athlete()
{
    age=0;
    height= 0.0;
    weight= 0.0;
    bench = 0;
    squat= 0;
    clean= 0;
    
    
}

void Athlete::introduction()
{
    cout << "Welcome to Momentum Performance!\n\n" << endl;
    
}

void Athlete:: askForInformation()
{
    
    
    cout << "What is your name?(First name only) \n";//asks for name
    cin >> name;
    cout << name << " How old are you? \n";// asks for age
    cin >> age;
    
    cout << "How tall are you (Ex: 6.5) " << name << " \n";// asks for height, then determines if you're tall
    cin >> height;
    if (height> 6.2)
        cout << "Wow you're tall!\n" << endl;
    else
        cout << "Not bad\n"<< endl;
    
    
    cout << "How much do you weigh\n";//asks for weight and determines if you have good weight
    cin >> weight;
    if (weight > 300)
        cout << "Woah good thing your doing Momentum Performance\n" << endl;
    else cout << "Good weight!\n" << endl;
}

void Athlete:: askForBSC()
{
    
    cout << "Now lets do your BSC(Bench, Squat, Clean)\n";
    
    cout << "How much can you bench?\n";//asks for bench and determines if its more satisfactory
    cin >> bench;
    if (bench < 160)
        cout << "Oh! You need to get that up!\n";
    else cout << "Very Nice! Always can be better though\n";
    
    cout << "How much can you squat?\n";
    cin >> squat;
    if (squat< 225)
        cout << "Not bad but let's get that number up!\n";
    else cout << "Wow thats awesome, you can always do better though\n";
    
    cout << "How much can you clean\n";
    cin >> clean;
    if (clean < 145)
        cout << "Ouch lets get that number up\n";
    else cout << "Very nice! Lets improve on that!\n";
    
}

 



void Athlete::getName(){
    
    cout << name << endl;;
    
}

void Athlete::getAge(){
    cout << age << endl;;
    
}

void Athlete::getHeight(){
    
    cout << height << endl;;
    
}

void Athlete::getWeight(){
    cout << weight << endl;;
}


void Athlete::getBench(){
    cout << bench << endl;;
}

void Athlete::getSquat(){
    cout << squat << endl;
    
}

void Athlete::getClean(){
    cout << clean << endl;
}