#ifndef _shoot_h
#define _shoot_h
#include"common.h" 

void draw_shoot();				//�����ܽ��� 
void draw_ball(int x,int y,int ratio);//���� 
void draw_player(int x,int y);//���� 
void Saying(int word);//��ʾ�� 
int shooting();	//���� 
int shootingAI();//AI���� 
void Pshowing(char *goalstr);//�����ܼƽ��� 
#endif 
