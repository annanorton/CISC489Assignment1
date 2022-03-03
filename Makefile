#Makefile

s: system.c #compile these files using "M-x compile" then "make system"
	gcc -o system  system.c -I.
r: #run these files using "M-x compile" then "make run"
	./system
c:
	$(RM) system
