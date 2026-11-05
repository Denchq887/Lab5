// Vector3DLib.cpp
// Реалізація класу vector3D для статичної бібліотеки Vector3DLib
#include "Vector3DLib.h"
#include <iostream>
#include <cmath>

namespace Vector3DLib
{
    vector3D::vector3D() : x(0), y(0), z(0) {}

    vector3D::vector3D(double x1, double y1, double z1) : x(x1), y(y1), z(z1) {}

    vector3D::vector3D(const vector3D& v) : x(v.x), y(v.y), z(v.z) {}

    void vector3D::print() const
    {
        std::cout << "(" << x << ", " << y << ", " << z << ")";
    }

    vector3D vector3D::operator+(const vector3D& v) const
    {
        return vector3D(x + v.x, y + v.y, z + v.z);
    }

    vector3D vector3D::operator-(const vector3D& v) const
    {
        return vector3D(x - v.x, y - v.y, z - v.z);
    }

    double vector3D::operator*(const vector3D& v) const
    {
        return x * v.x + y * v.y + z * v.z;
    }

    vector3D vector3D::operator*(double k) const
    {
        return vector3D(x * k, y * k, z * k);
    }

    bool vector3D::operator==(const vector3D& v) const
    {
        return x == v.x && y == v.y && z == v.z;
    }

    bool vector3D::operator!=(const vector3D& v) const
    {
        return !(*this == v);
    }

    double vector3D::length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    bool vector3D::operator>(const vector3D& v) const  { return length() >  v.length(); }
    bool vector3D::operator<(const vector3D& v) const  { return length() <  v.length(); }
    bool vector3D::operator>=(const vector3D& v) const { return length() >= v.length(); }
    bool vector3D::operator<=(const vector3D& v) const { return length() <= v.length(); }

    vector3D operator*(double k, const vector3D& v)
    {
        return v * k;
    }
}
