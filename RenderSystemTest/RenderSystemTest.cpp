// RenderSystemTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "VKGraphicWindow.h"
#include <iostream>
int main()
{

	VKGraphicWindow window;
	window.Init(L"triangle test", false, 800, 600);
	window.Run();
	int a;
	std::cin >> a;
    return 0;
}

