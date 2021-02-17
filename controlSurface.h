/*
 * Control Surface is a class inherited from main arduino servo functions;
 * Takes in angle and rotates the control surface to said angle (For controlSurfaces such as rudder elevator and so on)
 */

#ifndef controlSurface_h
#define controlSurface_h

# include <Servo.h>

//const unsigned int cs_min,cs_Max;

class controlSurface: public Servo
{
/*
 * Works directly with arduino pins
 * takes in pin no and instantiates servo object
 */
//    int pin;
    static const int cs_Min{544},cs_Max{2400};
    public:
        controlSurface (int pin);
        void turn (float angle); //takes angles in degree and rotates said servo mechanism
};

# endif
