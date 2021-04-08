#include"header.h"
#include<fstream>

void MLP::load_iris_matrix()
{
	unsigned int r,c;

	ifstream irisfile;

	irisfile.open("/home/pallab/iter/multilayerperceptron/data/irisdata.txt",ios::in);

	if(!(irisfile.is_open()))
	{
		cout<<"\n file did not open !!!\n";

		
	}

	for(r=1;r<=ROW;r++)
	{
		for(c=1;c<=COL;c++)
		{
			irisfile>>irismatrix[r][c];
		}
	}
}

//-----------------------------------------------------------


void MLP::load_hl_matrix()
{
	

	unsigned int r,c;

	ifstream hlfile;

	hlfile.open("/home/pallab/iter/multilayerperceptron/data/irisdata.txt",ios::in);

	if(!(hlfile.is_open()))
	{
		cout<<"\n hidden layer file did not open !!!\n";

		
	}

	for(r=1;r<=4;r++)
	{
		for(c=1;c<=5;c++)
		{
			hlfile>>hlmatrix[r][c];
		}
	}







}
void MLP::load_opl_matrix()
{
	
	unsigned int r,c;

	ifstream oplfile;

	oplfile.open("/home/pallab/iter/multilayerperceptron/data/irisdata.txt",ios::in);

	if(!(oplfile.is_open()))
	{
		cout<<"\n output layer file did not open !!!\n";

		
	}

	for(r=1;r<=5;r++)
	{
		for(c=1;c<=3;c++)
		{
			oplfile>>oplmatrix[r][c];
		}
	}




}

