// xiaopu.c

inherit BOOK;

void create()
{
    set_name("箫谱", ({ "xiao pu", "pu" }));
    set_weight(500);
    if( clonep() )
        set_default_object(__FILE__);
    else {
        set("unit", "本");
        set("long", "这是一本薄薄的箫谱，记载了一些吹箫的方法。\n");
        set("value", 10);
        set("material", "paper");
        set("skill", ([
            "name":     "chuixiao-jifa",
            "jing_cost":    20,
            "difficulty":    20,
            "max_skill":    150,
                        "min_skill":    10,
        ]) );
    }
}
