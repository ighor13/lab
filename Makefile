MODULES = 1 2 3 4 5 6
all:
	for dir in $(MODULES); do \
		(cd $$dir; ${MAKE} all); \
	done
clean:
	for dir in $(MODULES); do \
		(cd $$dir; ${MAKE} clean); \
	done
