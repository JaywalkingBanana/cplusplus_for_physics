#include<iostream>
#include<math.h>
#include"point.h"
#include"physics.h"
#include"object.h"

using namespace std;

int main(){
  double k_e = 1 / (4 * M_PI * Physics::epsilon_0);
  double sunMass = 1.989 * pow(10, 30);
  double earthMass = 5.9722 * pow(10, 24);
  Point sunPosition, sunVelocity;
  Point earthPosition(0.0, 147.14 * pow(10, 9), 0.0), earthVelocity(-29.78 * pow(10, 3), 0.0, 0.0);
  Object Sun(sunMass, sunPosition, sunVelocity); 
  Object Earth(earthMass, earthPosition, earthVelocity);
  Point 
  
  return 0;
}
