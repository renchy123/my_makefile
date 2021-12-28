# demo 1 jiandan fuzhi 
#x := foo
#y := $(x)b
#x := new

# demo 2 digui fuzhi 
#x = foo
#y = $(x)b
#x = new

# demo 3
#a = $(b)
#b = $(c)
#c = hello-world

# demo 4 tiaojian fuzhi
x := foo
y := $(x)b
x ?= new

# demo 5 zhuijia fuzhi
#x := foo
#y := $(x)b
#x += new
.PHONY : test

test : 
	@echo "x => $(x)"
	@echo "y => $(y)"
	@echo "a => $(a)"
	@echo "b => $(b)"
	@echo "c => $(c)"
