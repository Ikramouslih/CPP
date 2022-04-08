#pragma once
#include "robot.h"
using namespace std;

class robot_mobile : public robot
{
private:
	int nbr_roue;
	float position;
public:
	robot_mobile(string nom, int vitesse, Go* ram, int nr, float p);
	~robot_mobile();
	void display()const override;
};

