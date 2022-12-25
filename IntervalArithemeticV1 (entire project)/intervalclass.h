#include <iostream>
#include <algorithm>
using namespace std;

class interval{
public:
//float amax=3.1,amin=3.0,bmax=7,bmin=0;
float amax,amin,bmax,bmin;

public:
void intervalX  (float& a,float& b)
{
float amin,minfirst,amax,maxfirst;
cout<<"Please Input Value Interval minimum value:"<<endl;
cin>>minfirst;
cout<<"Please Input Value Interval maximum value:"<<endl;
cin>>maxfirst;
amax = a = maxfirst;
amin = b = minfirst;
cout<<"Interval:("<<amin<<"),("<<amax<<")"<<endl;


}

void intervalY (float& a)
{
float bmin = 0;
float bmax, maxsecond;
cout<<"Please Input Value for Single interval."<<endl;
cin>>maxsecond;
bmax = a = maxsecond;
cout<<"Interval:("<<bmin<<"),("<<bmax<<")"<<endl;

}


void intervalXYadd(float amax,float amin,float bmax,float bmin)
{
    float summax = amax+bmax;
    float summin = amin+bmin;
    cout<<"IntervalAdd       x+y :("<<summin<<") , ("<<summax<<")"<<endl;
}
void intervalXYsub(float amax,float amin,float bmax,float bmin)
{
    float subtractmax = amax-bmax;
    float subtractmin = amin-bmin;
    cout<<"IntervalSubtract  x-y :("<<subtractmin<<") , ("<<subtractmax<<")"<<endl;
}
void intervalXYmultiply(float amax,float amin,float bmax,float bmin)
{
    float multiplymin = min({amin*bmin, amin*bmax, amax*bmin, amax*bmax,});
    float multiplymax = max({amin*bmin, amin*bmax, amax*bmin, amax*bmax,});
    cout<<"IntervalMultiply  x*y :("<<multiplymin<<") , ("<<multiplymax<<")"<<endl;
}
void intervalXYdivide(float amax,float amin,float bmax,float bmin)
{
    float dividemin = min({amin/bmin, amin/bmax, amax/bmin, amax/bmax,});
    float dividemax = max({amin/bmin, amin/bmax, amax/bmin, amax/bmax,});
    cout<<"IntervalDivide    x/y :("<<dividemin<<") , ("<<dividemax<<")"<<endl;
}

void intervalP_addsA(float& amax,float& amin,int& a)
{
    cout<<"Please Input the Value of a"<<endl;
    cin>>a;
    amax= amax+a;
    amin= amin+a;
    cout<<"Value for intervalP(x) p+=a:("<<amin<<"),("<<amax<<")"<<endl;
}

void intervalG_addsF(float& amax,float& amin)
{
    float f=5;
    amax= amax+f;
    amin= amin+f;
    cout<<"Value for intervalg =   a+f:("<<amin<<"),("<<amax<<")"<<endl;
}
void intervalH_addsF(float& amax,float& amin, int& a)
{
    amax= amax+a;
    amin= amin+a;
    cout<<"Value for intervalh =   f+a:("<<amin<<"),("<<amax<<")"<<endl;
}

};

