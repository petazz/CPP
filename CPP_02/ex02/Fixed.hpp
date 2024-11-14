#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class Fixed {
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);
		float toFloat() const;
		int toInt() const;
		Fixed &operator=(const Fixed &fixed);
		bool operator>(const Fixed &fixed);
		bool operator<(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator==(const Fixed &fixed);
		bool operator!=(const Fixed &fixed);
		Fixed &operator+(const Fixed &fixed);
		Fixed &operator-(const Fixed &fixed);
		Fixed &operator*(const Fixed &fixed);
		Fixed &operator/(const Fixed &fixed);
		
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream& out, const Fixed &fixed);

#endif