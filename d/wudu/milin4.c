inherit ROOM;

void create()
{
    set("short", "黑森林");
    set("long", @LONG
这里就是有名的黑森林，四周均是茂密的丛林，巨大的古木遮天
蔽日，头顶看不到一片天空。脚下不时传来轻微的声响，似乎有什么
东西从草丛中游过，远处偶尔传来一阵野兽的嚎叫声。
LONG);
    set("outdoors", "wudujiao");

    set("exits", ([
        "in"    : __DIR__"langwo",
        "south" : __DIR__"milin5",
        "west"  : __DIR__"milin3",
        "north" : __DIR__"milin3",
    ]));
    set("objects", ([
        "/clone/npc/walker" : 1,
    ]));
    setup();
    replace_program(ROOM);
}
