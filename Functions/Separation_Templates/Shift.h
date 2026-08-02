#pragma once
#include"Constants.h"

template<typename T> void ShiftRight(T arr[], const int n, int num);
template<typename T> void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int num);
template<typename T> void ShiftRightCols(T arr[ROWS][COLS], const int ROWS, const int COLS, int num);
template<typename T> void ShiftLeft(T arr[], const int n, int num);
template<typename T> void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int num);
template<typename T> void ShiftLeftCols(T arr[ROWS][COLS], const int ROWS, const int COLS, int num);
