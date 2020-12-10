#include "duilie2.h"
#include <stdio.h>
#include <malloc.h>


int main() {
	Deque *dq = createDeque();
	push_back(dq,80);
	push_front(dq,90);
	push_back(dq,70);
	push_front(dq,60);
	pop_back(dq);
	print(dq);
}
