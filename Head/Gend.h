#ifndef _Gend_h
#define _Gend_h

int Gend(USER *u, struct Ball* ball,int flag);			//�ܽ�����ܺ��� 
void draw_Gend(USER* u, struct Ball* ball);				//�ܽ���滭ͼ 
int func_Gend();								//�ܽ���湦�� 
void Minfo_input(USER *u);						//�����Ϣд�� 
void lightbuttonGend(int x, int y, int x1, int y1, int color1, int color2, int flag);//��ť���� 
void recoverbuttonGend(int status);													//��ť�ָ� 



#endif
