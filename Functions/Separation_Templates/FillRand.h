#pragma once
#include"Header.h"
#include"Constants.h"

template<typename T> void FillRand(T arr[], const int n);
template<typename T> void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> void FillRand(char arr[], const int n, int min, int max);
