#include <ansi.h>
inherit ROOM;
string* npcs = ({
        "/clone/worm/shishixie",
        "/clone/worm/tieguxie",
        "/clone/worm/heiguafu",
        "/clone/worm/jinxianwugong",
        "/clone/worm/baizuwugong",
        "/clone/worm/datouwugong",
        "/clone/worm/huibeixie",
});

void create()
{
        set("short", HIR "千毒窟" NOR);
        set("long", @LONG
这里是一个天然形成的石洞，里面深邃广大。洞顶悬挂着许多钟
乳石，不时传来几声滴答的水声。走在洞中，洞内阴暗潮湿，身旁忽
然传来一阵“咝咝”的声音。
LONG);

        set("exits", ([
                "south" : __DIR__"qiandu1",
                "north" : __DIR__"qiandu3",
                "west" : __DIR__"qiandu4",
                "east" : __DIR__"qiandu5",
        ]));
        set("objects", ([
                npcs[random(sizeof(npcs))] : 1,
                npcs[random(sizeof(npcs))] : 1,
                npcs[random(sizeof(npcs))] : 1,
                npcs[random(sizeof(npcs))] : 1,
        ]));

        setup();
        replace_program(ROOM);
}
