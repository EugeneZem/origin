#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	float realNumb() { return numerator_ / denominator_; }

	bool operator == (Fraction over) { return realNumb() == over.realNumb(); }
	bool operator != (Fraction over) { return !(*this == over); }
	bool operator > (Fraction over) { return realNumb() > over.realNumb(); }
	bool operator < (Fraction over) { return realNumb() < over.realNumb(); }
	bool operator <= (Fraction over) { return !(*this > over); }
	bool operator >= (Fraction over) { return !(*this < over); }
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}