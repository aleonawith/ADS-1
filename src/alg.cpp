// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value == 1) {
    return false;
  }
  for (int i = 2; i * i <= value; i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int count = 1, value = 0;
  if (n == 1) {
    return 2;
  }
  while (count <= n) {
    value++;
    if (checkPrime(value) == 1) {
      count++;
    }
  }
  return value;
}

uint64_t nextPrime(uint64_t value) {
  int value1 = value, c = 0;
  while (c == 0) {
    value1++;
    if (checkPrime(value1) == 1) {
      c++;
      return value1;
    }
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int i = 0; i < hbound; i++) {
    if (checkPrime(i) == 1) {
      sum += i;
    }
  }
  return sum;
}
