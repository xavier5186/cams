#include "sandbox.h"

int main(int cnt) {
	
	for(int idx=0; idx < cnt; idx++)
		func1(idx);

	if (cnt > 0)
		func2(2);
	
	return 0;
}