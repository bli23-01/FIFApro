#ifndef _PSTDIO_H_
#define _PSTDIO_H_

int Pstdio(USER *u);				//��Ա���������� 
void draw_Pstdio(Player *player);	//�����溯�� 
int func_212(USER *u,Player *player,int *num,int *state,int *delmoney);//���������� 
void changemoney(int *delmoney,Player *player,int *pre_all);	//�ı��� 
void lightbutton_P(int x, int y, int x1, int y1, int color1, int color2, int flag);//���� 
void recoverbutton_P(int status);//�ָ� 
void inputadminP(char* id, int x1, int y1, int charnum, int color);//�������� 
void drawC(int x,int y,int ratio,int color);//���·� 
void drawcross(int x,int y,int length,int high,int color);//��ʮ�� x��yΪ����λ�� 
void drawcross1(int x,int y,int length,int high,int color);//��-�� 
void recovercross();				//�ָ�+-�� 
void changeAll(Player *player, int flag);//�ı��������� 
void changespeed(Player *player, int flag);//�ı��ٶ������� 
void changecontrol(Player *player, int flag);//�ı���������� 
void changepower(Player *player, int flag);//�ı����������� 
void changedefend(Player *player, int flag);//�ı���������� 
void changeAbar(Player *player);			//�ı��� 
void randPnum(Player *player);				//������º� 
int creat_complete(Player *player,int *delmoney,USER *u);//�жϴ������� 
void input_pinfo(Player *player,USER *u,int *delmoney);//д����Ϣ 
void Pwarning(int flag);				//���� 
#endif
