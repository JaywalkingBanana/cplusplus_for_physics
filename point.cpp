#include<iostream>
#include<math.h>
#include"point.h"

using namespace std;

Point::Point(){
  xCoordinate = 0;
  yCoordinate = 0;
  zCoordinate = 0;
}

Point::Point(double x, double y, double z){
  xCoordinate = x;
  yCoordinate = y;
  zCoordinate = z;
}


Point Point::operator+ (Point myPoint){
  double tempx = myPoint.getx();
  double tempy = myPoint.gety();
  double tempz = myPoint.getz();
  Point tempPoint(xCoordinate + tempx, yCoordinate + tempy, zCoordinate + tempz);
  return tempPoint;
}

Point Point::operator- (Point myPoint){
  double tempx = myPoint.getx();
  double tempy = myPoint.gety();
  double tempz = myPoint.getz();
  Point tempPoint(xCoordinate - tempx, yCoordinate - tempy, zCoordinate - tempz);
  return tempPoint;
}

Point Point::operator* (double real_number){
  Point tempPoint(real_number * xCoordinate, real_number * yCoordinate, real_number * zCoordinate);
  return tempPoint;
}

double Point::getx(){
  return xCoordinate;
}
double Point::gety(){
  return yCoordinate;
}
double Point::getz(){
  return zCoordinate;
}

double Point::getNorm(){
  return sqrt(xCoordinate * xCoordinate + yCoordinate * yCoordinate + zCoordinate * zCoordinate);
}
