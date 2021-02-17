/*
 * Control Surface implementation file
 */

#include <Servo.h>
#include "controlSurface.h"
/*
const unsigned int cs_Min = 544;
const unsigned int cs_Max = 2400;
*/
# define cs_Min 544
#define cs_Max = 2400

controlSurface::controlSurface(int Pin) 
{
    this.attach (Pin,cs_Min,cs_Max)
};

void turn (float angle)
{
    this.write (angle);
}
