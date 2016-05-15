#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D {
  private:
    float m_x;
    float m_y;
  public:
    Vector2D();
    Vector2D(float x, float y);

    float getX();
    float getY();

    float setX(float x);
    float setY(float y);

    float length();
    void normalize();

    Vector2D operator+(const Vector2D& v2);
    Vector2D operator+=(const Vector2D& v2);

    Vector2D operator-(const Vector2D& v2);
    Vector2D operator-=(const Vector2D& v2);

    Vector2D operator*(float scalar);
    Vector2D operator*=(float scalar);

    Vector2D operator/(float scalar);
    Vector2D operator/=(float scalar);
};

#endif
