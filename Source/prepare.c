#include"common.h"
#include"prepare.h"
#include"game.h"

int prepare(USER* u)
{
	int condition = 1;
	clrmous(MouseX, MouseY);
	MouseS = 1;
	cleardevice();
	draw_prepare();
	delay(100);
	while (condition == 1)
	{
		newmouse(&MouseX, &MouseY, &press);
		condition = func211(u);
	}
	if (condition == -2)
		return -2;
}

void draw_prepare()
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

	setcolor(BLACK);
	bar(0, 40, 250, 400);
	rectangle(0, 40, 250, 400);
	for (i = 0;i < 6;i++)
	{
		rectangle(0, 40 + i * 60, 250, 100 + i * 60);
	}
	puthz(105, 60, "Ӣ��", 24, 30, BLUE);
	puthz(105, 120, "����", 24, 30, BLUE);
	puthz(90, 180, "����˹", 24, 30, BLUE);
	puthz(105, 240, "�¹�", 24, 30, BLUE);
	puthz(105, 300, "�й�", 24, 30, BLUE);
	puthz(90, 360, "�Զ���", 24, 30, BLUE);
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

int func211(USER* u)
{
	static int warn1;            // ���ڷ�ֹ���ظ�����
	static int nation = 0;       // ���ڼ�¼ѡ��Ĺ���
	int i;      // �����ж�ѭ����������������
	static int nation2 = 0;
	static int time = 60;
	FILE* fp;
	char path[50] = "Database\\USER\\";
	
	if (MouseX >= 120 && MouseY >= 440 && MouseX <= 200 && MouseY <= 470)//ȷ����ť
	{
		if (mouse_press(120, 440, 200, 470) == 2)
		{
			MouseS = 1;
			if (warn1 == 0)
			{
				warn1 = 1;
				lightbutton211(120, 440, 200, 470, BLACK, 11, warn1);
			}
			else if (warn1 != 1)
			{
				recoverbutton211(warn1);
				warn1 = 0;
			}
			return 1;
		}
		else if (mouse_press(120, 440, 200, 470) == 1)
		{
			if (nation >= 0 && nation <= 5)
			{
				//closegraph();
				game(nation,nation2,time,u);
				return -2;
			}
		}
	}
	else if (MouseX >= 440 && MouseY >= 440 && MouseX <= 520 && MouseY <= 470)//���ذ�ť
	{
		if (mouse_press(440, 440, 520, 470) == 2)
		{
			MouseS = 1;
			if (warn1 == 0)
			{
				warn1 = 2;
				lightbutton211(440, 440, 520, 470, BLACK, 11, warn1);
			}
			else if (warn1 != 2)
			{
				recoverbutton211(warn1);
				warn1 = 0;
			}
			return 1;
		}
		else if (mouse_press(440, 440, 520, 470) == 1)
		{
			return 21;
		}
	}

	else if (MouseX >= 0 && MouseY >= 40 && MouseX <= 250 && MouseY <= 400)   //�����ѡ��
	{
		for (i = 0;i < 6;i++)
		{
			if (mouse_press(0, 40 + i * 60, 250, 100 + i * 60) == 1)
			{
				recoverhz211(0);
				if (i == 5)
				{
					strcat(path, u->user);
					strcat(path, "\\selft.dat");
					if ((fp = fopen(path, "rb+")) == NULL)
					{
						printf("cannot open file selfp.dat");
						delay(3000);
						exit(1);
					}
					fseek(fp, 0, SEEK_END);
					if (ftell(fp) == 0)
					{
						Pshowing_P();
						draw_prepare();
						return 1;
					}
				}
				clrmous(MouseX, MouseY);	
				lighthz211(i + 1, 0);
				nation = i;
				return 1;
			}
		}
	}
	else if (MouseX >= 280 && MouseY >= 100 && MouseX <= 360 && MouseY <= 200)  //ʱ��ѡ��
	{
		if (mouse_press(280, 100, 360, 200) == 1)
		{
			recoverhz211(1);
			clrmous(MouseX, MouseY);
			lighthz211(1, 1);
			time = 60;
			return 1;
		}
	}
	else if (MouseX >= 280 && MouseY >= 200 && MouseX <= 360 && MouseY <= 300)  //ʱ��ѡ��
	{
		if (mouse_press(280, 200, 360, 300) == 1)
		{
			recoverhz211(1);
			clrmous(MouseX, MouseY);
			lighthz211(2, 1);
			time = 180;
			return 1;
		}
	}
	else if (MouseX >= 390 && MouseY >= 40 && MouseX <= 640 && MouseY <= 340)   //�ҷ����ѡ��
	{
		for (i = 0;i < 5;i++)
		{
			if (mouse_press(390, 40 + i * 60, 640, 100 + i * 60) == 1)
			{
				recoverhz211(2);
				clrmous(MouseX, MouseY);
				lighthz211(i + 1, 2);
				nation2 = i;
				return 1;
			}
		}
	}

	if (warn1 != 0)
	{
		MouseS = 0;
		recoverbutton211(warn1);
		warn1 = 0;
		if (MouseS != 0)
			MouseS = 0;
	}
	return 1;
}

void lightbutton211(int x, int y, int x1, int y1, int color1, int color2, int flag)
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

void recoverbutton211(int status)
{
	clrmous(MouseX, MouseY);
	setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	setfillstyle(1, 7);
	switch (status)
	{
	case 1:
		bar(120, 440, 200, 470);
		rectangle(120, 440, 200, 470);
		puthz(140, 445, "��ʼ", 16, 16, BLUE);
		break;
	case 2:
		bar(440, 440, 520, 470);
		rectangle(440, 440, 520, 470);
		puthz(460, 445, "����", 16, 16, BLUE);
		break;
	default:
		break;
	}
}


void recoverhz211(int flag)
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
		puthz(90, 360, "�Զ���", 24, 30, BLUE);
	}
	else if (flag == 2)
	{
		puthz(495, 60, "Ӣ��", 24, 30, BLUE);
		puthz(495, 120, "����", 24, 30, BLUE);
		puthz(480, 180, "����˹", 24, 30, BLUE);
		puthz(495, 240, "�¹�", 24, 30, BLUE);
		puthz(495, 300, "�й�", 24, 30, BLUE);
	}
	else if (flag == 1)
	{
		puthz(300, 140, "һ����", 16, 20, BLUE);
		puthz(300, 240, "������", 16, 20, BLUE);
	}
	
}

void lighthz211(int num, int flag)
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
		case 6:
			puthz(90, 360, "�Զ���", 24, 30, RED);
			break;
		}
	}
	else if (flag == 1)
	{
		switch (num)
		{
		case 1:
			puthz(300, 140, "һ����", 16, 20, RED);
			break;
		case 2:
			puthz(300, 240, "������", 16, 20, RED);
			break;
		}
	}
	else if (flag == 2)
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
}
void Pshowing_P()
{
	setfillstyle(1, BLACK);
	bar(158, 118, 482, 282);
	setfillstyle(1, LIGHTGRAY);
	bar(160, 120, 480, 280);

	puthz(170, 130, "δ������ӣ�", 24, 24, BLACK);
	puthz(170, 250, "��������", 24, 24, BLACK);

	delay(3000);
}
