// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� PALLASCORE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// PALLASCORE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef PALLASCORE_EXPORTS
#define PALLASCORE_API __declspec(dllexport)
#else
#define PALLASCORE_API __declspec(dllimport)
#endif

// �����Ǵ� PallasCore.dll ������
class PALLASCORE_API CPallasCore {
public:
	CPallasCore(void);
	// TODO:  �ڴ�������ķ�����
};

extern PALLASCORE_API int nPallasCore;

PALLASCORE_API int fnPallasCore(void);
