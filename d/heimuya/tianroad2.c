inherit ROOM;

void create()
{
        set("short", "乱石小径");
        set("long", @LONG
这是一处乱石怪异的小径，向西再迂回转东北可以通往平
安州。据说前方经常有野兽出没，不可久留。南方不远有一座
建筑，颇为气派。
LONG);
        set("outdoors", "heimuya");
        set("exits", ([
                "south" : __DIR__"tiangate",
                "west" : __DIR__"tianroad1",
        ]));
        setup();
        replace_program(ROOM);
}
