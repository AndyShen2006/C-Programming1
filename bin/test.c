#include <stdio.h>
#define DLL_EXPORT __declspec(dllexport)
DLL_EXPORT int test(x){
	return x*2;
}