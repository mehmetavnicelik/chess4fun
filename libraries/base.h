#pragma once
#include<iostream>

#define ROW 8
#define COL 8

using namespace std;

//#!TODO:	enumtype was just a temp solution to print the table,
//			pieces should be an object,not enumtype. 
 typedef enum{
	wpawn = 'P',
    bpawn = 'p',
	wrook = 'R',
	brook = 'r',
	wknight = 'K',
	bknight = 'k',
	wbishop = 'B',
	bbishop = 'b',
	wqueen = 'Q',
	bqueen = 'q',
    wking= 'E',
    bking= 'e',
	empty= ' '
}enumType;