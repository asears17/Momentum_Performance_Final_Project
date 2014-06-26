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
   
    Workout w;
    Athlete  a;
    a.introduction();
    a.askForInformation();
    a.askForBSC();
    w.WorkoutPlan();
    
    
     /*string filename = "MomentumPerformance.txt.rtf";
    ofstream input;
    input.open("MomentumPerformance.txt.rtf");
    if(input.fail()){
        cout<< "cant open file" << endl;
        return 0;
    }
    
    cout << "file available" << endl;
    cout << "Enter a string " << endl;
    string string;
    cin >> string;
    input << string;*/
    
    /*for (int i =0; i<10; i++)
     input<< "line " << i << endl;*/
    
    
    /*input.close();
    
    ifstream fin;
    fin.open(filename);
    if(fin.fail())
    {
        cout << "can't read in file" << endl;
        return 0;
    }
    while (getline(fin, string)) {
        cout << "File has string, string name is: " << endl;
        cout << string << endl;
    }*/
    
    
    

    
}








