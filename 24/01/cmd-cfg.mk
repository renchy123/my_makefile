
AR := ar
ARFLAGS := crs

CC := gcc
CFLAGS := -I$(DIR_INC) -I$(DIR_COMMON_INC) -I$(DIR_LIBS_INC)
LFLAGS := 

ifeq ($(DEBUG),true)
CFLAGS += -G
endif

MKDIR := mkdir 
RM := rm -rf
CP := cp -r
