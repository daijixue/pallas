// PallasCore.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Export.h"


// ���ǵ���������һ��ʾ��
PALLASCORE_API int nPallasCore=0;

// ���ǵ���������һ��ʾ����
PALLASCORE_API int fnPallasCore(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� PallasCore.h
CPallasCore::CPallasCore()
{
    return;
}
