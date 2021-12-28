all : test another rule

var := renchy
new := hello

test : var := test var
%e : new :=  test-new

test :
	@echo "------test------ :"
	@echo "var => $(var)"
	@echo "new => $(new)"

another :
	@echo "------another------ :"
	@echo "var => $(var)"
	@echo "new => $(new)"
	
rule :
	@echo "-------rule-------- :"
	@echo "var => $(var)"
	@echo "new => $(new)"
