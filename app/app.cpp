#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	double operator"" _inch(unsigned long long i) {
		return i * 2.54;
	}

	double operator"" _eur(unsigned long long e) {
		return e * 7.5345;
	}

	double tire::diameter() {
		return d;
	}

	int vehicle :: year() {
		return y;
	}

	double product::price() {
		return eur;
	}

	double car::tire_diameter() {
		return t.diameter();
	}
}