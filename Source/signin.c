#include"common.h"
#include"signin.h"
#include"SIfunc.h"
#include"shoot.h"
int signin(USER* u)
{
	int condition = 1;
	clrmous(MouseX, MouseY);
	delay(100);
	cleardevice();
	draw_signin();
	while (condition == 1)
	{

		newmouse(&MouseX, &MouseY, &press);
		condition = func_0(u);
	}
	if (condition == -1)
		return -1;
	if (condition == 0)
		return 1;
	if (condition == 2)
		return 2;
}
void draw_signin()
{
	draw_bk();
	//setfillstyle(1, LIGHTGREEN);
	//bar(0,0,639,479);
	setfillstyle(1, WHITE);


	bar(50, 80, 320, 400);//���

	textcolor(BLACK);
	setcolor(BLACK);
	settextstyle(0, 0, 3);
	outtextxy(140, 90, "FIFA");
	outtextxy(90,20,"WE ARE THE CHAMPION!"); 


	puthz(65, 180, "�˻�", 24, 30, BLACK);
	puthz(65, 240, "����", 24, 30, BLACK);

	setfillstyle(1, LIGHTGRAY);
	bar(120, 180, 300, 200);
	bar(120, 240, 300, 260);

	setcolor(BLACK);//�˺���������
	setlinestyle(SOLID_LINE, 0, 3);

	rectangle(120, 180, 300, 200);
	rectangle(120, 240, 300, 260);//�˺�����λ��

	setcolor(BLACK);
	setfillstyle(1, LIGHTGRAY);
	bar(95, 335, 155, 365);//��¼��б��ɫ
	bar(225, 335, 285, 365);//ע���б��ɫ

	setfillstyle(SOLID_FILL, DARKGRAY);
	bar(90, 330, 150, 360);//��¼��
	bar(220, 330, 280, 360);//ע�� 


	puthz(100, 335, "��¼", 16, 24, WHITE);
	puthz(230, 335, "ע��", 16, 24, WHITE);
	puthz(160, 300, "��������", 16, 16, BLACK);
	
	settextstyle(0, 0, 1);
	setcolor(BLACK);
	setfillstyle(1, WHITE);
	bar(590, 430, 640, 480);
	rectangle(590, 430, 640, 480);
	puthz(600, 448, "����", 16, 16, GREEN);
	

}
int func_0(USER* u)
{
	static int num;
	static int state1 = 0, state2 = 0;
	if (MouseX > 120 && MouseX < 300 && MouseY>180 && MouseY < 200)
	{
		if (mouse_press(120, 180, 300, 200) == 2)//�û�����δ���
		{
			MouseS = 2;
			if (num == 0 && state1 == 0)//��ֹ���ظ�����
			{
				lightbutton_login(120, 180, 300, 200, LIGHTGRAY, WHITE, 1);//color1Ϊ�߿�ɫ��color2Ϊ���ɫ
				num = 1;
			}
			return 1;

			//��������
		}
		else if (mouse_press(120, 180, 300, 200) == 1)//�û�������
		{
			MouseS = 0;
			lightbutton_login(120, 180, 300, 200, LIGHTGRAY, WHITE, 1);
			u->user[0] = '\0';
			inputadmin(u->user, 120, 177, 10, WHITE);
			//���뺯��
			if (strlen(u->user) != 0)
				state1 = 1;
			else
				state1 = 0;
			return 1;
		}

	}
	if (MouseX > 120 && MouseX < 300 && MouseY>240 && MouseY < 260)
	{
		if (mouse_press(120, 240, 300, 260) == 2)//�����δ���
		{
			MouseS = 2;
			if (num == 0 && state2 == 0)
			{
				lightbutton_login(120, 240, 300, 260, LIGHTGRAY, WHITE, 1);//��������
				num = 2;
			}
			return 1;
		}
		else if (mouse_press(120, 240, 300, 260) == 1)//�������
		{
			MouseS = 0;
			lightbutton_login(120, 240, 300, 260, LIGHTGRAY, WHITE, 1);
			u->password[0] = '\0';
			inputpassword(u->password, 120, 237, 10, WHITE);
			//���뺯��
			if (strlen(u->password) != 0)
				state2 = 1;
			else
				state2 = 0;
			return 1;
		}
	}
	if (MouseX > 90 && MouseX < 150 && MouseY>330 && MouseY < 360)
	{
		if (mouse_press(90, 330, 150, 360) == 2)//��¼��δ���
		{
			if (num == 0)
			{
				MouseS = 1;
				lightbutton_login(90, 330, 150, 360, LIGHTGRAY, CYAN, 2);//��������
				num = 3;
			}
			return 1;
		}
		else if (mouse_press(90, 330, 150, 360) == 1)//��¼����
		{
			MouseS = 0;
			
			if (login_complete(u->user, u->password))     //��Ϣ��ȷ
			{
				
				if (input_uinfo(u))  //����Ϣ����uָ��
				{	
					return 2;
				}
				else
				{
					printf("something wrong");
					delay(3000);
					exit(1);
				}
			}
			else
			{
				return 1;
			}
			//����¼״̬����
		}
	}
	
	if (MouseX > 160 && MouseX < 220 && MouseY>300 && MouseY < 320)
	{
		if (mouse_press(160, 300, 220, 320) == 2)//���ǿ�δ���
		{
			if (num == 0)
			{
				MouseS = 1;
				lightbutton_login(160, 300, 220, 320, WHITE, WHITE, 5);//��������
				num = 6;
			}
			return 1;
		}
		else if (mouse_press(160, 300, 220, 320) == 1)//���ǿ���
		{
			MouseS = 0;
			
			return -1; 
			
		}
	}
	/*	if (MouseX > 100 && MouseX < 169 && MouseY>380 && MouseY < 405)
		{
			if (mouse_press(100, 380, 169, 405) == 2)//���ؿ�δ���
			{
				if (num == 0)
				{
					MouseS = 1;
					lightbutton_login(100, 380, 169, 405, BLUE, LIGHTGRAY, 3);//��������
					num = 4;
				}
				continue;
			}
			else if (mouse_press(100, 380, 169, 405) == 1)//���ؿ���
			{
				MouseS = 0;
				*func = 0;
				//����initmenu����
				return;
			}
		}*/
	if (MouseX > 220 && MouseX < 280 && MouseY>330 && MouseY < 360)
	{
		if (mouse_press(220, 330, 280, 360) == 2)//ע���δ���
		{
			if (num == 0)
			{
				MouseS = 1;
				lightbutton_login(220, 330, 280, 360, LIGHTGRAY, CYAN, 4);//��������
				num = 5;
			}
			return 1;
		}
		else if (mouse_press(220, 330, 280, 360) == 1)//ע�����
		{
			MouseS = 0;
			return 0;
			//�л���ע�����
		}
	}
	if (MouseX >= 590 && MouseX <= 640 && MouseY >= 430 && MouseY <= 480) 
	{
		if(mouse_press(590, 430, 640, 480) == 2)
		{
			MouseS = 1;
			if(num == 0)
			{
				lightbutton_login(590, 430, 640, 480, BLACK, 11, 7);
				num = 7;
			}
			else if(num != 7)
			{
				recoverbutton_login(num);
				num = 0;
			}
			return 1;
		}
		if(mouse_press(590, 430, 640, 480) == 1)
		{
			exit(1);
		}
	}
	if (num != 0)
	{
		MouseS = 0;
		if (state1 == 0)
		{
			recoverbutton_login(1);//�ָ���ť��ɫ
		}
		if (state2 == 0)
		{
			recoverbutton_login(2);
		}
		if (num == 3 || num == 4 || num == 5 || num == 6|| num == 7)
		{
			recoverbutton_login(num);
		}
		num = 0;
	}
	if (MouseS != 0)
	{
		MouseS = 0;
	}
	return 1;
}



void lightbutton_login(int x, int y, int x1, int y1, int color1, int color2, int flag)
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
		break;
	case 2:
		puthz(100, 335, "��¼", 16, 24, BLACK);
		break;
	case 7:
		puthz(600, 448, "����", 16, 16, BLUE);
		break;
	case 4:
		puthz(230, 335, "ע��", 16, 24, BLACK);
		break;
	case 5:
		puthz(160, 300, "��������", 16, 16, RED);
		break;
	default:
		closegraph();
		printf("something runs wrong in lightbutton");
		exit(1);
	}
}

void recoverbutton_login(int status)
{
	clrmous(MouseX, MouseY);
	if (status == 1 || status == 2)
	{
		setfillstyle(SOLID_FILL, LIGHTGRAY);
		setcolor(BLACK);
		setlinestyle(SOLID_LINE, 0, 3);
	}
	else
	{
		setfillstyle(SOLID_FILL, LIGHTGRAY);
		setlinestyle(SOLID_LINE, 0, 1);
		setcolor(BLACK);
	}
	switch (status)
	{
	case 1:
		bar(120, 180, 300, 200);
		rectangle(120, 180, 300, 200);
		break;
	case 2:
		bar(120, 240, 300, 260);
		rectangle(120, 240, 300, 260);
		break;
	case 3:
		setfillstyle(SOLID_FILL, DARKGRAY);
		bar(90, 330, 150, 360);
		puthz(100, 335, "��¼", 16, 24, WHITE);
		break;
	case 7:
	{
		setfillstyle(1, WHITE);
		bar(590, 430, 640, 480);
		rectangle(590, 430, 640, 480);
		puthz(600, 448, "����", 16, 16, GREEN);
		break;
	}
	case 5:
		setfillstyle(SOLID_FILL, DARKGRAY);
		bar(220, 330, 280, 360);
		//	rectangle(220, 330, 280, 360);
		puthz(230, 335, "ע��", 16, 24, WHITE);
		break;
	case 6:
		puthz(160, 300, "��������", 16, 16, BLACK);
		break;
	}
}
void draw_bk()
{
	int i=0;
	
	setfillstyle(1, LIGHTBLUE);
	bar(0, 0, 640, 480);		
	setfillstyle(1, GREEN);
	fillellipse(320, 360, 640, 150);
	setlinestyle(0, 0, 3);
	
	setfillstyle(1, LIGHTRED);
	fillellipse(540, 130, 50, 50);
	setcolor(RED);
	circle(540, 130, 60);
	setcolor(MAGENTA);
	circle(540, 130, 63);
	setcolor(LIGHTMAGENTA);
	circle(540, 130, 66);
	setcolor(YELLOW);
	circle(540, 130, 69);

	setcolor(WHITE);
	line(160,320,480,320);
	line(160,320,160,100);
	line(160,100,480,100);
	line(480,100,480,320);
	setlinestyle(0, 0, 1);
	for(i=0;i<64;i++)
		line(160+i*5,320,160+i*5,100);
	for(i=0;i<44;i++)
		line(160,100+i*5,480,100+i*5);
	
	draw_ball(540,360,30);
	
}

