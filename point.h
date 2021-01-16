#ifndef _point_h
#define _point_h

class Point{

public:
  Point();
  Point(double x, double y, double z);
  
  Point operator + (Point);
  Point operator - (Point);
  Point operator * (double);
  
  double getx();
  double gety();
  double getz();
  
  double getNorm();

private:
  double xCoordinate;
  double yCoordinate;
  double zCoordinate; 
};

#endif
