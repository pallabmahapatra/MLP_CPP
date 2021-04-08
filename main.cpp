#include"header.h"
#include<new>
#include<stdlib.h>
int main()
{
	MLP *obj;		//pointer to MLP class object

	try
	{
		obj=new MLP;
	}catch (bad_alloc xa)
	{

		
		cout<<"\n in-sufficient memory \n";
		exit(0);
	}

	
	
	obj->load_iris_matrix();
	obj->load_hl_matrix();
	//obj->load_opl_matrix();

	obj->display_irismatrix();
	obj->display_hlmatrix();
	//obj->display_oplmatrix();

	
	delete obj;	
	
	

	cout<<endl;
	return 0;
}
