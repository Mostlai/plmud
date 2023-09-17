inherit ROOM;

void create()
{
        set("short", "松树林");
        set("long", @LONG
你走进了一片浓密的松树林，前面已经没有了道路，你必须不时
砍断横在你面前的枝桠。林内光线黑暗，静的能听到你自己的心跳声，
只有你踩在地上厚厚的松针和枯枝上发出的沙沙声。
LONG);
        set("outdoors", "wudujiao");

        set("exits", ([
                "east" : __DIR__"sl3",
                "southwest" : __DIR__"sl4",
                "west" : __DIR__"sl1",
                "southeast" : __DIR__"sl5",
        ]));

        setup();
        replace_program(ROOM);
}
