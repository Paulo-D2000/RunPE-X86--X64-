# RunPE-X86--X64-
With this RunPE you can easily inject your payload in any x86 or x64 program.

There are two funcs. First is RunPE which needs an image of PE file, then it needs a path to the target program.

Here is a definition of func:
int	Inject::RunPE(void* lpFile, wchar_t* path, DWORD szFile, LPWSTR args);

The second func is to inject some itself.
int	Inject::RunPESelf(void* lpFile, DWORD szFile, LPWSTR args);

How to use in your app:
1. add ```#include "RunPE.hpp"``` on your main file\
1.1 call Inject::RunPE(...) or Inject::RunPESelf(...)
2. setup cmake / make to include the ```RunPE-X86--X64-``` directory, add ```RunPE.cpp``` and ```RunPE.hpp``` to the sources\
2.1 Run ```make``` or ```cmake --build . --target TARGET_NAME --config Debug```
2.1 (OPTIONAL) Manual build: ```g++ yourmain.cpp path_to_runpe_folder/RunPE.cpp -Ipath_to_runpe_folder -fpermissive -o main```
3. build\
3.1 profit!
