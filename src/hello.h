#ifndef __HELLO_H__
#define __HELLO_H__
#ifdef WIN32
#ifdef LIBHELLO_BUILD
#define LIBHELLO_API __declspec(dllexport)
#else
#define LIBHELLO_API __declspec(dllimport)
#endif // #ifdef LIBHELLO_BUILD
#else
#define LIBHELLO_API
#endif // #ifdef WIN32
LIBHELLO_API void Hello2(const char* text);
#endif // __HELLO_H__
