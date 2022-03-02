#Makefile

system: system.c #compile these files using "M-x compile" then "make system"
	gcc -o system system.c -I.
run: #run these files using "M-x compile" then "make run"
	./system
