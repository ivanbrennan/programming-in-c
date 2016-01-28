SRC = prog.15.mod1.c prog.15.mod2.c prog.15.main.c
OBJ = prog.15.mod1.o prog.15.mod2.o prog.15.main.o
PROG = dbtest

$(PROG): $(OBJ)
	gcc $(OBJ) -o $(PROG)

$(OBJ): $(SRC)
