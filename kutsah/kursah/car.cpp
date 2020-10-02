#include "car.h"
double Car::get_S() {
	return S;
}
double Car::get_time() {
	return time;
}
void Car::set_time(double time) {
	this->time = time;
}
void Car::set_S(double S) {
	this->S = S;
}
String^ Car::get_tarif() {
	String^ exit = tarif;
	return exit;
}
void Car::set_tarif(String^ tarif) {
	this->tarif = tarif;
}
void Car::set_pas(int pas) {
	this->pas = pas;
}
int Car::get_pas() {
	return pas;
}
double Car::bill(double time) {
	if (get_tarif() == "eco") {
		if (0<time) {
			X = 129 + 9 * (get_S() + get_time() - 8);
			return X;
		}
		else if (time==0){
			X = 129 + 9 * (get_S() + get_S()/46 - 8);
			return X;
		}
		else if (get_S() + get_time() == 8) {
			return 129;
		}
	}
	if (get_tarif() == "kom") {
		if (0<time) {
			X = 199 + 11 * (get_S() + get_time() - 5);
			return X;
		}
		else if (time==0){
			X = 199 + 11 * (get_S() + get_S() / 46 - 5);
			return X;
		}
		else if (get_S() + get_time() == 5) {
			return 199;
		}
	}
}