//
//  Athlete.h
//  Momentum_Performance_Final_Project
//
//  Created by Drew Sears on 6/25/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef __Momentum_Performance_Final_Project__Athlete__
#define __Momentum_Performance_Final_Project__Athlete__

#include <iostream>
#include <string>
using namespace std;


class Athlete{
public:
    
    void introduction();//function for introduction
    void askForInformation();
    void askForBSC();
    
    string Name;//users information
    int Age;
    double Height;
    double Weight;
    
    int Bench;//Users BSC numbers
    int Squat;
    int Clean;
    
    void getName();//returns users information into .txt file
    void getAge();
    void getHeight();
    void getWeight();
    
    void getBench();//returns users information into .txt file + formula
    void getSquat();
    void getClean();
    
    
    
};








#endif /* defined(__Momentum_Performance_Final_Project__Athlete__) */
