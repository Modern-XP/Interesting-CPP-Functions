#pragma once

#include <math.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <map>
#include <unordered_map>
#include <string>

/* IO Stream */
#define sCout std::cout
#define sEndl std::endl
/* F Stream*/
#define sIFStream std::ifstream
#define sOFStream std::ofstream
#define sFStream  std::fstream
/* IOS */
#define sOut   std::ios::out
#define sIn    std::ios::in
#define sBin   std::ios::binary
#define sAte   std::ios::ate
#define sApp   std::ios::app
#define sTrunc std::ios::trunc
/* Vector */
#define sVector std::vector
/* Maps */
#define sMap   std::map
#define sU_Map std::unordered_map
/* Math */
#define sCeil std::ceil
#define sSqrt std::sqrt
#define sPowf std::powf
#define sPowl std::powl
/* String */
#define sStr std::string
#define sToS std::to_string

sMap<uint32_t, uint32_t> GetPrimeFactors(int);
sStr HuffThis(sStr);

template <typename T>
sStr NumToHex(T Num);
