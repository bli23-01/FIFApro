#include"common.h"
#include"help.h"

int about()
{
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	draw_about();
	delay(100);
	while(1)
	{
		newmouse(&MouseX, &MouseY, &press);
		if(mouse_press(0,0,640,480)==1)
			break;
	}
	return 2;
}
void draw_about()
{
	setfillstyle(SOLID_FILL, WHITE);
	
	setcolor(RED);
	bar(0,0,640,480);

	puthz(10,15,"����",48,48,BLACK);
	puthz(10,100,"������˵����",16,17,BLACK);
	puthz(70,130,"����Ϸ����ʵ",16,17,BLACK);
	settextstyle(0,0,2);
	outtextxy(170,130,"1901");
	puthz(230,130,"�ν����߼��Ŀ���",16,17,BLACK);
	puthz(70,160,"�����Ϊ����������˹��������Զ���",16,17,BLACK); 
	outtextxy(360,160,"C");
	puthz(375,160,"���Կγ������Ʒ",16,17,BLACK);
	puthz(10,190,"ָ����ʦ��",16,17,BLACK);
	puthz(70,220,"�ܴ��ܣ��ζ��£�����ɣ��߳��Σ��ܿ����������У���գ����ң�ɣũ��",16,17,BLACK);
	puthz(10,250,"��ʦ",16,17,BLACK);
	puthz(70,280,"����Ϸ���������Դ����ʵ���������Լ�����������Ϸ",16,17,BLACK);
	puthz(70,310,"��ϷΪѧ��������Ʒ��������Ŀ�ģ�ת������ϵ����",16,17,BLACK);
	settextstyle(0,0,5);
	outtextxy(70,370,"HUST AIA");
	
	puthz(70,440,"����˳�������",16,17,BLACK);
	
}
