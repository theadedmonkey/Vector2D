#include <stdio.h>
#include "Vector2D.h"

int main( int argc, char* args[] ) {

  Vector2D v1;
  Vector2D v2;
  Vector2D v3;

  // vectors
  printf("vectors: \n");
  v1 = Vector2D(3, 4);
  v2 = Vector2D(5, 7);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v2: %F %F\n", v2.x, v2.y);

  // zero
  printf("zero: \n");
  v1 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  v1.zero();
  printf("v1.zero(): %F %F\n", v1.x, v1.y);

  // equality
  printf("equality: \n");
  v1 = Vector2D(3, 4);
  v2 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v2: %F %F\n", v2.x, v2.y);
  printf("v1 == v2 %s\n", v1 == v2 ? "true" : "false");
  printf("v1 != v2 %s\n", v1 != v2 ? "true" : "false");

  // negative
  printf("negative: \n");
  v1 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  v1 = -v1;
  printf("-v1: %F %F\n", v1.x, v1.y);

  // binary addition
  printf("binary addition: \n");
  v1 = Vector2D(3, 4);
  v2 = Vector2D(5, 7);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v2: %F %F\n", v2.x, v2.y);
  v3 = v1 + v2;
  printf("v1 + v2: %F %F\n", v3.x, v3.y);

  // binary addition
  printf("binary subtraction: \n");
  v1 = Vector2D(3, 4);
  v2 = Vector2D(5, 7);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v2: %F %F\n", v2.x, v2.y);
  v3 = v1 - v2;
  printf("v1 - v2: %F %F\n", v3.x, v3.y);

  // scalar multiplication
  printf("scalar multiplication: \n");
  v1 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  v3 = v1 * 10;
  printf("v1 * 10: %F %F\n", v3.x, v3.y);

  // scalar multiplication
  printf("scalar division: \n");
  v1 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  v3 = v1 / 2;
  printf("v1 / 2: %F %F\n", v3.x, v3.y);

  // combined addition
  printf("combined addition: \n");
  v1 = Vector2D(3, 4);
  v2 = Vector2D(5, 7);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v2: %F %F\n", v2.x, v2.y);
  v1 += v2;
  printf("v1 += v2: %F %F\n", v1.x, v1.y);

  // combined subtraction
  printf("combined subtraction: \n");
  v1 = Vector2D(3, 4);
  v2 = Vector2D(5, 7);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v2: %F %F\n", v2.x, v2.y);
  v1 -= v2;
  printf("v1 -= v2: %F %F\n", v1.x, v1.y);

  // combined multiplication
  printf("combined scalar multiplication: \n");
  v1 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  v1 *= 10;
  printf("v1 *= 10: %F %F\n", v1.x, v1.y);

  // combined division
  printf("combined scalar division: \n");
  v1 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  v1 /= 2;
  printf("v1 /= 2: %F %F\n", v1.x, v1.y);

  // dot product
  printf("dot product: \n");
  v1 = Vector2D(3, 4);
  v2 = Vector2D(5, 7);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v2: %F %F\n", v2.x, v2.y);
  printf("v1 * v2: %F\n", v1 * v2);

  // normalize
  printf("normalize: \n");
  v1 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  v1.normalize();
  printf("v1.normalize(): %F %F\n", v1.x, v1.y);

  // magnitude
  printf("magnitude: \n");
  v1 = Vector2D(3, 4);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v1.magnitude(): %F\n",   v1.magnitude());

  // distance
  printf("distance: \n");
  v1 = Vector2D(3, 4);
  v2 = Vector2D(5, 7);
  printf("v1: %F %F\n", v1.x, v1.y);
  printf("v2: %F %F\n", v2.x, v2.y);
  printf("v1.distance(v2): %F\n", v1.distance(v2));

}
