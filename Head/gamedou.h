#ifndef  _gamedou_h
#define  _gamedou_h

int game_dou(int nation1, int nation2, int time, USER* u);//˫����Ϸ���غ���
void init_info_dou(struct Player_IG* player, struct Ball* ball, int nation1, int nation2);//����˫����Ա��Ϣ
void show_screen_dou(int x0, int y0, struct Player_IG* player, struct Ball* ball, int page, clock_t derta, int time);//����Ļ
void updateWithInput_dou(struct Player_IG* player, struct Ball* ball, struct GameKey* gameKey, int x0, int y0);//�ٿغ���
void updateWithoutInput_dou(struct Player_IG* player, struct Ball* ball);//˫����Ϸ������޹ص���Ϣ����
void player_magicmove_dou(struct Player_IG* player, struct Ball* ball);//˫����Ϸ����ԱAI

#endif // ! _game_double_h

