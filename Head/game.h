#ifndef _game_h
#define _game_h


#define player_allnum 20
//#define G_X_MAX 640
//#define G_Y_MAX 350

struct Player_IG
{
	int id;
	double x, y;    //��Ա������
	double begin_x, begin_y;    //��Աmagicmove  ������λ��
	double possiblity;
	double distance;   //��Ա������ľ���
	int haveball;    //��Ա�Ƿ�����
	int left, right, up, down, lastdirection;   // ��Ա����
	int stage_idle;
	int state;  //���ض�Ӧstate=0    ������Ӧstate=1
	int back;
	double position_x[2];   // ��Ա����λ��
	double position_y[2];   //��Ա����λ��
	int speed;				//�ٶ�����ֵ	
	int power;				//��������ֵ
	int control;			//��������ֵ
	int defend;				//��������ֵ
};

struct Ball
{
	double x, y;   //�������
	double ballrun;				//���Ƿ��ƶ�
	int left, right, up, down;   //��ķ���
	int owner;				//��ǰ������
	int min_num;		//���������Ա
	int position;        //-1���⣬0���ڣ�1����
	int we_near;			//�������������Ա
	int en_near;			//�ҷ����������Ա
	int score_we, score_en;    //�η��÷�
	int team;        //0�������˿���1������߿���2�����ұ߿���
};
//unsigned char getMirrorChar(unsigned char src);
//static unsigned char getCharFromField(int row, int col);
//void putField(int x0, int y0, int page);
int game(int nation, int nation2, int time, USER* u);      //��Ϸ���غ���
void init_info(struct Player_IG* player, struct Ball* ball, int nation, int nation2, USER* u);//��ʼ����Ա��Ϣ�����ļ��ж�ȡ
void show_screen(int x0, int y0, struct Player_IG* player, struct Ball* ball, int page, clock_t derta, int time);  //��ʾ������Ļ����
void show_counter(struct Ball* ball, clock_t derta, int time);     //��ʾ�Ʒְ��ʱ��

void show_player(int x0, int y0, struct Player_IG* player, struct Ball* ball);//����Ա
void show_ball(int x0, int y0, struct Ball* ball); //����
void updateWithInput(struct Player_IG* player, struct Ball* ball, struct GameKey* gameKey, int x0, int y0); //���̲���������Ա
void updateWithoutInput(struct Player_IG* player, struct Ball* ball); //�������޹ص���Ϣ����
void strugle_player(struct Player_IG* player, struct Ball* ball, int i);//�ٿط�����
void player_AI(struct Player_IG* player, struct Ball* ball);//�ǲٿ���Ա�������ƶ�
void change_position(struct Player_IG* player, struct Ball* ball);//�ı���Ա��������
void player_magicmove(struct Player_IG* player, struct Ball* ball);//��Ա�������ƶ�
void player_atk(struct Player_IG* player, struct Ball* ball);   //���Է���Ա��������
void strugle(struct Ball* ball,struct Player_IG* player, int i);     //�Զ�����
void tip_ball_in(struct Ball* ball, struct Player_IG* player);  //������ʾ��
void tip_ball_out(struct Ball* ball, struct Player_IG* player);//������ʾ��
void init_postion(struct Player_IG* player, struct Ball* ball);//���س�ʼ��Ϣ
void set_position(struct Player_IG* player, struct Ball* ball, int flag); //������������ı���Ա����λ��



#endif // !_game_h

