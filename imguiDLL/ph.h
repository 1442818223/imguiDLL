#pragma once
#include <windows.h>
#include<d3d9.h>

#include"IM/imconfig.h"
#include"IM/imgui.h"
#include"IM/imgui_impl_dx9.h"
#include"IM/imgui_impl_win32.h"
#include"IM/imgui_internal.h"
#include"IM/imstb_rectpack.h"
#include"IM/imstb_textedit.h"
#include"IM/imstb_truetype.h"

#include"Im/detours.h" //必须找到detour里面的include文件拉进来
#include"Im/detver.h"

#include"ImWin.h"
#include"Helpers.h"

#pragma comment(lib,"d3d9.lib")
#pragma comment(lib,"detours.lib")