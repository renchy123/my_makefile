
.PHONY : clean 

GPATH := src
VPATH := src

CFLAGS := -I inc

app.out : func.o main.o
	@gcc -o $@ $^
	@echo "Target File => $@"

%.o : %.c func.h
	@gcc $(CFLAGS) -o $@ -c $<

clean :
	$(RM) *.o *out
