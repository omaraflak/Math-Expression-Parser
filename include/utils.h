#ifndef UTILS
#define UTILS

#include <string>
#include <sstream>
#include <algorithm>
#include <unordered_set>

static std::unordered_set<char> charInNumber = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', '-'};

void removeAllSpaces(std::string& str);
bool isNumber(const std::string& str);
double toNumber(const std::string& str);
std::string toString(double n);

#endif
