/* Kata Description
To introduce the problem think to my neighbor who drives a tanker truck. The level indicator is down and he is worried because he does not know if he will be able to make deliveries. We put the truck on a horizontal ground and measured the height of the liquid in the tank.

Fortunately the tank is a perfect cylinder and the vertical walls on each end are flat. The height of the remaining liquid is h, the diameter of the cylinder is d, the total volume is vt (h, d, vt are positive or null integers). You can assume that h <= d.

Could you calculate the remaining volume of the liquid? Your function tankvol(h, d, vt) returns an integer which is the truncated result (e.g floor) of your float calculation.
*/
#include <math.h>

class VolTank
{
public:
    static int tankVol(int h, int d, int vt);

};

int VolTank::tankVol(int h, int d, int vt)
{
  float r = (float)d/2;
  float l = vt / ( M_PI * pow(r,2));
  float vol = l*(pow(r,2)*acos(((r - h)/r))-(r-h)*sqrt(2*r*h - pow(h,2) )  );
  return vol;
}
