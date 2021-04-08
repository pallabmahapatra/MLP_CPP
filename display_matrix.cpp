#include"header.h"

void MLP::display_irismatrix()
{
	unsigned int r,c;	

	cout<<"\n iris matrix \n";

	for(r=1;r<=ROW;r++)
	{
		for(c=1;c<=COL;c++)
		{
			cout<<irismatrix[r][c]<<"\t";
		}

		cout<<"\n";
	}
}

void MLP::display_hlmatrix()
{
	unsigned int r,c;	


	cout<<"\n hidden layer matrix \n";


	for(r=1;r<=4;r++)
	{
		for(c=1;c<=5;c++)
		{
			cout<<hlmatrix[r][c]<<"\t";
		}

		cout<<"\n";
	}
}


void MLP::display_oplmatrix()
{
	unsigned int r,c;	


	cout<<"\n oputput  layer matrix \n";


	for(r=1;r<=5;r++)
	{
		for(c=1;c<=3;c++)
		{
			cout<<oplmatrix[r][c]<<"\t";
		}

		cout<<"\n";
	}
}
