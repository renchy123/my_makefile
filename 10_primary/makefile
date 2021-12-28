
CC := gcc
MKDIR := mkdir
RM := rm -rf

DIR_SRC := src
DIR_OBJS :=  objs
DIR_TARGET := target

DIRS := $(DIR_OBJS) $(DIR_TARGET) 

TARGET := $(DIR_TARGET)/hello.out

# main.c  const.c func.c 
SRCS := $(wildcard $(DIR_SRC)/*.c)
SRCS := $(notdir $(SRCS))

# main.o  const.o  func.o
# 模式匹配不要有空格
OBJS := $(SRCS:.c=.o)

# objs/main.o  objs/const.o  objs/func.o
OBJS := $(addprefix $(DIR_OBJS)/, $(OBJS))

.PHONY : rebuild clean all

$(TARGET) : $(DIRS) $(OBJS)
	$(CC) -o $@ $(OBJS) 
	@echo "Target File ===> $@"

$(DIRS) :
	@$(MKDIR) $@

$(DIR_OBJS)/%.o : $(DIR_SRC)/%.c
    ifeq ($(DEBUG),ture)
	$(CC) -o $@ -g -c $^
    else
	$(CC) -o $@ -c $^
    endif
	

rebuild : clean all

all : $(TARGET)

clean :
	$(RM) $(DIRS)
