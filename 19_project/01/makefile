.PHONY : all clean

DIR_BUILD := build
DIR_SRC :=  src
DIR_INC := inc

CC :=  gcc

CFLAGS := -I $(DIR_INC)

MKDIR := mkdir
RM := rm -rf

APP := $(DIR_BUILD)/app.out
HDRS := $(wildcard $(DIR_INC)/*.h)
HDRS := $(notdir $(HDRS))
OBJS := $(wildcard $(DIR_SRC)/*.c)
OBJS := $(OBJS:.c=.o)
OBJS := $(patsubst $(DIR_SRC)%, $(DIR_BUILD)%, $(OBJS))

vpath %.h $(DIR_INC)
vpath %.c $(DIR_SRC)

all : $(DIR_BUILD) $(APP)
	@echo "Target File => $(APP)"

$(DIR_BUILD) :
	$(MKDIR) $@

$(APP) : $(OBJS)
	$(CC) -o $@ $^

$(DIR_BUILD)/%.o : %.c $(HDRS)
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	$(RM) $(DIR_BUILD)
