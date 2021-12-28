
.PHONY : all clean
	
MKDIR := mkdir
RM :=  rm -rf
CC := gcc

SRCS :=  $(wildcard *.c)
DEPS :=  $(SRCS:.c=.dep )

-include $(DEPS)

all :
	@echo "all"

%.dep : %.c
	@echo "creating $@ ..."
	@set -e; \
	$(CC) -MM -E $^ | sed 's,\(.*\)\.o[ :]*,objs/\1.o : ,g' > $@

clean :
	$(RM) $(DEPS)
