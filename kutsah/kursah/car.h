#pragma once
//#include "String"
using namespace System;
public ref class Car {
	
public:
	double S;
	double X;
	int pas;
	double time=0;
	String^ tarif;
	double get_S();
	void set_S(double S);
	String^ get_tarif();
	void set_tarif(String^ tarif);
	double bill(double time);
	double get_time();
	void set_time(double time);
	void set_pas(int pas);
	int get_pas();
};