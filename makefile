all:mlp

mlp:main.o display_matrix.o load_all_matrix.o objdelete.o
	g++ -o mlp main.o display_matrix.o load_all_matrix.o 


main.o:main.cpp header.h
	g++ -c main.cpp

display_matrix.o:display_matrix.cpp header.h
	g++ -c display_matrix.cpp

load_all_matrix.o:load_all_matrix.cpp header.h
	g++ -c load_all_matrix.cpp