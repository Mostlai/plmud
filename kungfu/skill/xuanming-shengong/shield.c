// shield.c 护体神功

#include <ansi.h>

inherit F_CLEAN_UP;

void remove_effect(object me, int amount);

int exert(object me, object target)
{
        int skill;

        if (target != me)
                return notify_fail("你只能用玄冥神功来提升自己的防御力。\n");

        if ((int)me->query("neili") < 100)
                return notify_fail("你的内力不够。\n");

        if ((int)me->query_skill("xuanming-shengong", 1) < 100)
                return notify_fail("你的玄冥神功修为不够。\n");

        if ((int)me->query_temp("shield"))
                return notify_fail("你已经在运功中了。\n");

        skill = me->query_skill("xuanming-shengong", 1);
        me->add("neili", -100);
        me->receive_damage("qi", 0);

        message_combatd(HIW "$N" HIW "深深吸了一口气，缓缓吐出，一股白烟"
                        "冉冉透体而出，盘旋笼罩了全身。\n" NOR, me);

        me->add_temp("apply/armor", skill / 2);
        me->add_temp("apply/strike", skill / 8);
        me->set_temp("shield", 1);

        me->start_call_out((: call_other, __FILE__, "remove_effect", me, skill / 2 :), skill);

        if (me->is_fighting()) me->start_busy(2);

        return 1;
}

void remove_effect(object me, int amount)
{
        if (me->query_temp("shield"))
        {
                me->add_temp("apply/armor", -amount);
                me->add_temp("apply/strike", -amount / 4);
                me->delete_temp("shield");
                tell_object(me, "你的玄冥神功运行完毕，将内力收回丹田。\n");
        }
}
