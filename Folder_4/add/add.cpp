/*
win平台下使用`msvc`编译器导出dll需要加`__declspec(dllexport)`,它会同时导出`.lib`和`.dll`文件;
`.lib`供编译时使用,`.dll`供运行时使用;
导出dll时只需在实现加`__declspec(dllexport)`,和头文件无关;
*/
// __declspec(dllexport) int add(int a, int b)
// {
//     return a + b;
// }

#include <iostream>
//#define EXPORT  // 手动定义,后期改为在`cmakelists`中定义
#include "export.h"

CMAKE_STUDY_API int add(int a, int b)
{
    return a + b;
}