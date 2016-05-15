#include <stdio.h>
#include "Vector2D.h"

int main( int argc, char* args[] ) {

  Vector2D v1 = Vector2D(3, 4);
  Vector2D v2 = Vector2D(5, 7);
  Vector2D v3 = Vector2D();


  printf("v1: %F %F\n", v1.getX(), v1.getY());
  printf("v2: %F %F\n", v2.getX(), v2.getY());
  printf("v1 length: %F\n", v1.length());
  printf("v2 length: %F\n", v2.length());

  v3 = v1 + v2;
  v3.normalize();
  printf("v1 + v2 normalize: %F %F\n", v3.getX(), v3.getY());

  v3 = v1 + v2;
  printf("v1 + v2: %F %F\n", v3.getX(), v3.getY());

  v3 = v2 - v1;
  printf("v2 - v1: %F %F\n", v3.getX(), v3.getY());

  v3 = v1 * 10;
  printf("v1 * 10: %F %F\n", v3.getX(), v3.getY());

  v3 = v1 / 2;
  printf("v1 / 2: %F %F\n", v3.getX(), v3.getY());

}
