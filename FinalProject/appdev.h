#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define N 20
//added from VS
// modified from github
typedef struct {
	int max;
	int min;
	char rname[N];
}rock;

//function prototypes
void send_data(rock);
