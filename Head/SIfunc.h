#ifndef _SIGNINFUC_H_
#define _SIGNINFUC_H_
#include"database.h"

void inputadmin(char* id, int x1, int y1, int charnum, int color);
//x1,y1�ֱ����˺ţ���֤���������Ϣ����˵���϶˵�

void inputpassword(char* id, int x1, int y1, int charnum, int color);
//x1,y1�ֱ��������������Ϣ�������˵���϶˵�

int forgetpass_complete(char* u, char* id, char* np, char* cp);
//����Ƿ���Ը���������

int login_complete(char* u, char* p);
//�����жϵ�¼��Ϣ�Ƿ�������ȫ����ȷ

int judge_rightpassword(char* name, char* pass);
//�û����������Ƿ�ƥ��

void judge(char* str, int* state, int x, int y); 
//�ж������״̬

void recoverhz(int x, int y, int color);
//����֮ǰ����ĺ���

void recoverhz1(int x, int y,int color);
//�ڶ��� 

int input_uinfo(USER* us);
//��½����û���Ϣ����u

int name_id(char* name, char* id, char* pass, char* againpass);
//�ж��˺����ֻ����Ƿ�ƥ�䣬���ж��������������Ƿ���ͬ��������д�� 

//ע�� 
int register_complete(char* u, char* p, char* cp, char* id, char* vc, char* rdvc);
//�ж�ע����Ϣ�Ƿ���ȷ

int judge_sameuser(char* new_user,int flag);
//�ж��˻��Ƿ��������,�Լ��һ�����ʱ�ж��û����Ƿ����     1Ϊ

int checkright_user(char* str, int x, int y);
//����û����Ƿ����6λ

int checkright_password(char* str, int x, int y);
//����û����Ƿ����6λ

int checkright_confirmedpassword(char* str1, char* str2, int x, int y);
//���ȷ�������Ƿ�һ��

int checkright_ID(char* str, int x, int y, int flag);
//����ֻ���λ�����ʽ

int checkright_verificationcode(char* str1, char* str2, int x, int y);
//�����֤���Ƿ�һ��

void input_database(char* name, char* id, char* code);
//���û�ע����Ϣд���ļ� 

#endif
