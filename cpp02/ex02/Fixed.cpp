/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:08:19 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/25 12:15:12 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    _value = value << _bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _bits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
    std::cout << "Assignation operator called" << std::endl;
    _value = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

float Fixed::toFloat(void) const {
    return (float)_value / (1 << _bits);
}

int Fixed::toInt(void) const {
    return _value >> _bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}

Fixed Fixed::operator+(const Fixed &obj) {
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed &obj) {
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed &obj) {
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed &obj) {
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed Fixed::operator++() {
    _value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    ++(*this);
    return tmp;
}

Fixed Fixed::operator--() {
    _value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    --(*this);
    return tmp;
}

bool Fixed::operator>(const Fixed &obj) {
    return this->toFloat() > obj.toFloat();
}

bool Fixed::operator<(const Fixed &obj) {
    return this->toFloat() < obj.toFloat();
}

bool Fixed::operator>=(const Fixed &obj) {
    return this->toFloat() >= obj.toFloat();
}

bool Fixed::operator<=(const Fixed &obj) {
    return this->toFloat() <= obj.toFloat();
}

bool Fixed::operator==(const Fixed &obj) {
    return this->toFloat() == obj.toFloat();
}

bool Fixed::operator!=(const Fixed &obj) {
    return this->toFloat() != obj.toFloat();
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return a.getRawBits() > b.getRawBits() ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return a.getRawBits() < b.getRawBits() ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return a.getRawBits() > b.getRawBits() ? a : b;
}
