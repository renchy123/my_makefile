hm := hello makefile

override var :=  override-test

define foo
I 'm foo !
endef

override define cmd
	@echo "rum cmd ls ..."
	@ls -alh 
endef

test :
	@echo "hm => $(hm)"
	@echo "var => $(var)"
	@echo "foo => $(foo)"
	${cmd}
