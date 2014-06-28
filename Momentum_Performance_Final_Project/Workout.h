//
//  Workout.h
//  Momentum_Performance_Final_Project
//
//  Created by Drew Sears on 6/25/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef __Momentum_Performance_Final_Project__Workout__
#define __Momentum_Performance_Final_Project__Workout__

#include <iostream>
#include <string>
#include "Athlete.h"
using namespace std;

class Workout{

private:
    Athlete a;

public:
    
    
    void WorkoutPlan();
    
    Workout();
    Workout(Athlete& newathlete);//CHANGE
   
    
};




#endif /* defined(__Momentum_Performance_Final_Project__Workout__) */
