#include"common.h"
#include"help.h"

int help()
{
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	draw_help();
	delay(100);
	while(1)
	{
		newmouse(&MouseX, &MouseY, &press);
		if(mouse_press(0,0,640,480)==1)
			break;
	}
	return 2;
}
void draw_help()
{
	setfillstyle(SOLID_FILL, WHITE);
	settextstyle(0,0,2);
	setcolor(RED);
	bar(0,0,640,480);
	puthz(10,15,"����",48,48,BLACK);
	puthz(10,100,"�������˵����",16,17,BLACK);
	puthz(70,130,"����Ϸ���е�����Ϸ��˫����Ϸ����ģʽ",16,17,BLACK);
	puthz(70,160,"������Ϸ�˵���������ڹ�����ӽ���������������������Ĳ鿴�Լ���",16,17,BLACK);
	puthz(10,190,"������ӵĴ���",16,17,BLACK);
	puthz(70,220,"������Ϸ�˵�����Ҳ���Դ����Զ�����Ա��׼����Ϸ����ѡ�������Ӳ�",16,17,BLACK);
	puthz(10,250,"�����ݲ����ʤ����",16,17,BLACK);
	puthz(70,280,"˫����Ϸ׼�����������ѡ�����������",16,17,BLACK);
	puthz(70,310,"������Ϸ�����������ҷ����������Ա�ƶ�",16,17,BLACK);
	outtextxy(400,310,"A");
	puthz(420,310,"����������",16,17,BLACK);
	outtextxy(507,310,"D");
	puthz(525,310,"������",16,17,BLACK);
	puthz(10,340,"������Ϸ��ѡ�������Ա����Ҳٿ�",16,17,BLACK);
	puthz(70,370,"˫����Ϸ˫���ֱ������������Լ�",16,17,BLACK);
	outtextxy(327,370,"wsad");
	puthz(391,370,"�ٿ���Ա",16,17,BLACK);
	outtextxy(458,370,"JK");
	puthz(488,370,"�Լ�",16,17,BLACK);
	outtextxy(523,370,"13");
	puthz(553,370,"��Ϊ������",16,17,BLACK);	
	puthz(10,400,"����",16,17,BLACK);
	
	puthz(70,440,"����˳�������",16,17,BLACK);
}
