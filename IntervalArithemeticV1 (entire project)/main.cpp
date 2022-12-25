#include <iostream>
#include <algorithm>
#include "intervalclass.h"
using namespace std;


int main()
{
float amax,amin,bmax,bmin;
int a;

interval obj;

obj.intervalX(amax,amin); //interval x(3.0,3.1)

obj.intervalY(bmax);      //interval y(7)

obj.intervalXYadd(amax,amin,bmax,bmin);      //interval a=x+y

obj.intervalXYsub(amax,amin,bmax,bmin);      //interval b=x-y

obj.intervalXYmultiply(amax,amin,bmax,bmin); //interval c=x*y

obj.intervalXYdivide(amax,amin,bmax,bmin);   //interval d=x/y

obj.intervalP_addsA(amax,amin,a);            //interval p(x) p+=a

obj.intervalG_addsF(amax,amin);              //interval g=a+f

obj.intervalH_addsF(amax,amin,a);            //interval h=f+a

    return 0;
}
