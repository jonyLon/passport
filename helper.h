#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Date
{
	Date(const size_t& day, const size_t& month, const size_t& year) : day{ day }, month{ month }, year{ year } {}
	Date() : day{ 12 }, month{ 11 }, year{ 2027 } {}
	size_t day;
	size_t month;
	size_t year;
	string line = (day < 10 ? "0" + to_string(day) : to_string(day)) + "." + (month < 10 ? "0" + to_string(month) : to_string(month)) + "." + to_string(year);
	string recordLine = to_string(year) + (month < 10 ? "0" + to_string(month) : to_string(month)) + (day < 10 ? "0" + to_string(day) : to_string(day));
};
enum Sex
{
	male = 1, female = 2
};