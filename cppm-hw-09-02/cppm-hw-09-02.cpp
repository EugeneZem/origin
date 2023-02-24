#include <iostream>
//#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction() {};
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	int commonDivisor()
	{
		int result = 1;
		int prime = 2;
		int min, num;

		if (numerator_ > denominator_)
		{
			min = denominator_;
			num = numerator_;
		}
		else
		{
			num = denominator_;
			min = numerator_;
		}

		do
		{
			if ((num % prime) == 0 && (min % prime) == 0)
			{
				num = num / prime;
				min = min / prime;
				result = result * prime;
			}
			else
			{
				++prime;
			}
		} while (prime <= min);
		return result;
	}

	friend std::ostream& operator << (std::ostream& ostream, Fraction& fract)
	{
		int commonDivisor = fract.commonDivisor();
		fract.numerator_ = fract.numerator_ / commonDivisor;
		fract.denominator_ = fract.denominator_ / commonDivisor;

		ostream << fract.numerator_ << "/" << fract.denominator_;
		return ostream;
	}

	Fraction operator+(Fraction& right)
	{
		int nDenominator_ = denominator_ * right.denominator_;
		int nNumerator_ = numerator_ * right.denominator_ + right.numerator_ * denominator_;
		return Fraction(nNumerator_, nDenominator_);
	}

	Fraction operator-(Fraction& right)
	{
		int nDenominator_ = denominator_ * right.denominator_;
		int nNumerator_ = numerator_ * right.denominator_ - right.numerator_ * denominator_;
		return Fraction(nNumerator_, nDenominator_);
	}

	Fraction operator*(Fraction& right)
	{
		int nDenominator_ = denominator_ * right.denominator_;
		int nNumerator_ = numerator_ * right.numerator_;
		return Fraction(nNumerator_, nDenominator_);
	}

	Fraction operator/(Fraction& right)
	{
		int nDenominator_ = denominator_ * right.numerator_;
		int nNumerator_ = numerator_ * right.denominator_;
		return Fraction(nNumerator_, nDenominator_);
	}

	Fraction& operator++()
	{
		numerator_ = numerator_ + denominator_;
		return *this;
	}

	Fraction operator++(int)
	{
		Fraction temp = *this;
		this->numerator_ = this->numerator_ + this->denominator_;
		return temp;
	}

	Fraction& operator--()
	{
		numerator_ = numerator_ - denominator_;
		return *this;
	}

	Fraction operator--(int)
	{
		Fraction temp = *this;
		this->numerator_ = this->numerator_ - this->denominator_;
		return temp;
	}

	Fraction& operator-()
	{
		numerator_ = -numerator_;
		return *this;
	}
};

int main()
{
	setlocale(LC_ALL, "ru-RU");
	system("chcp 1251");

	int numerrator, denominator;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> numerrator;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denominator;
	Fraction f1(numerrator, denominator);
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> numerrator;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denominator;
	Fraction f2(numerrator, denominator);

	Fraction f3 = f1 + f2;
	std::cout << f1 << " + " << f2 << " = " << f3 << std::endl;
	Fraction f4 = f1 - f2;
	std::cout << f1 << " - " << f2 << " = " << f4 << std::endl;
	Fraction f5 = f1 * f2;
	std::cout << f1 << " * " << f2 << " = " << f5 << std::endl;
	Fraction f6 = f1 / f2;
	std::cout << f1 << " / " << f2 << " = " << f6 << std::endl;

	std::cout << "++" << f1 << " * " << f2 << " = ";
	Fraction f7 = ++f1 * f2;
	std::cout << f7 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;

	std::cout << f1 << "-- * " << f2 << " = ";
	Fraction f8 = f1-- * f2;
	std::cout << f8 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;

	return 0;
}