#include <Windows.h>
#include <Winternl.h>
#include <TlHelp32.h> 
#include <iostream>

namespace Kernel32{
	DWORD pGetProcessId(HANDLE Process);
}

namespace Inject{
	#define __in 
	#define __out

	int RunPE(void* lpFile, wchar_t* path, DWORD szFile, LPWSTR args);
	int RunPESelf(void* lpFile, DWORD szFile, LPWSTR args);
	DWORD_PTR get_kernel32base();
	DWORD_PTR get_ntdllbase();
	DWORD get_hash(const char *str);
	DWORD_PTR get_proc_address(DWORD_PTR pDLL, DWORD dwAPI);
}