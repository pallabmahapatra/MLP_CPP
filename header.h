#ifndef __header_h__
#define __header_h__
#pragma once

#include<iostream>

#define ROW 120
#define COL 5

using namespace std;

class MLP
{
	double irismatrix[ROW][COL];
	
	double hlmatrix[4][5];
	
	double oplmatrix[5][3];

	
public:


	void load_iris_matrix(void);
	void load_hl_matrix(void);
	void load_opl_matrix(void);


	void display_irismatrix(void);
	void display_hlmatrix(void);
	void display_oplmatrix(void);
	
	void normalize(void);
	void outputmatrix(void);
	void activated_matrix(void);
	
};


#endif
