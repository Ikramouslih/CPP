#pragma once
#include <iostream>
#include "robot.h"
using namespace std;

class robot_fix : public robot
{
private:
public:
	robot_fix(string nom, int vitesse, Go* ram);
	~robot_fix();
	void display()const override;

};

