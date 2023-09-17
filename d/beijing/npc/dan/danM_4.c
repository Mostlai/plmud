#include <ansi.h>

inherit COMBINED_ITEM;

void create()
{
    set_name(HIW "万寿丹" NOR, ({"wanshou dan", "dan"}));
    if (clonep())
        set_default_object(__FILE__);
    else {
        set("base_unit", "粒");
        //set("no_drop", "这样东西不能离开你。\n");
        //set("no_sell", "这样东西不能离开你。\n");
        //set("no_put", "这样东西不能放在那儿。\n");
        //set("no_get", "这样东西不能离开那儿。\n");
        //set("no_steal", "这样东西不能离开那儿。\n");
        //set("no_beg", "这样东西不能离开那儿。\n");
        set("base_value", 200);
        set("only_do_effect", 1);
    }
    setup();
    set_amount(1);
}

int do_effect(object me)
{
    mapping my;

    if (time() - me->query_temp("last_eat/dan(M)") < 30)
    {
            write("你刚服用过药，需药性发挥完效用以后才能继续服用。\n");
            return 1;
    }

    my = me->query_entire_dbase();

    me->set_temp("last_eat/dan(M)", time());

    if (me->improve_neili(5))
        message_vision(HIW "$N" HIW "吃下一粒万寿丹，感到内力"
                           "又雄厚了一些。\n" NOR, me);
    else
    {
        tell_object(me, "你感到内息澎湃，难以吸收丹药的效力。\n");
    }

    me->start_busy(3);
    add_amount(-1);
    if (query_amount() < 1)
        destruct(this_object());

    return 1;
}
