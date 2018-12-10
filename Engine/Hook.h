#pragma once

#include "Engine.h"
#include "Render2.h"
#include "../VMT/Vmthook.h"
typedef void(__thiscall* paint_traverse_t)(PVOID, unsigned int, bool, bool);                  // PaintTraverse hook
using create_move_t = void(__thiscall *)(IBaseClientDLL *, int, float, bool);                 // CreateMove hook

namespace Engine
{
	namespace Hook
	{
		bool Initialize();
		void Shutdown();
	}
}