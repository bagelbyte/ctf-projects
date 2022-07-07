CC=gcc
CFLAGS=-I.
DEPS =
OBJ = vuln_todo.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

vuln_todo: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)