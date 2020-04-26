project_2048: project_2048.o init_array.o array_print.o move_array.o
	gcc init_array.o array_print.o move_array.o project_2048.o -o project_2048
	
project_2048.o: project_2048.c array_print.h move_array.h init_array.h
	gcc -c project_2048.c

init_array.o: init_array.c init_array.h
	gcc -c init_array.c

array_print.o: array_print.c array_print.h
	gcc -c array_print.c

move_array.o: move_array.c move_array.h
	gcc -c move_array.c



.PHONY : clean
clean :
	-rm -rf *.o 
	-rm project_2048