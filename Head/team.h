#ifndef _team_h
#define _team_h
 
#include"common.h" 
int team(USER *u);//��ӹ������غ���
void draw_team();//��teanm����
int func213(Player* player_create, int player_tem[], USER* u, int check[]);//�ж����λ��
void show_team(int num, USER *u, Player* player_create, int *create, int player_tem[]);//չʾ�����Ϣ
void recoverhz2(int num);//��������
void drawC2(int x, int y, int ratio, int color); //������
void show_list(int state, USER *u);//չʾ��Ӧ��Ա�б�
void show_ability(int i, int num, Player* player_create, int* create, USER* u, int delete_num, int player_tem[], int flag, int check[]);//չʾ��Ա����
void show_clo(int num, USER *u, Player *player_create, int* create, int player_tem[]); //չʾ���º�
void lightbuttonteam(int x, int y, int x1, int y1, int color1, int color2, int flag);//������ť
void recoverbuttonteam(int status);//�ظ���ť
void input_file(Player* player_create, int* create, USER* u); //�����д���ļ�
void delete_player(Player* player_create, int delete_num);//ɾ����Ա
void warn_no(); //��ʾ���ܴ���


 
#endif // !_team_h

