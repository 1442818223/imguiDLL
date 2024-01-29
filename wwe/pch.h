// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>

#include"imgui/imconfig.h"
#include"imgui/imgui.h"
#include"imgui/imgui_impl_dx9.h"
#include"imgui/imgui_impl_win32.h"
#include"imgui/imgui_internal.h"
#include"imgui/imstb_rectpack.h"
#include"imgui/imstb_textedit.h"
#include"imgui/imstb_truetype.h"
#include<d3d9.h>

//配置属性->VC++目录->包含目录->添加DX和Detour的include
//链接器->常规->附加库->添加DX和Detour的Lib (按x86/x64选择)

#include"Detours.h"


#include "Helpers.h"

#include"ImWin.h"

#pragma comment(lib,"d3d9.lib")
#pragma comment(lib,"detours.lib")

#endif //PCH_H
