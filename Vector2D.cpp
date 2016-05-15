#include "Vector2D.h"
#include <math.h>

Vector2D::Vector2D() {
  m_x = 0;
  m_y = 0;
}

Vector2D::Vector2D(float x, float y) {
  m_x = x;
  m_y = y;
}

float Vector2D::getX() {
  return m_x;
}

float Vector2D::getY() {
  return m_y;
}

float Vector2D::setX(float x) {
  return m_x = x;
}

float Vector2D::setY(float y) {
  return m_y = y;
}

float Vector2D::length() {
  return sqrt(m_x * m_x + m_y * m_y);
}

void Vector2D::normalize() {
  float l = length();
  // division by 0 not allowed
  if (l > 0) {
    m_x = m_x * 1/l;
    m_y = m_y * 1/l;
  }
}

Vector2D Vector2D::operator+(const Vector2D& v2) {
  return Vector2D(m_x + v2.m_x, m_y + v2.m_y);
}

Vector2D Vector2D::operator-(const Vector2D& v2) {
  return Vector2D(m_x - v2.m_x, m_y - v2.m_y);
}

Vector2D Vector2D::operator*(float scalar) {
  return Vector2D(m_x * scalar, m_y * scalar);
}

Vector2D Vector2D::operator/(float scalar) {
  return Vector2D(m_x / scalar, m_y / scalar);
}
