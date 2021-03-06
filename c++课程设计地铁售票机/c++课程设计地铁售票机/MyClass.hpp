//
//  MyClass.hpp
//  c++课程设计地铁售票机
//
//  Created by apple on 2018/5/27.
//  Copyright © 2018年 apple. All rights reserved.
//

#ifndef MyClass_hpp
#define MyClass_hpp
//1号线。地铁广州东站 地铁体育中心站 地铁体育西路站 地铁杨箕站 地铁东山口站 地铁烈士陵园站 地铁农讲所站 地铁公园前站 地铁西门口站 地铁陈家祠站 地铁长寿路站 地铁黄沙站 地铁芳村站 地铁花地湾站 地铁坑口站 地铁西朗站
//2号线。广州南站 石壁 会江 南浦 洛溪 南洲 东晓南 江泰路 昌岗 江南西 市二宫 海珠广场 公园前 纪念堂 越秀公园 广州火车站 三元里 飞翔公园 白云公园 白云文化广场 萧岗 江夏 黄边 嘉禾望岗
//3号线。地铁天河客运站→地铁五山站→地铁华师站→地铁岗顶站→地铁石牌桥站→地铁体育西路站→地铁珠江新城站→地铁赤岗塔站→地铁客村站→地铁大塘站→地铁沥滘站→地铁厦滘站→地铁大石站→地铁汉溪长隆站→地铁市桥站→地铁番禺广场站
//3号线北延段。机场北（2号航站楼） 机场南（1号航站楼） 高增 人和 龙归 嘉禾望岗 白云大道北 永泰 同和 京溪南方医院 梅花园 燕塘 广州东站 林和西 体育西路
//4号线。黄村 车陂 车陂南 万胜围 官洲 大学城北 大学城南 新造 石碁 海傍 低涌 东涌 庆盛 黄阁汽车城 黄阁 蕉门 金洲 飞沙角 广隆 大涌 塘坑 南横 南沙客运港
//5号线。滘口 坦尾 中山八 西场 西村 广州火车站 小北 淘金 区庄 动物园 杨箕 五羊邨 珠江新城 猎德 潭村 员村 科韵路 车陂南 东圃 三溪 鱼珠 大沙地 大沙东 文冲
//6号线。浔峰岗 横沙 沙贝 河沙 坦尾 如意坊 黄沙 文化公园 一德路 海珠广场 北京路 团一大广场 东湖 东山口 区庄 黄花岗 沙河顶 天平架 燕塘 天河客运站 长湴 植物园 龙洞 柯木塱 高塘石 黄陂 金峰 暹岗 苏元 萝岗 香雪
//7号线。广州南站 石壁 谢村 钟村 汉溪长隆 南村万博 员岗 板桥 大学城南
//8号线。凤凰新村 沙园 宝岗大道 昌岗 晓港 中大 鹭江 客村 赤岗 磨碟沙 新港东 琶洲 万胜围
//9号线。飞鹅岭 花都汽车城 广州北站 花城路 花果山公园 花都广场 马鞍山公园 莲塘 清埗 高增
//广佛线。新城东 东平 世纪莲 澜石 魁奇路 季华园 同济路 祖庙 普君北路 朝安 桂城 南桂路 礌岗 千灯湖 金融高新区 龙溪 菊树 西朗 鹤洞 沙涌 沙园 燕岗
//APM线。林和西 体育中心南 天河南 黄埔大道 妇儿中心 花城大道 大剧院（歌剧院） 海心沙 广州塔（赤岗塔）
//13号线。鱼珠 裕丰围 双岗 南海神庙 夏园 南岗 沙村 白江 新塘 官湖 新沙
//知识城线。新和 知识城北{0,未开通}, 马头庄{0,未开通}, 知识城 知识城南{0,未开通}, 康大{0,未开通}, 镇龙北 镇龙
#include<iostream>
using namespace std;


string a[]={"",
"西朗",
"坑口",
"花地湾",
"芳村",
"黄沙",
"长寿路",
"陈家祠",
"西门口",
"公园前",
"农讲所",
"烈士陵园",
"东山口",
"杨箕",
"体育西路",
"体育中心",
"广州东站",
"万胜围",
"琶洲",
"新港东",
"磨碟沙",
"赤岗",
"客村",
"鹭江",
"中大",
"晓港",
"江南西",
"市二宫",
"海珠广场",
"公园前",
"纪念堂",
"越秀公园",
"广州火车站",
"三元里",
"广州东站",
"林和西",
"体育西路",
"珠江新城",
"赤岗塔",
"客村",
"大塘",
"沥滘",
"厦滘",
"大石",
"汉溪长隆",
"市桥",
"番禺广场",
"天河客运站",
"五山",
"华师",
"岗顶",
"石牌桥",
"车陂南",
"万胜围",
"官洲",
"大学城北",
"大学城南",
"新造",
"石碁",
"海傍",
"低涌",
"东涌",
"黄阁汽车城",
"黄阁",
"蕉门",
"金洲",
"滘口",
"坦尾",
"中山八",
"西场",
"西村",
"广州火车站",
"小北",
"淘金",
"区庄",
"动物园",
"杨箕",
"五羊邨",
"珠江新城",
"猎德",
"潭村",
"员村",
"科韵路",
"车陂南",
"东圊",
"三溪",
"鱼珠",
"大沙地",
"大沙东",
"文冲"};


int data[100][90]={
{0},
{0,2,2,2,2,3,3,3,4,4,4,4,5,5,5,5,5,7,6,6,6,6,5,5,5,5,5,4,4,4,4,4,4,5,5,5,5,5,5,5,6,6,7,7,7,8,8,6,6,6,5,5,6,7,7,7,7,8,9,9, 10, 10, 11, 11, 11, 12, 6, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7},
 {0,2,2,2,2,2,3,3,3,3,4,4,4,5,5,5,5,6,6,6,6,5,5,5,5,5,4,4,4,3,4,4,4,4,5,5,5,5,5,5,6,6,6,7,7,8,8,6,6,5,5,5,6,6,7,7,7,8,9, 9, 9, 10, 11, 11, 11, 11, 5, 5, 5, 5, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7},
 {0,2,2,2,2,2,2,3,3,3,3,4,4,4,5,5,5,6,6,6,5,5,5,5,5,4,4,4,3,3,3,4,4,4,5,5,5,5,5,5,5,6,6,6,7,8,8,6,5,5,5,5,6,6,7,7,7,7,9, 9, 9, 10, 11, 11, 11, 11, 5, 5, 5, 4, 4, 4, 4, 5, 5, 5, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7},
 {0,2,2,2,2,2,2,2,3,3,3,3,4,4,4,5,5,6,6,5,5,5,5,5,4,4,4,3,3,3,3,3,4,4,5,5,4,5,5,5,5,6,6,6,7,7,8,6,5,5,5,5,6,6,7,7,7,7,8, 9, 9, 10, 10, 11, 11, 11, 5, 5, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7},
 {0,3,2,2,2,2,2,2,2,2,3,3,3,4,4,4,5,6,5,5,5,5,5,4,4,4,3,3,3,2,3,3,3,3,5,4,4,4,5,5,5,5,6,6,7,7,8,5,5,5,5,4,5,6,6,7,7,7,8, 9, 9, 9, 10, 10, 11, 11, 5, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7},
 {0,3,3,2,2,2,2,2,2,2,3,3,3,3,4,4,4,6,5,5,5,5,4,4,4,3,3,3,3,2,2,3,3,3,4,4,4,4,4,4,5,5,6,6,6,7,8,5,5,5,4,4,5,6,6,6,7,7,8, 8, 9, 9, 10, 10, 11, 11, 5, 4, 4, 4, 3, 3, 3, 4, 4, 4, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7},
 {0,3,3,3,2,2,2,2,2,2,2,3,3,3,3,4,4,5,5,5,5,4,4,4,3,3,3,3,2,2,2,2,3,3,4,4,3,4,4,4,5,5,5,6,6,7,8,5,5,4,4,4,5,5,6,6,7,7,8, 8, 9, 9, 10, 10, 11, 11, 4, 4, 4, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7},
 {0,4,3,3,3,2,2,2,2,2,2,2,3,3,3,3,4,5,5,5,4,4,4,4,3,3,3,2,2,2,2,2,2,3,4,4,3,4,4,4,4,5,5,6,6,7,7,5,4,4,4,4,5,5,6,6,6,7,8, 8, 9, 9, 10, 10, 10, 11, 4, 4, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6},
 {0,4,3,3,3,2,2,2,2,2,2,2,2,3,3,3,4,5,5,5,4,4,4,3,3,3,2,2,2,2,2,2,2,2,4,3,3,3,4,4,4,5,5,5,6,7,7,5,4,4,4,3,5,5,6,6,6,7,8, 8, 8, 9, 10, 10, 10, 11, 4, 4, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6},
 {0,4,4,3,3,3,3,2,2,2,2,2,2,2,3,3,3,5,5,5,4,4,4,4,3,3,3,2,2,2,2,2,2,3,3,3,3,3,3,4,4,5,5,5,6,7,7,5,4,4,3,3,5,5,6,6,6,7,8, 8, 8, 9, 10, 10, 10, 11, 4, 4, 3, 3, 3, 2, 3, 3, 3, 3, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6},
 {0,4,4,4,3,3,3,3,2,2,2,2,2,2,2,3,3,5,5,4,4,4,3,4,3,3,3,3,2,2,2,2,3,3,3,3,2,3,3,3,4,5,5,5,6,7,7,4,4,3,3,3,4,5,6,6,6,7,8, 8, 8, 9, 10, 10, 10, 10, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6},
 {0,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,3,5,4,4,4,3,3,3,4,3,3,3,3,2,3,3,3,3,3,2,2,3,3,3,4,4,5,5,6,7,7,4,3,3,3,3,4,5,5,6,6,6,8, 8, 8, 9, 9, 10, 10, 10, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6},
 {0,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,5,4,4,3,3,3,3,3,4,4,3,3,3,3,3,3,4,2,2,2,2,3,3,3,4,4,5,5,6,7,4,3,3,2,2,4,5,5,5,6,6,7, 8, 8, 8, 9, 9, 10, 10, 5, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6},
 {0,5,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,4,4,3,3,3,2,3,3,3,4,4,3,3,3,3,4,4,2,2,2,2,2,2,3,4,4,5,5,6,7,3,3,2,2,2,4,4,5,5,5,6,7, 8, 8, 8, 9, 9, 10, 10, 5, 5, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5},
 {0,5,5,5,5,4,4,4,3,3,3,3,2,2,2,2,2,4,4,4,3,3,3,3,3,4,4,4,4,3,3,4,4,4,2,2,2,2,2,3,3,4,4,5,5,6,7,4,3,3,2,2,4,4,5,5,6,6,7, 8, 8, 8, 9, 9, 10, 10, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6},
 {0,5,5,5,5,5,4,4,4,4,3,3,3,2,2,2,2,5,4,4,4,3,3,3,4,4,4,4,4,4,4,4,4,5,2,2,2,2,3,3,4,4,5,5,6,7,7,4,3,3,3,2,4,5,5,5,6,6,8, 8, 8, 9, 9, 10, 10, 10, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 2, 3, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6},
 {0,7,6,6,6,6,6,5,5,5,5,5,5,5,4,4,5,2,2,2,3,3,3,3,4,4,4,5,5,5,5,5,6,6,5,4,4,4,3,3,4,4,5,5,6,7,7,5,5,5,5,5,2,2,2,3,3,4,6, 6, 6, 7, 8, 8, 8, 9, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 2, 2, 2, 3, 3, 4, 4, 4},
 {0,6,6,6,6,5,5,5,5,5,5,5,4,4,4,4,4,2,2,2,2,2,3,3,3,4,4,4,5,5,5,5,5,5,4,4,4,3,3,3,3,4,4,5,5,6,7,5,5,5,4,4,2,2,3,3,4,4,6, 6, 7, 7, 8, 8, 9, 9, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 4, 4, 3, 3, 2, 3, 3, 4, 4, 4, 5},
 {0,6,6,6,5,5,5,5,5,5,5,4,4,4,3,4,4,2,2,2,2,2,2,3,3,3,4,4,4,5,5,5,5,5,4,4,3,3,3,2,3,4,4,5,5,6,7,5,5,4,4,4,3,2,3,3,4,5,6, 7, 7, 7, 8, 8, 9, 9, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 4, 5, 5},
 {0,6,6,5,5,5,5,5,4,4,4,4,4,3,3,3,4,3,2,2,2,2,2,2,3,3,3,4,4,4,4,5,5,5,4,3,3,3,2,2,3,3,4,4,5,6,6,5,4,4,4,3,3,3,4,4,4,5,6, 7, 7, 8, 8, 9, 9, 9, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 4, 5, 5, 5},
 {0,6,5,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,3,3,3,4,4,4,4,5,5,3,3,3,3,2,2,2,3,4,4,5,6,6,5,4,4,3,3,3,3,4,4,5,5,7, 7, 7, 8, 8, 9, 9, 9, 6, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4, 4, 4, 5, 5, 5},
 {0,5,5,5,5,5,4,4,4,4,4,3,3,3,2,3,3,3,3,2,2,2,2,2,2,2,3,3,3,4,4,4,4,5,3,3,2,2,2,2,2,3,3,4,4,5,6,4,4,3,3,3,4,3,4,4,5,5,7, 7, 7, 8, 9, 9, 9, 9, 6, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5},
 {0,5,5,5,5,4,4,4,4,3,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,3,3,3,4,4,4,4,3,3,3,2,2,2,2,3,3,4,5,6,6,5,4,4,3,3,4,3,4,5,5,5,7, 7, 7, 8, 9, 9, 9, 10, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 4, 3, 4, 4, 5, 5, 5, 5, 6},
 {0,5,5,5,4,4,4,3,3,3,3,3,4,3,3,3,4,4,3,3,3,2,2,2,2,2,2,2,3,3,3,3,4,4,4,4,3,3,3,2,3,3,4,4,5,6,7,5,4,4,4,4,4,4,5,5,5,6,7, 7, 8, 8, 9, 9, 10, 10, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6},
 {0,5,5,4,4,4,3,3,3,3,3,3,3,4,3,4,4,4,4,3,3,3,2,2,2,2,2,2,2,3,3,3,3,4,4,4,3,3,3,2,3,4,4,5,5,6,7,5,5,4,4,4,5,4,5,5,6,6,7, 8, 8, 8, 9, 9, 10, 10, 5, 5, 4, 4, 4, 3, 4, 4, 4, 4, 4, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6},
 {0,5,4,4,4,3,3,3,3,2,3,3,3,4,4,4,4,4,4,4,3,3,3,2,2,2,2,2,2,2,3,3,3,3,4,4,4,3,3,3,3,4,4,5,5,6,7,5,5,5,4,4,5,4,5,5,6,6,7, 8, 8, 8, 9, 9, 10, 10, 5, 4, 4, 4, 3, 3, 4, 4, 4, 4, 3, 4, 3, 4, 4, 5, 4, 5, 5, 5, 6, 6, 6, 6},
 {0,4,4,4,3,3,3,3,2,2,2,3,3,3,4,4,4,5,4,4,4,3,3,3,2,2,2,2,2,2,2,2,3,3,4,4,4,4,3,3,4,4,5,5,6,7,7,5,5,4,4,4,5,5,5,6,6,6,8, 8, 8, 9, 9, 10, 10, 10, 4, 4, 4, 3, 3, 3, 3, 4, 4, 3, 3, 4, 4, 4, 4, 5, 4, 5, 5, 5, 6, 6, 6, 6},
 {0,4,4,3,3,3,3,2,2,2,2,2,3,3,3,4,4,5,5,4,4,4,3,3,3,2,2,2,2,2,2,2,3,3,4,4,3,4,4,3,4,5,5,5,6,7,7,5,5,4,4,4,5,5,5,6,6,6,8, 8, 8, 9, 10, 10, 10, 10, 4, 4, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 4, 5, 5, 6, 6, 6, 6, 6},
 {0,4,3,3,3,2,2,2,2,2,2,2,2,3,3,3,4,5,5,5,4,4,4,3,3,3,2,2,2,2,2,2,2,2,4,3,3,3,4,4,4,5,5,5,6,7,7,5,4,4,4,3,5,5,6,6,6,7,8, 8, 8, 9, 10, 10, 10, 11, 4, 4, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6},
 {0,4,4,3,3,3,2,2,2,2,2,2,3,3,3,3,4,5,5,5,4,4,4,4,3,3,3,2,2,2,2,2,2,2,4,4,3,4,4,4,4,5,5,6,6,7,7,5,4,4,4,4,5,5,6,6,6,7,8, 8, 9, 9, 10, 10, 10, 11, 4, 3, 3, 3, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6},
 {0,4,4,4,3,3,3,2,2,2,2,2,3,3,3,4,4,5,5,5,5,4,4,4,3,3,3,2,2,2,2,2,2,2,4,4,3,4,4,4,5,5,5,6,6,7,7,5,5,4,4,4,5,5,6,6,7,7,8, 8, 9, 9, 10, 10, 10, 11, 3, 3, 3, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 4, 5, 5, 6, 6, 6, 6, 7},
 {0,4,4,4,4,3,3,3,2,2,2,3,3,3,4,4,4,6,5,5,5,5,4,4,4,3,3,3,3,2,2,2,2,2,4,4,4,4,4,4,5,5,5,6,6,7,8,5,5,5,4,4,5,6,6,6,7,7,8, 8, 9, 9, 10, 10, 11, 11, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 4, 5, 5, 6, 6, 6, 6, 7},
 {0,5,4,4,4,3,3,3,3,2,3,3,3,4,4,4,5,6,5,5,5,5,5,4,4,4,3,3,3,2,2,2,2,2,5,4,4,4,5,5,5,5,6,6,7,7,8,5,5,5,5,4,5,6,6,7,7,7,8, 9, 9, 9, 10, 10, 11, 11, 4, 3, 3, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7},
 {0,5,5,5,5,5,4,4,4,4,3,3,3,2,2,2,2,5,4,4,4,3,3,3,4,4,4,4,4,4,4,4,4,5,2,2,2,2,3,3,4,4,5,5,6,7,7,4,3,3,3,2,4,5,5,5,6,6,8, 8, 8, 9, 9, 10, 10, 10, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 2, 3, 2, 3, 3, 3, 3, 4, 5, 5, 5, 5, 6, 6},
 {0,5,5,5,5,4,4,4,4,3,3,3,2,2,2,2,2,4,4,4,3,3,3,3,4,4,4,4,4,3,4,4,4,4,2,2,2,2,2,3,3,4,4,5,5,6,7,4,3,3,2,2,4,4,5,5,6,6,7, 8, 8, 8, 9, 9, 10, 10, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6},
 {0,5,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,4,4,3,3,3,2,3,3,3,4,4,3,3,3,3,4,4,2,2,2,2,2,2,3,4,4,5,5,6,7,3,3,2,2,2,4,4,5,5,5,6,7, 8, 8, 8, 9, 9, 10, 10, 5, 5, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5},
 {0,5,5,5,5,4,4,4,4,3,3,3,3,2,2,2,2,4,3,3,3,3,2,2,3,3,3,4,4,3,4,4,4,4,2,2,2,2,2,2,3,3,4,4,5,6,7,4,3,3,2,2,3,4,5,5,5,6,7, 7, 8, 8, 9, 9, 10, 10, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 2, 3, 4, 4, 4, 5, 5, 5},
 {0,5,5,5,5,5,4,4,4,4,3,3,3,3,2,2,3,3,3,3,2,2,2,2,3,3,3,3,4,4,4,4,4,5,3,2,2,2,2,2,2,3,3,4,5,6,6,4,3,3,3,3,4,3,4,5,5,5,7, 7, 7, 8, 9, 9, 9, 10, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5},
 {0,5,5,5,5,5,4,4,4,4,4,3,3,3,2,3,3,3,3,2,2,2,2,2,2,2,3,3,3,4,4,4,4,5,3,3,2,2,2,2,2,3,3,4,4,5,6,4,4,3,3,3,4,3,4,4,5,5,7, 7, 7, 8, 9, 9, 9, 9, 6, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5},
 {0,6,6,5,5,5,5,5,4,4,4,4,4,3,3,3,4,4,3,3,3,2,2,2,3,3,3,4,4,4,4,5,5,5,4,3,3,3,2,2,2,2,3,3,4,5,6,5,4,4,4,3,4,4,5,5,5,6,7, 7, 8, 8, 9, 9, 9, 10, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3, 3, 4, 3, 4, 4, 5, 5, 5, 6, 6},
 {0,6,6,6,6,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,3,3,3,3,3,4,4,4,5,5,5,5,5,5,4,4,4,3,3,3,2,2,2,3,3,5,5,5,5,4,4,4,5,4,5,5,6,6,7, 8, 8, 8, 9, 9, 10, 10, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6},
 {0,7,6,6,6,6,6,5,5,5,5,5,5,4,4,4,5,5,4,4,4,4,3,3,4,4,4,5,5,5,5,5,5,6,5,4,4,4,3,3,3,2,2,2,3,4,5,5,5,5,5,5,5,5,5,6,6,6,8, 8, 8, 9, 9, 10, 10, 10, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6},
 {0,7,7,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,5,5,5,4,4,4,3,3,2,2,2,4,5,6,5,5,5,5,5,5,6,6,6,7,8, 8, 8, 9, 10, 10, 10, 11, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7},
 {0,7,7,7,7,7,6,6,6,6,6,6,6,5,5,5,6,6,5,5,5,5,4,5,5,5,5,6,6,6,6,6,6,7,6,5,5,5,5,4,4,3,3,2,2,3,4,6,6,6,6,5,6,6,6,6,7,7,8, 8, 9, 9, 10, 10, 11, 11, 7, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 6, 5, 6, 6, 6, 7, 7, 7, 7},
 {0,8,8,8,7,7,7,7,7,7,7,7,7,6,6,6,7,7,6,6,6,6,5,6,6,6,6,7,7,7,7,7,7,7,7,6,6,6,6,5,5,5,4,4,3,2,2,7,7,7,7,6,7,7,7,7,7,8,9, 9, 10, 10, 11, 11, 11, 12, 8, 8, 8, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 7, 6, 7, 7, 7, 7, 8, 8, 8},
 {0,8,8,8,8,8,8,8,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,7,7,7,7,7,7,7,7,8,8,7,7,7,7,6,6,6,5,5,5,4,2,2,8,7,7,7,7,7,7,8,8,8,8,9, 10, 10, 11, 11, 12, 12, 12, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8},
 {0,6,6,6,6,5,5,5,5,5,5,4,4,4,3,4,4,5,5,5,5,5,4,5,5,5,5,5,5,5,5,5,5,5,4,4,3,4,4,4,5,5,5,6,6,7,8,2,2,2,3,3,5,5,6,6,7,7,8, 8, 9, 9, 10, 10, 11, 11, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 5, 5, 6, 6, 6, 6, 7},
 {0,6,6,5,5,5,5,5,4,4,4,4,3,3,3,3,3,5,5,5,4,4,4,4,4,5,5,5,5,4,4,5,5,5,3,3,3,3,3,4,4,5,5,5,6,7,7,2,2,2,2,2,5,5,6,6,6,7,8, 8, 8, 9, 10, 10, 10, 11, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6},
 {0,6,5,5,5,5,5,4,4,4,4,3,3,3,2,3,3,5,5,4,4,4,3,4,4,4,5,4,4,4,4,4,5,5,3,3,2,3,3,3,4,4,5,5,6,7,7,2,2,2,2,2,4,5,5,6,6,6,8, 8, 8, 9, 10, 10, 10, 10, 6, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 4, 5, 5, 5, 5, 6, 6},
 {0,5,5,5,5,5,4,4,4,4,3,3,3,2,2,2,3,5,4,4,4,3,3,3,4,4,4,4,4,4,4,4,4,5,3,2,2,2,3,3,4,4,5,5,6,7,7,3,2,2,2,2,4,5,5,6,6,6,8, 8, 8, 9, 9, 10, 10, 10, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 3, 2, 3, 3, 3, 3, 4, 5, 5, 5, 5, 6, 6},
 {0,5,5,5,5,4,4,4,4,3,3,3,3,2,2,2,2,5,4,4,3,3,3,3,4,4,4,4,4,3,4,4,4,4,2,2,2,2,3,3,3,4,5,5,5,6,7,3,2,2,2,2,4,5,5,5,6,6,7, 8, 8, 9, 9, 10, 10, 10, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6},
 {0,6,6,6,6,5,5,5,5,5,5,4,4,4,4,4,4,2,2,3,3,3,4,4,4,5,5,5,5,5,5,5,5,5,4,4,4,3,4,4,4,5,5,5,6,7,7,5,5,4,4,4,2,2,3,3,4,4,6, 6, 7, 7, 8, 8, 9, 9, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 4},
 {0,7,6,6,6,6,6,5,5,5,5,5,5,5,4,4,5,2,2,2,3,3,3,3,4,4,4,5,5,5,5,5,6,6,5,4,4,4,3,3,4,4,5,5,6,7,7,5,5,5,5,5,2,2,2,3,3,4,6, 6, 6, 7, 8, 8, 8, 9, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 2, 2, 2, 3, 3, 4, 4, 4},
 {0,7,7,7,7,6,6,6,6,6,6,6,5,5,5,5,5,2,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,5,5,5,5,4,4,5,5,5,6,6,7,8,6,6,5,5,5,3,2,2,2,2,3,5, 5, 6, 7, 7, 8, 8, 8, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 4, 4, 4, 5, 5},
 {0,7,7,7,7,7,6,6,6,6,6,6,6,5,5,5,5,3,3,3,4,4,4,5,5,5,5,6,6,6,6,6,6,7,5,5,5,5,5,4,5,5,6,6,6,7,8,6,6,6,6,5,3,3,2,2,2,3,5, 5, 6, 6, 7, 7, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 3, 4, 4, 4, 5, 5, 5},
 {0,7,7,7,7,7,7,7,6,6,6,6,6,6,5,6,6,3,4,4,4,5,5,5,5,6,6,6,6,6,6,7,7,7,6,6,5,5,5,5,5,6,6,6,7,7,8,7,6,6,6,6,4,3,2,2,2,2,5, 5, 5, 6, 7, 7, 7, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 5, 5, 5, 5, 6},
 {0,8,8,7,7,7,7,7,7,7,7,7,6,6,6,6,6,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,6,6,6,6,5,5,6,6,6,7,7,8,8,7,7,6,6,6,4,4,3,3,2,2,4, 4, 5, 6, 7, 7, 7, 7, 8, 8, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 4, 5, 5, 5, 5, 6, 6},
 {0,9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 8, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 9, 9, 8, 8, 8, 8, 7, 6, 6, 5, 5, 5, 4, 2, 2, 3, 4, 5, 5, 6, 6, 9, 9, 9, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 7, 7, 7, 7, 7},
 {0,9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 6, 6, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 7, 7, 7, 7, 8, 8, 8, 8, 9, 10, 8, 8, 8, 8, 8, 6, 6, 5, 5, 5, 4, 2, 2, 2, 3, 5, 5, 5, 6, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 6, 7, 7, 7, 7, 7, 8},
 {0,10, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 6, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 8, 8, 8, 8, 7, 7, 8, 8, 8, 8, 9, 10, 10, 9, 8, 8, 8, 8, 7, 6, 6, 6, 5, 5, 3, 2, 2, 2, 4, 4, 5, 5, 10, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8},
 {0,10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 9, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 10, 11, 9, 9, 9, 9, 9, 7, 7, 7, 6, 6, 6, 4, 3, 2, 2, 3, 3, 4, 5, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 7, 7, 7, 8, 8, 8, 8, 8},
 {0,11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 11, 11, 10, 10, 10, 9, 9, 8, 8, 7, 7, 7, 7, 5, 5, 4, 3, 2, 2, 3, 3, 11, 11, 11, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 9, 9, 9, 9},
 {0,11, 11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 10, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 11, 12, 10, 10, 10, 10, 10, 8, 8, 8, 7, 7, 7, 5, 5, 4, 3, 2, 2, 2, 3, 11, 11, 11, 11, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 8, 8, 8, 9, 9, 9, 9, 9},
 {0,11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 8, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 10, 10, 10, 10, 9, 9, 9, 10, 10, 10, 11, 11, 12, 11, 10, 10, 10, 10, 9, 8, 8, 8, 7, 7, 6, 5, 5, 4, 3, 2, 2, 2, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10},
 {0,12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 9, 10, 10, 10, 11, 11, 12, 12, 11, 11, 10, 10, 10, 9, 9, 8, 8, 8, 7, 6, 6, 5, 5, 3, 3, 2, 2, 12, 12, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10},
 {0,6,5,5,5,5,5,4,4,4,4,5,5,5,5,5,5,7,6,6,6,6,6,5,5,5,5,5,4,4,4,4,3,4,5,5,5,5,5,6,6,6,7,7,7,8,8,6,6,6,5,5,6,7,7,7,8,8,9, 9, 10, 10, 11, 11, 11, 12, 2,2,2,3,3,3,4,4,4,5,5,5,5,5,5,6,6, 6, 7, 7, 7, 7, 7, 7},
 {0,5,5,5,5,5,4,4,4,4,4,4,4,4,5,5,5,6,6,6,6,5,5,5,5,5,4,4,4,4,3,3,3,3,5,5,5,5,5,5,6,6,6,7,7,8,8,6,6,5,5,5,6,6,7,7,7,8,9, 9, 9, 10, 11, 11, 11, 12, 2,2,2,2,2,3,3,4,4,4,4,5,5,5,5,6,6, 6, 6, 7, 7, 7, 7, 7},
 {0,5,5,5,4,4,4,4,3,3,3,4,4,4,4,5,5,6,6,6,5,5,5,5,5,4,4,4,3,3,3,3,2,3,5,5,4,5,5,5,5,6,6,6,7,8,8,6,5,5,5,5,6,6,7,7,7,7,9, 9, 9, 10, 10, 11, 11, 11, 2,2,2,2,2,2,3,3,4,4,4,4,5,5,5,5,6, 6, 6, 6, 7, 7, 7, 7},
 {0,5,5,4,4,4,4,3,3,3,3,3,4,4,4,4,5,6,6,5,5,5,5,5,4,4,4,3,3,3,3,2,2,2,5,4,4,4,5,5,5,6,6,6,7,7,8,5,5,5,5,4,6,6,6,7,7,7,8, 9, 9, 10, 10, 11, 11, 11, 3,2,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5, 6, 6, 6, 6, 7, 7, 7},
 {0,5,5,4,4,4,3,3,3,3,3,3,3,4,4,4,4,6,5,5,5,5,5,4,4,4,3,3,3,3,2,2,2,2,4,4,4,4,4,5,5,5,6,6,7,7,8,5,5,5,5,4,5,6,6,7,7,7,8, 9, 9, 9, 10, 10, 11, 11, 3,2,2,2,2,2,2,3,3,3,4,4,4,4,5,5,5, 5, 6, 6, 6, 6, 7, 7},
 {0,4,4,4,4,3,3,3,2,2,2,3,3,3,3,4,4,5,5,5,5,5,4,4,4,3,3,3,3,2,2,2,2,2,4,4,3,4,4,4,5,5,5,6,6,7,8,5,5,4,4,4,5,5,6,6,7,7,8, 8, 9, 9, 10, 10, 11, 11, 3,3,2,2,2,2,2,2,3,3,3,3,4,4,4,5,5, 5, 5, 6, 6, 6, 6, 7},
 {0,5, 5, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 4, 3, 3, 3, 3, 4, 4, 5, 5, 5, 6, 7, 7, 5, 4, 4, 4, 3, 5, 5, 6, 6, 6, 7, 8, 8, 8, 9, 10, 10, 10, 11, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6},
 {0,5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 5, 5, 4, 4, 4, 3, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 4, 5, 5, 5, 6, 7, 7, 4, 4, 3, 3, 3, 5, 5, 6, 6, 6, 6, 8, 8, 8, 9, 10, 10, 10, 10, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6},
 {0,5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 3, 3, 5, 4, 4, 4, 4, 3, 3, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 4, 4, 5, 5, 6, 7, 7, 4, 4, 3, 3, 3, 4, 5, 5, 6, 6, 6, 8, 8, 8, 9, 9, 10, 10, 10, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6},
 {0,5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 5, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 3, 3, 3, 4, 5, 5, 5, 6, 7, 4, 3, 3, 3, 3, 4, 5, 5, 5, 6, 6, 7, 8, 8, 9, 9, 10, 10, 10, 5, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6},
 {0,5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 4, 3, 3, 2, 2, 4, 4, 5, 5, 6, 6, 7, 8, 8, 8, 9, 9, 10, 10, 5, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5},
 {0,5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 4, 4, 3, 3, 3, 2, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 3, 2, 2, 2, 2, 2, 3, 4, 4, 5, 5, 6, 7, 4, 3, 3, 3, 2, 3, 4, 5, 5, 5, 6, 7, 7, 8, 8, 9, 9, 10, 10, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5},
 {0,5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 4, 3, 3, 3, 3, 2, 2, 3, 3, 3, 4, 3, 3, 3, 4, 4, 4, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 7, 4, 3, 3, 2, 2, 3, 4, 5, 5, 5, 6, 7, 7, 8, 8, 9, 9, 10, 10, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5},
 {0,5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 3, 4, 4, 3, 3, 3, 2, 3, 3, 3, 4, 4, 4, 3, 4, 4, 4, 4, 3, 2, 2, 2, 2, 2, 3, 4, 4, 5, 5, 6, 7, 4, 3, 3, 3, 3, 3, 4, 4, 5, 5, 5, 7, 7, 8, 8, 9, 9, 9, 10, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5},
 {0,6, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 3, 3, 3, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 3, 3, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 7, 4, 4, 3, 3, 3, 3, 3, 4, 4, 5, 5, 7, 7, 7, 8, 9, 9, 9, 9, 5, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5},
 {0,6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 4, 4, 4, 5, 5, 5, 4, 4, 5, 5, 5, 3, 3, 3, 3, 3, 3, 4, 4, 5, 5, 6, 7, 7, 5, 4, 4, 4, 3, 2, 3, 4, 4, 5, 5, 7, 7, 7, 8, 8, 9, 9, 9, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4},
 {0,6, 6, 6, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 4, 4, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 3, 3, 3, 4, 4, 5, 5, 5, 6, 7, 7, 5, 4, 4, 4, 4, 2, 2, 3, 4, 4, 5, 6, 7, 7, 7, 8, 8, 9, 9, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4},
 {0,6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 4, 4, 4, 5, 5, 5, 6, 7, 7, 5, 5, 4, 4, 4, 2, 2, 3, 3, 4, 4, 6, 6, 7, 7, 8, 8, 9, 9, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 4},
 {0,7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 5, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 5, 4, 4, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7, 5, 5, 5, 5, 4, 2, 2, 3, 4, 4, 5, 6, 7, 7, 7, 8, 8, 9, 9, 7, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3},
 {0,7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 4, 5, 5, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 5, 5, 5, 6, 6, 6, 5, 5, 4, 4, 4, 4, 5, 5, 6, 6, 6, 7, 8, 6, 5, 5, 5, 5, 2, 3, 4, 4, 5, 5, 7, 7, 7, 8, 8, 9, 9, 9, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3},
 {0,7, 7, 7, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 3, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 4, 5, 5, 5, 6, 6, 6, 7, 7, 8, 6, 6, 5, 5, 5, 3, 3, 4, 4, 5, 5, 7, 7, 7, 8, 9, 9, 9, 9, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 3},
 {0,7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 7, 8, 8, 6, 6, 6, 5, 5, 3, 4, 5, 5, 5, 5, 7, 7, 8, 8, 9, 9, 9, 10, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2},
 {0,7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 5, 5, 5, 6, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 6, 5, 5, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8, 6, 6, 6, 6, 5, 3, 4, 5, 5, 5, 6, 7, 7, 8, 8, 9, 9, 10, 10, 7, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 4, 4, 3, 3, 3, 2, 2, 2, 2},
{0,7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 6, 6, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 6, 6, 5, 5, 5, 5, 6, 6, 7, 7, 7, 8, 8, 7, 6,6,6,6,4,4, 5, 5, 6, 6, 7, 8, 8, 8, 9, 9, 10, 10, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2}};

//
class MyClass
{
public:
MyClass(){}
void search();
    
};

#endif /* MyClass_hpp */
