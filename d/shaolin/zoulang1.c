// Room: /d/shaolin/zoulang1.c
// Date: YZC 96/01/19

inherit ROOM;

string look_writing();

void create()
{
    set("short", "走廊");
    set("long", @LONG
这里是禅房走廊。房顶一侧支在南面的高墙上，另一侧则与
北边般若堂的屋顶相连。彩梁画栋，连顶棚也用彩漆绘满了各种
飞天的图形，每幅画似乎都在诉说一个娓娓动人的佛经故事。南
边墙上题着一个字(writing)。往北通往般若堂。
LONG );
    set("exits", ([
        "east" : __DIR__"zoulang2",
        "north" : __DIR__"banruo1",
    ]));
    set("item_desc",([
        "writing"        :    (: look_writing :),
    ]));
    set("no_clean_up", 0);
    setup();
}

string look_writing()
{
    return
    "\n"
    "    尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘尘尘尘尘尘　　尘尘尘尘尘尘尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘尘　尘尘尘　　尘尘尘　尘尘尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘尘　尘尘尘　　尘尘尘　尘尘尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘　　尘尘尘　　尘尘尘　　尘尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘　　尘尘尘尘　　尘尘尘尘　　尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘　　尘尘尘尘　　尘尘尘尘　　尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘　　尘尘尘尘　　尘尘尘尘　　尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘　尘尘尘尘　　尘尘尘尘尘　尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘尘尘尘尘尘　　尘尘尘尘尘尘尘尘尘尘尘尘\n"
    "    尘尘尘尘　　　　　　　　　　　　　　　　　　尘尘尘尘\n"
    "    尘尘尘尘尘尘尘尘尘尘尘尘　　尘尘尘尘尘尘尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘尘尘尘尘尘　　尘尘尘尘尘尘尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘尘尘尘尘尘　　尘尘尘尘尘尘尘尘尘尘尘尘\n"
    "    尘尘尘尘尘尘尘尘尘尘尘尘　　尘尘尘尘尘尘尘尘尘尘尘尘\n"
    "    尘尘　　　　　　　　　　　　　　　　　　　　　　尘尘\n"
    "    尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘尘\n";
}
