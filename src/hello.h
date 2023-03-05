// C++:编写跨平台程序的关键，C/C++中的内置宏定义
// 分两部分：
 
// 操作系统判定：
 
// Windows:   WIN32
 
// Linux:   linux
 
// Solaris:   __sun
 
// 编译器判定：
 
// VC:  _MSC_VER
 
// GCC/G++:   __GNUC__
 
// SunCC:   __SUNPRO_C和__SUNPRO_CC

#ifndef __HELLO_H__
#define __HELLO_H__
#ifdef  _MSC_VER
#ifdef LIBHELLO_BUILD
#define LIBHELLO_API __declspec(dllexport)
#else
#define LIBHELLO_API __declspec(dllimport)
#endif // #ifdef LIBHELLO_BUILD
#else //__GNUC__
#define LIBHELLO_API
#endif // #ifdef WIN32
LIBHELLO_API void Hello2(const char* text);
#endif // __HELLO_H__
