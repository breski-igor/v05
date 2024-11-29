#pragma once
#include <string>
#include <memory>

#define APP_H


namespace vsite::oop::v5 
{
	double operator"" _inch(unsigned long long i);
	double operator"" _eur(unsigned long long e);

	class tire {
		double d;
	public:
		tire(double r) : d(r) {};
		double diameter();
	};

	class vehicle {
		int y;
	public:
		vehicle(int n) : y(n) {};
		int year();
	};

	class product {
		double eur;
	public:
		product(double eur) : eur(eur) {};
		double price();
	};

	class car : public vehicle, public product {
		tire t;
	public:
		car(int y, double eur, double d) : vehicle(y), product(eur), t(d) {};
		double tire_diameter();

	};
}