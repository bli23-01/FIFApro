#ifndef _gamepra_h
#define _gamepra_h
void gamepra();//��ϰģʽ���غ���
void show_screen_pra(int x0, int y0, struct Player_IG* player, struct Ball* ball, int page);//����ϰģʽ
void show_ball_pra(int x0, int y0, struct Ball* ball);//����
void show_player_pra(int x0, int y0, struct Player_IG* player, struct Ball* ball);//����Ա
void updateWithInput_pra(struct Player_IG* player, struct Ball* ball, struct GameKey* gameKey, int x0, int y0);//˫�˲ٿ�
void updateWithoutInput_pra(struct Player_IG* player, struct Ball* ball);//����������޹ص���Ա��Ϣ

#endif