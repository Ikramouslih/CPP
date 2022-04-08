#include <iostream>
#include <vector>
#include "robot.h"
#include "robot_fix.h"
#include "robot_mobile.h"
#include "Go.h"

using namespace std;
int main()
{
    Go go1(300);
    Go go2(100);
    robot* R1 = new robot("R1", 10, &go1);
    robot_fix* RF1 = new robot_fix("RF1", 20, &go1);
    robot_mobile* RM1 = new robot_mobile("RM1", 30, &go2, 4, 12.52);

    robot* R2 = new robot("R2", 10, &go1);
    robot_fix* RF2 = new robot_fix("RF2", 20, &go2);
    robot_mobile* RM2 = new robot_mobile("RM2", 30, &go2, 4, 12.52);
    vector<robot*> list_robot;
    
    R1->connecter();
    RF1->connecter();
    RM1->connecter();

    cout << endl;
    cout << endl;

    R1->display();    
    cout << endl;
    RF1->display();    
    cout << endl;
    RM1->display();    
    cout << endl;

    cout << endl;
    cout << endl;

    list_robot.push_back(R1);
    list_robot.push_back(RM1);
    list_robot.push_back(RF1);
    list_robot.push_back(R2);
    list_robot.push_back(RF2);
    list_robot.push_back(RM2);

    cout << "Les robots dont la RAM est superieur à 200 GO : " << endl;
    for (int i = 0; i < list_robot.size(); i++)
    {
        if (list_robot[i]->sup200()) 
            list_robot[i]->display();

    }


}


/*include<iostream>
using namespace std;
class Server {
public: void show() { cout << " In Server"; }
};
class Server_ST : public Server {
int x;
public: Server_ST() { x = 10; }
public: void fun() { cout << x; }
public: void show() { cout << " In Server ST"; }
public: virtual void vert()const = 0;
};
int main() {
    Server* bp;
    Server b;
    Server_ST d;//can't create an object with an abstaite class
    bp = &d;//no polymorphisme
    bp->show();
    cout << bp->fun();//bp belongs to server class where there's no method fun
    return 0;
}
*/