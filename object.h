#ifndef _object_h
#define _object_h

class Object{

public:
  Object();
  Object(double myMass, Point myPosition, Point myVelocity);

  double getMass();
  Point getPosition();
  Point getVelocity();
  Point getMomentum();

private:
  double mass;
  Point position;
  Point velocity;  
};
#endif
