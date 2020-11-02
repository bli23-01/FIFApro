#include"common.h"
#include"maindou.h"
#include"gamedou.h"


int choose_main_double(USER* u)
{
	int condition = 1;
	clrmous(MouseX, MouseY);
	MouseS = 1;
	cleardevice();
	draw_22();

	while (condition == 1)
	{
		newmouse(&MouseX, &MouseY, &press);
		condition = functwotwo(u);
	}
	if (condition == -2)
		return -2;
}

void draw_22()
{
	int i;
	setfillstyle(1, 2);
	bar(0, 0, 640, 480);//������ɫ

	setfillstyle(1, 7);//����ʼ�����ذ�ť
	bar(120, 440, 200, 470);
	bar(440, 440, 520, 470);
	rectangle(120, 440, 200, 470);
	rectangle(440, 440, 520, 470);
	puthz(140, 445, "��ʼ", 16, 16, BLUE);
	puthz(460, 445, "����", 16, 16, BLUE);

	puthz(280, 10, "˫����Ϸ", 24, 24, RED);
	setcolor(BLACK);
	bar(0, 40, 250, 340);
	rectangle(0, 40, 250, 340);
	for (i = 0;i < 5;i++)
	{
		rectangle(0, 40 + i * 60, 250, 100 + i * 60);
	}
	puthz(105, 60, "Ӣ��", 24, 30, BLUE);
	puthz(105, 120, "����", 24, 30, BLUE);
	puthz(90, 180, "����˹", 24, 30, BLUE);
	puthz(105, 240, "�¹�", 24, 30, BLUE);
	puthz(105, 300, "�й�", 24, 30, BLUE);

	bar(390, 40, 640, 340);
	rectangle(640, 40, 390, 340);
	for (i = 0;i < 5;i++)
	{
		rectangle(390, 40 + i * 60, 640, 100 + i * 60);
	}
	puthz(495, 60, "Ӣ��", 24, 30, BLUE);
	puthz(495, 120, "����", 24, 30, BLUE);
	puthz(480, 180, "����˹", 24, 30, BLUE);
	puthz(495, 240, "�¹�", 24, 30, BLUE);
	puthz(495, 300, "�й�", 24, 30, BLUE);

	bar(280, 100, 360, 300);
	rectangle(280, 100, 360, 200);
	rectangle(280, 200, 360, 300);
	puthz(300, 140, "һ����", 16, 20, BLUE);
	puthz(300, 240, "������", 16, 20, BLUE);
}

int functwotwo(USER* u)//, struct gamestruct *gamestruct1)
{
	static int warn2;            // ���ڷ�ֹ���ظ�����
	int i;      // �����ж�ѭ����������������
	static int nation1 = 0;
	static int nation2 = 0;
	static int time = 120;
	
	if (MouseX >= 120 && MouseY >= 440 && MouseX <= 200 && MouseY <= 470)//ȷ����ť
	{
		if (mouse_press(120, 440, 200, 470) == 2)
		{
			MouseS = 1;
			if (warn2 == 0)
			{
				warn2 = 1;
				lightbutton22(120, 440, 200, 470, BLACK, 11, warn2);
			}
			else if (warn2 != 1)
			{
				recoverbutton22(warn2);
				warn2 = 0;
			}
			return 1;
		}
		else if (mouse_press(120, 440, 200, 470) == 1)
		{
			clrmous(MouseX, MouseY);
			game_dou(nation1, nation2, time, u);
			return -2;
		}
	}
	else if (MouseX >= 440 && MouseY >= 440 && MouseX <= 520 && MouseY <= 470)//���ذ�ť
	{
		if (mouse_press(440, 440, 520, 470) == 2)
		{
			MouseS = 1;
			if (warn2 == 0)
			{
				warn2 = 2;
				lightbutton22(440, 440, 520, 470, BLACK, 11, warn2);
			}
			else if (warn2 != 2)
			{
				recoverbutton22(warn2);
				warn2 = 0;
			}
			return 1;
		}
		else if (mouse_press(440, 440, 520, 470) == 1)
		{
			return 2;
		}
	}
	else if (MouseX >= 0 && MouseY >= 40 && MouseX <= 250 && MouseY <= 340)
	{
		for (i = 0;i < 5;i++)
		{
			if (mouse_press(0, 40 + i * 60, 250, 100 + i * 60) == 1)
			{
				recoverhz22(0);
				clrmous(MouseX, MouseY);
				lighthz22(i + 1, 0);
				nation1 = i;
				return 1;
			}
		}
	}
	else if (MouseX >= 390 && MouseY >= 40 && MouseX <= 640 && MouseY <= 340)
	{
		for (i = 0;i < 5;i++)
		{
			if (mouse_press(390, 40 + i * 60, 640, 100 + i * 60) == 1)
			{
				recoverhz22(1);
				clrmous(MouseX, MouseY);
				lighthz22(i + 1, 1);
				nation2 = i;
				return 1;
			}
		}
	}
	else if (MouseX >= 280 && MouseY >= 100 && MouseX <= 360 && MouseY <= 200)
	{
		if (mouse_press(280, 100, 360, 200) == 1)
		{
			recoverhz22(2);
			clrmous(MouseX, MouseY);
			lighthz22(6, 2);
			time= 60;
			return 1;
		}
	}
	else if (MouseX >= 280 && MouseY >= 200 && MouseX <= 360 && MouseY <= 300)
	{
		if (mouse_press(280, 200, 360, 300) == 1)
		{
			recoverhz22(2);
			clrmous(MouseX, MouseY);
			lighthz22(7, 2);
			time = 180;
			return 1;
		}
	}

	if (warn2 != 0)
	{
		MouseS = 0;
		recoverbutton211(warn2);
		warn2 = 0;
		if (MouseS != 0)
			MouseS = 0;
	}
	return 1;
}

void lightbutton22(int x, int y, int x1, int y1, int color1, int color2, int flag)
{
	clrmous(MouseX, MouseY);
	delay(10);
	setcolor(color1);
	setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	setfillstyle(1, color2);
	bar(x, y, x1, y1);
	rectangle(x, y, x1, y1);	//���߿�
	switch (flag)
	{
	case 1:
		puthz(140, 445, "��ʼ", 16, 16, YELLOW);;
		break;
	case 2:
		puthz(460, 445, "����", 16, 16, YELLOW);
		break;
	default:
		closegraph();
		printf("something runs wrong in lightbutton");
		exit(1);
	}
}

void recoverbutton22(int status)
{
	clrmous(MouseX, MouseY);
	setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	setfillstyle(1, 7);
	switch (status)
	{
	case 1:
		bar(120, 440, 200, 470);
		rectangle(120, 440, 200, 470);
		puthz(140, 445, "��ʼ", 16, 16, RED);
		break;
	case 2:
		bar(440, 440, 520, 470);
		rectangle(440, 440, 520, 470);
		puthz(460, 445, "����", 16, 16, RED);
		break;
	default:
		break;
	}
}



void recoverhz22(int flag)
{
	clrmous(MouseX, MouseY);
	setfillstyle(1, 2);
	if (flag == 0)
	{
		puthz(105, 60, "Ӣ��", 24, 30, BLUE);
		puthz(105, 120, "����", 24, 30, BLUE);
		puthz(90, 180, "����˹", 24, 30, BLUE);
		puthz(105, 240, "�¹�", 24, 30, BLUE);
		puthz(105, 300, "�й�", 24, 30, BLUE);
	}

	if (flag == 1)
	{
		puthz(495, 60, "Ӣ��", 24, 30, BLUE);
		puthz(495, 120, "����", 24, 30, BLUE);
		puthz(480, 180, "����˹", 24, 30, BLUE);
		puthz(495, 240, "�¹�", 24, 30, BLUE);
		puthz(495, 300, "�й�", 24, 30, BLUE);
	}
	if (flag == 2)
	{
		puthz(300, 140, "һ����", 16, 20, BLUE);
		puthz(300, 240, "������", 16, 20, BLUE);
	}
}

void lighthz22(int num, int flag)
{
	clrmous(MouseX, MouseY);
	setfillstyle(1, 2);
	if (flag == 0)
	{
		switch (num)
		{
		case 1:
			puthz(105, 60, "Ӣ��", 24, 30, RED);
			break;
		case 2:
			puthz(105, 120, "����", 24, 30, RED);
			break;
		case 3:
			puthz(90, 180, "����˹", 24, 30, RED);
			break;
		case 4:
			puthz(105, 240, "�¹�", 24, 30, RED);
			break;
		case 5:
			puthz(105, 300, "�й�", 24, 30, RED);
			break;
		}
	}
	else if (flag == 1)
	{
		switch (num)
		{
		case 1:
			puthz(495, 60, "Ӣ��", 24, 30, RED);
			break;
		case 2:
			puthz(495, 120, "����", 24, 30, RED);
			break;
		case 3:
			puthz(480, 180, "����˹", 24, 30, RED);
			break;
		case 4:
			puthz(495, 240, "�¹�", 24, 30, RED);
			break;
		case 5:
			puthz(495, 300, "�й�", 24, 30, RED);
			break;
		
		}
	}
	else if (flag == 2)
	{
		switch (num)
		{
		case 6:
			puthz(300, 140, "һ����", 16, 20, RED);
			break;
		case 7:
			puthz(300, 240, "������", 16, 20, RED);
			break;
		}
	}
}