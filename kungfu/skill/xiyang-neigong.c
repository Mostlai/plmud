// xiyang-neigong 西洋内功

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int query_neili_improve(object me)
{
        int lvl;

        lvl = (int)me->query_skill("xiyang-shengong", 1);
        return lvl * lvl * 15 * 4 / 100 / 200;
}

int valid_learn(object me)
{
    if ((int)me->query_skill("force", 1) < 40)
        return notify_fail("你的基本内功火候还不够，还不能学习西洋内功。\n");

    return ::valid_learn(me);
}

int practice_skill(object me)
{
    return notify_fail("西洋内功只能用学(learn)的来增加熟练度。\n");
}

string exert_function_file(string func)
{
        return __DIR__"xiyang-neigong/" + func;
}
