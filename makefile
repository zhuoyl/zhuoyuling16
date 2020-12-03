#linkstack
stack:linkstack.c linkstack.h testlinkstack.c
	g++ linkstack.c testlinkstack.c -o stack

clean:
	rm stack
