#ifndef _signin_h
#define _signin_h

int signin(USER *u);				//��¼�ܺ��� 
void draw_signin();					//����¼���� 
int func_0(USER *u);				//���ܺ��� 
void lightbutton_login(int x, int y, int x1, int y1, int color1, int color2, int flag);	//������ť 
void recoverbutton_login(int status);	//�ָ���ť 
void draw_bk();	//������ͼ 
#endif
