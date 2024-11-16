#ifndef Car_H
#define Car_H

#pragma once
#include <string>
using namespace std;

class Car{

private:
	int carid;
	string cartype;
	float carspeed;
	string carstatus;
	int hospitalnumber;
	int carbusytime;


private:
	Car(int cid,string ctp,float cs,string cstat,int hid,int cbt);
		void setid(int x);
	void setcartype(string y);
	void setcarspeed(float s);
	void setcarstatus(string cs);
	void sethospitalid(int hid);
	void setcarbusytime(int cbt);

	int getid();
	void getcartype();
	void getcarspeed();
	void getcarstatus();
	void gethospitalid();
	void getcarbusytime();










}