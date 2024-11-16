#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(int cid, string ctp, float cs, string cstat, int hid, int cbt) 
{
	carid = cid;
	cartype = ctp;
	carstatus = cs;
	carstatus = cstat;
	hospitalnumber = hid;
	carbusytime = cbt;
}