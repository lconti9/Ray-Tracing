#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray
{
public:
    point3 orig; // Ray origin point
    vec3 dir;    // Ray direction vector
public:
    // Ray Constructor
    ray() {}
    ray(const point3 &origin, const vec3 &direction)
        : orig(origin), dir(direction)
    {
    }

    // Return origin
    point3 origin() const { return orig; }
    // Return direction
    vec3 direction() const { return dir; }

    // Returns ray at a t-value
    point3 at(double t) const
    {
        return orig + t * dir;
    }
};

#endif