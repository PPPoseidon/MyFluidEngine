// MyFluidEngine.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "MyFluidEngine.h"


// 这是导出变量的一个示例
MYFLUIDENGINE_API int nMyFluidEngine=0;

// 这是导出函数的一个示例。
MYFLUIDENGINE_API int fnMyFluidEngine(void)
{
    return 0;
}

// 这是已导出类的构造函数。
CMyFluidEngine::CMyFluidEngine()
{
    return;
}
