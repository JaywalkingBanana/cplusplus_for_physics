#include<iostream>
#include<math.h>
#include"point.h"
#include"physics.h"
#include"object.h"

using namespace std;

Object::Object(){
  Point pos;
  Point vel;
  mass = 0.0;
  position = pos;
  velocity = vel;  
}

Object::Object(double myMass, Point myPosition, Point myVelocity){
  mass = myMass;
  position = myPosition;
  velocity = myVelocity;  
}

double Object::getMass(){
  return mass;
}

Point Object::getPosition(){
  return position;
}

Point Object::getVelocity(){
  return velocity;
}

Point Object::getMomentum(){
  return velocity * mass;
}
