## 人物属性char_prop

属性|数据类型|说明
---|---|---
"id"|(string)|人物的英语代号, an all_alphabetic string, from 3 to 10 chars.
"name"|(string)|人物的中文姓名.
"title"|(string)|人物的称呼.
"nick"|(string)|人物的外号.
"age"|(int)|人物的年龄.
"age_modify"|(int)|如何计算人物的年龄.
"jing", "eff_jing", "max_jing"|(int)|人物的精, 决定一个人的精神状况.
"qi", "eff_qi", "max_qi"|(int)|人物的气, 决定一个人的身体状况.
"str", "int", "con", "dex"|(int)|人物的主要天赋.
"per", "kar"|(int)|人物天赋容貌、福缘.
"jingli", "max_jingli"|(int)|人物所修练的精力, 影响一个人的精恢复速度.
"jiajing"|(int)|保留.
"neili", "max_neili"|(int)|人物所修练的内力, 影响一个人的气恢复速度.
"jiali"|(int)|人物所发出的内力.
"MKS", "PKS"|(int)|人物所杀死的 Monster 和 Player 统计.
"WIN", "LST"|(int)|人物的比武统计.
"combat_exp"|(int)|人物的作战经验.
"shen"|(int)|人物的神.
"xingyu", "max_xingyu"|(int)|人物的性欲.
"start_room"|(string)|人物进入游戏时的房间.
"family" |(mapping)|人物的师承门派等记录，当人物拜师或自创门派时就会设定这个属性

family其内容及定义如下：

    "family_name"： 门派名称
    "master_name"： 师父的中文名字
    "master_id"：   师父的英文代号
    "generation"：  人物在这个门派中的辈分，1 表示开山始祖，2 表示第二代弟子....等等。
    "title"：       人物在这个门派中的地位，如"掌门人"、"左护法"、等等，刚加入一个新门派的预设值是"弟子"。
    "priv"：        人物在门派中的权限旗号，一般弟子是 0，掌门人是 -1
    "enter_time"：  人物加入门派时 time() 所传回的值。
