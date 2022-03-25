#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>

using std::sqrt;

// Three dimensional vector class
class vec3
{
public:
    double e[3]; // X,Y,Z Array

public:
    // Base Constructor
    vec3() : e{0, 0, 0} {}
    // Constructor with inputs
    vec3(double e0, double e1, double e2) : e{e0, e1, e2} {}

    // Individual element access function
    double x() const { return e[0]; }
    double y() const { return e[1]; }
    double z() const { return e[2]; }

    // Negate operator
    vec3 operator-() const { return vec3(-e[0], -e[1], -e[2]); }

    // Element access operator
    double operator[](int i) const { return e[i]; }
    double &operator[](int i) { return e[i]; }

    // Addition assignment operator
    vec3 &operator+=(const vec3 &v)
    {
        e[0] += v.e[0];
        e[1] += v.e[1];
        e[2] += v.e[2];
    }

    // Multiplication assignment operator
    vec3 &operator*=(const double t)
    {
        e[0] *= t;
        e[1] *= t;
        e[2] *= t;
    }

    // Division assignment operator
    vec3 &operator/=(const double t)
    {
        return *this *= 1 / t;
    }

    // Returns length of vector
    double length() const
    {
        return sqrt(length_squared());
    }

    // Returns squared length of vector
    double length_squared() const
    {
        return e[0] * e[0] + e[1] * e[1] + e[2] * e[2];
    }
};

using point3 = vec3; // 3D point
using color = vec3;  // RGB color

#endif