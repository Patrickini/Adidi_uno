// Adidiuno.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>


void imprimir(int n) {
	std::cout << n << std::endl;
}

bool numero(int array[], int n) {
	int size = (sizeof(array) / sizeof(*array));
	_asm {
		xor ebx, ebx
		mov ecx, size
		mod edx, 0

		mov edx, dword ptr[eax + ebx]

		caca:

		cmp ebx, n
		add edx, 1
		loop caca :












		/*mov eax, array
		mov ecx, 0

		caca:
		dec cl
		cmp  eax[ebx], n
		add ecx, 1
		jnz caca
		loop caca*/


	}
}

int main()
{
//	int id1, id2, id3, ost;
//	id3 = 1;
//	id2 = 1;
//	id1 = id2 * id3 + (id3 * 60) * id2;
//	ost = 60;
//	_asm {
//
//		mov EAX, id3
//		add EAX, id2
//		mov EDX, id3
//		mov CBX, 60
//		mul EDX, cob
//		add EDX, EAX
//
//		mov ecx, 14
//		mul eax, id3
//
//
//
//		loopflag:
//			add eax, ecx
//				mov id1,eax
//	}
	_asm {
		
		mov ecx 0

		caca:
		dec cl
		mov[ecx], var
		
		
		cmp var,
		add ecx, 1
		jnz caca
		
		loop caca

		
		loopflag:


		mov edx, dword ptr [eax + ebx]
	}

    return 0;
}

