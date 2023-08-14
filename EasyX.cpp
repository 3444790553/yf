// EasyX.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

//BLACK BLUE GREEN CYAN(青) RED MAGENTA（紫） BROWN YELLOW WHITE
#include <iostream>
#include<easyx.h>//    graphics.h
#include<stdio.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
int main()
{
	initgraph(800,600);//创建绘图窗体(宽度，高度)x,y
	cleardevice();
	RGB(251, 121, 222);//siwangbabifen
       for (int m = -400; m < 800; m++) {
		for (int n = -300; n < 600; n++) {
		putpixel(m, n,RGB(251, 161, 222));
		}
	}




	

//	mciSendString(L"open 正义联盟.mp3", nullptr, 0, nullptr);
//	mciSendString(L"play 正义联盟.mp3", nullptr, 0, nullptr);
	//mciSendString(L"pause 正义联盟.mp3", nullptr, 0, nullptr);
	//mciSendString(L"close 正义联盟.mp3", nullptr, 0, nullptr);
	   int q;
	   q = 0;
	 mciSendString(L"open 夜的第七章.mp3", nullptr, 0, nullptr);
	 mciSendString(L"play 夜的第七章.mp3", nullptr, 0, nullptr);
	 cout << "1983年小巷 12月晴朗" << endl;
	 cout << "夜的第七章" << endl;

	 cout << "打字机继续推向" << endl;
	 cout << "接近事实的那下一行石楠烟斗的雾" << endl;
	 cout << " 飘向枯萎的树" << endl;
	 cout << "沉默的对我哭诉" << endl;
	 cout << "贝克街旁的圆形广场" << endl;
	 cout << "盔甲骑士臂上" << endl;
	 cout << "鸢尾花的徽章 微亮" << endl;
	 cout << "无人马车声响 深夜的拜访" << endl;
	 cout << "邪恶在维多利亚的月光下" << endl;
	 cout << "血色的开场" << endl;
	 cout << "消失的手枪" << endl;
	 cout << "焦黑的手杖" << endl;
	 cout << "融化的蜡像" << endl;
	 cout << "谁不在场 珠宝箱上" << endl;
	 cout << "符号的假象" << endl;

	 cout << "矛盾通往 他堆砌的死巷" << endl;
	 cout << "证据被完美埋葬" << endl;
	 cout << "那嘲弄苏格兰警场 的嘴角上扬" << endl;
	 cout << "如果邪恶 是华丽残酷的乐章" << endl;
	 cout << "它的终场 我会 亲手写上" << endl;
	 cout << "晨曦的光 风干最后一行忧伤" << endl;
	 cout << "黑色的墨 染上安详" << endl;

	 cout << "事实只能穿向" << endl;
	 cout << "没有脚印的土壤" << endl;
	 cout << "突兀的细微花香" << endl;
	 cout << "打字机继续推向" << endl;
	 cout << "刻意显眼的服装" << endl;
	 cout << "每个人为不同的理由戴着面具说谎" << endl;
	 cout << "动机也只有一种名字那叫做欲望" << endl;
	 cout << "Far farther farther far far far" << endl;
	 cout << "Far farther farther far far" << endl;
	 cout << "越过人性的沼泽" << endl;
		 cout<<"谁真的可以不被弄脏"<<endl;
		 cout << "我们可以 遗忘 原谅" << endl;
		 cout << "但必须知道真相" << endl;
		 cout << "被移动过的铁床" << endl;

		 cout << "那最后一块图终于拼上\n"
			 << "我听见脚步声\n"
			 << "预料的软皮鞋跟\n"
			 << "他推开门晚风晃了煤油灯 一阵\n"
			 << "打字机停在凶手的名称 我转身\n"
			 << "西敏寺的夜空 开始沸腾\n"
			 << "在胸口绽放 艳丽的死亡\n"
			 << "我品尝这最后一口甜美的真相\n"
			 << "微笑回想正义只是安静的伸张\n"
			 << "提琴在泰晤士\n"
			 << "脚步声 预料的软皮鞋跟\n"
			 << "他推开门晚风晃了煤油灯 一阵\n"
			 << "打字机停在凶手的名称 我转身\n"
			 << "西敏寺的夜空 开始沸腾\n"
			 << "黑色的墨 染上安详\n"

			 << "如果邪恶 是华丽残酷的乐章\n"
			 << "它的终场 我会 亲手写上\n"
			 << "晨曦的光 风干最后一行忧伤\n"
			 << "黑色的墨 染上安详\n"
			 << endl;
	
	// while (q<6) {
	//	 Sleep(10000);
	//	 q++;
		
	// }
	// mciSendString(L"pause 夜的第七章.mp3", nullptr, 0, nullptr);
//	 mciSendString(L"close 夜的第七章.mp3", nullptr, 0, nullptr);











setorigin(400, 300);//将物理坐标中心设为逻辑坐标原点
setaspectratio(1, -1);//（x,y）翻转y轴
    line(0, 300, 0, -300);
	     line(-400, 0, 400, 0);
   circle(0, 0, 100);//画圆（x,y,r）
	putpixel(0, 0,BLUE);//(画点)
	int x, y;
	for (int i = 0; i < 1000; i++) {
	x = rand() % (801) - 400;
	y = rand() % (601) - 300;
	putpixel(x, y, RED);
	}
	for (int m = -200; m < 200; m++) {
for (int n = -200; n < 200; n++) {
	putpixel(m, n, RED);
	}
}
	 putpixel(-200, 200, RED);
	putpixel(-200, -200, RED);
	putpixel(200, 200, RED);
	putpixel(200, -200, RED);
	       line(-200, 200, 200, -200);
line(200, 200, -200, -200);
for (int i = 5; i < 120; i = i + 16) {   circle(0, 0, i);}
    rectangle(-200, 200, 200, -200);//左上右下xy矩形
	roundrect(-200, 100, 200, -100,200,100);//圆角矩形
    ellipse(-200, 100, 200, -100);//椭圆
	pie(-200, 100, 200, -100,3.14/6,3.14/2);//扇形
   arc(-200, 100, 200, -100,3.14/6,3.14/2);//圆弧
getchar();//暂时阻塞程序等待用户按键再关闭
	cleardevice();
closegraph();//关闭绘图窗体 
	
	return 0;

  
}

