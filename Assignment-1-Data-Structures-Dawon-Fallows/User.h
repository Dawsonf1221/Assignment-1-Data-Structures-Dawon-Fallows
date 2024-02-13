#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAXNAME 10
#define MAXLEVEL 60
#define MINLEVEL 1
#define factionRed 101
#define factionBlue 102
#define factionGreen 103

typedef struct user {

	char userName[MAXNAME];
	int userLevel;
	int userFaction;

}USER;