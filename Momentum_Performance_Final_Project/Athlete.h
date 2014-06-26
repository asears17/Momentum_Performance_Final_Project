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
    
    Athlete();//default information of athlete
    
    string name;//users information
    int age;
    double height;
    double weight;
    
    int bench;//Users BSC numbers
    int squat;
    int clean;
    
    void getName();//returns users information into .txt file
    void getAge();
    void getHeight();
    void getWeight();
    
    void getBench();//returns users information into .txt file
    void getSquat();
    void getClean();
    
    
    
};








#endif /* defined(__Momentum_Performance_Final_Project__Athlete__) */
