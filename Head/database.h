#ifndef _DATA_H_
#define _DATA_H_

typedef struct userinfo
{
	char user[15];           //6-12λ���˻� 
	char password[20];       //8-16λ������
	char phonenum[15];		//11λ,�绰���� 
	char money[7];//���

}USER;	//��װ�û���Ϣ

typedef struct playerinfo
{
	char player_num[3];  //��Ա���º�
	char name[4];       //����
	char speed[2];      //�ٶ�
	char control[2];   //����
	char power[2];		//����
	char defend[2];		//����
	char allA[3];// ���ڼ���Ƿ������ 
	int all;     // ������ֵ
}Player; 
/*struct gamestruct
{
	int nation1;
	int nation2;
	int time;
};*/
#endif
