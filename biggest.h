#ifndef BIGGEST_H
#define BIGGEST_H
#define CNT 100
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/*�� ���� ������ ����� n, ������������ ����� ��� ���������*/
long long b_sum(const int* a, size_t n);
/*�� ���� ��������� ������ n*m, �� ����� - ������ ������ � ���������� ������*/
size_t b_maxsum_num(const int (*a)[CNT], size_t n, size_t m);
#endif // BIGGEST_H
