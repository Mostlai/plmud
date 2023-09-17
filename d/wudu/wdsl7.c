inherit ROOM;

void create()
{
        set("short", "五毒山路");
        set("long", @LONG
这里是五毒山中的山间小路，蜿蜒曲折盘旋而上。山路上寂静无
声，看不到一丝鸟兽的痕迹。你顺手拨开伸向路中的枝条，树枝忽然
一动，缩了回去，竟然是一条形似枯枝的毒蛇。前面现出一段绿瓦红
墙，好象是所大宅院。
LONG);
        set("outdoors", "wudujiao");

        set("exits", ([
                "east" : __DIR__"damen",
                "west" : __DIR__"wdsl6",
        ]));

        setup();
        replace_program(ROOM);
}