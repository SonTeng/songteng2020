package com.itheima.demo04.Calendar;

import java.util.Calendar;

/*
    java.util.Calendar类:日历类
    Calendar类是一个抽象类,里边提供了很多操作日历字段的方法(YEAR、MONTH、DAY_OF_MONTH、HOUR )
    Calendar类无法直接创建对象使用,里边有一个静态方法叫getInstance(),该方法返回了Calendar类的子类对象
    static Calendar getInstance() 使用默认时区和语言环境获得一个日历。
 */
public class Demo01Calendar {
    public static void main(String[] args) {
        Calendar c = Calendar.getInstance();//多态
        System.out.println(c);
        //输出结果为：java.util.GregorianCalendar[time=1601566521180,areFieldsSet=true,areAllFieldsSet=true,lenient=true,zone=sun.util.calendar.ZoneInfo[id="Asia/Shanghai",offset=28800000,dstSavings=0,useDaylight=false,transitions=19,lastRule=null],firstDayOfWeek=1,minimalDaysInFirstWeek=1,ERA=1,YEAR=2020,MONTH=9,WEEK_OF_YEAR=40,WEEK_OF_MONTH=1,DAY_OF_MONTH=1,DAY_OF_YEAR=275,DAY_OF_WEEK=5,DAY_OF_WEEK_IN_MONTH=1,AM_PM=1,HOUR=11,HOUR_OF_DAY=23,MINUTE=35,SECOND=21,MILLISECOND=180,ZONE_OFFSET=28800000,DST_OFFSET=0]
    }

}
