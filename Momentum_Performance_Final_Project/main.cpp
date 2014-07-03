//
//  main.cpp
//  Momentum_Performance_Final_Project
//
//  Created by Drew Sears on 6/25/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Athlete.h"
#include "Workout.h"
using namespace std;

int main()
{
   
    
    Athlete  a;//redifines athlete class to "a"
    
    a.introduction();//Introduction function
    a.askForInformation();//asks user for info funtion
    a.askForBSC();//asks user for BSC (bench squat clean) function
    Workout w(a);//redifines workout class to "w"//CHANGE
    w.WorkoutPlan();//outputs workout plan
    
    
   string filename = "MomentumPerformance.txt.rtf";
    ofstream input;
    input.open(filename);
    if(input.fail()){
        cout<< "cant open file" << endl;
        return 0;
    }
    
    cout << "file available" << endl;
    
    string line = Workout::WorkoutPlan();//trying to input the workout plan into string
    
    
    input << line;//call string to file
    
    
    input.close();//close file
    
    ifstream fin;//open file
    fin.open(filename);
    if(fin.fail())
    {
        cout << "can't read in file" << endl;
        return 0;
    }
    while (getline(fin, line)) {
        cout << "This is your workout: " << endl;//call file and print out whats in file.
        cout << line << endl;
    }
    
    
    

    
}








