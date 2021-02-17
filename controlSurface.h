/*
 * Control Surface is a class inherited from main arduino servo functions;
 * Takes in angle and rotates the control surface to said angle (For controlSurfaces such as rudder elevator and so on)
 */

#ifndef controlSurface_h
#define controlSurface_h

# include <servo.h>

const unsigned int cs_min,cs_Max;

class controlSurface: public servo
{
    int pin;
    public:
        controlSurface (int pin);
        void turn (float angle);
};

# endif
