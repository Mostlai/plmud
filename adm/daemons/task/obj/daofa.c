//TASK物品
//瞎三笨制作


#include <ansi.h>

#define  SET_TASK   "/adm/daemons/task/set_task"

inherit ITEM;


void create()
{
        set_name(WHT "五虎刀法" NOR, ({ "daofa"}));
        if (clonep())
                destruct(this_object());
        else {
                set("unit", "本");
                set("owner_id", "mao shiba");
                set("owner", "茅十八");

                set("value",10);
                set("no_sell",1);
                set("no_put",1);
        }
        setup();
}

void init()
{
    add_action("do_give","give");
}


int do_give(string arg)

{

    object me,ob;

    ob = this_object();
    me = this_player();

    return call_other(SET_TASK, "do_return", ob, me, arg);

}


string long()
{
        return "这是" + query("owner") + "的" + query("name") +
               "(" + query("id") + ")。\n";

}
