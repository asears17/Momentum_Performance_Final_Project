//
//  Workout.cpp
//  Momentum_Performance_Final_Project
//
//  Created by Drew Sears on 6/25/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include "Workout.h"


Workout ::Workout()//STAYED THE SAME
{
    Athlete a;
    a.age = 0;
    a.height= 0;
    a.weight = 0;
    a.bench = 0;
    a.squat = 0;
    a.clean = 0;
        
    
}

Workout ::Workout(Athlete& newathlete)//CHANGE
{
    a= newathlete;
}



void Workout:: WorkoutPlan()//outputs workoutplan with name, age, height... at the top of plan
{
    cout << "\n\n\nHere is a workout plan based on the numbers you gave the program.\n\n";
    a.getName();
    a.getAge();
    cout << "\n\n";
    a.getHeight();
    a.getWeight();
    cout << "\n\n";
    a.getBench();
    a.getSquat();
    a.getClean();
    
    cout << "One Arm DB Press " << "8x   " << "   8x" << "   8x\n\n\n" << endl;//outputs the workout
    cout << "RDL " << "10x" << "10x   " << "   10x\n\n\n" << endl;
    cout << "DB Hang Clean " << "8x   " << "8x   " << "   8x\n\n\n" << endl;
    cout << "Lying Tricep Extension " << "10x   " << "   10x" << "   10x\n\n\n" << endl;
    cout << "DB Split Squat " << "8x   " << "   8x" << "   8x\n\n\n" << endl;
}


