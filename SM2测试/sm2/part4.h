#ifndef PART4_H
#define PART4_H

#include "sm2.h"

void test_part4(char **sm2_param, int type, int point_bit_length);

void sm2JiaMi(char **sm2_param, int type, int point_bit_length , char *mingwen,char *miwen);

void sm2Jiemi(char **sm2_param, int type, int point_bit_length , char *miwen, char *output);

#endif;
