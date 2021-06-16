//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Calendar)
+ (id)chineseMonthDays;
+ (id)chineseMonths;
+ (id)GenerateAM12DateBy:(long long)arg1 month:(long long)arg2 day:(long long)arg3 calendarType:(id)arg4;
+ (id)weekDayByIndex:(long long)arg1;
+ (void)refreshDefaultCanlendar;
+ (id)currentCalendar;
- (id)constellation;
- (id)chineseZodiac;
- (long long)foxYearsSinceDate:(id)arg1;
- (long long)foxMonthsSinceDate:(id)arg1;
- (long long)foxWeeksSinceDate:(id)arg1;
- (long long)foxDaysSinceDate:(id)arg1;
- (id)foxDateAfterSeconds:(long long)arg1;
- (id)foxDateAfterMinutes:(long long)arg1;
- (id)foxDateAfterHours:(long long)arg1;
- (id)foxDateAfterYears:(long long)arg1;
- (long long)foxDateInterval:(id)arg1;
- (id)foxDateAfterMonths:(long long)arg1;
- (id)foxDateAfterWeeks:(long long)arg1;
- (id)foxDateAfterDays:(long long)arg1 afterSeconds:(long long)arg2;
- (id)foxDateAfterDays:(long long)arg1;
- (id)followingYear;
- (id)follingMonth;
- (id)followingWeek;
- (id)followingDay;
- (id)previousDay;
- (_Bool)foxIsBetweenBeginDate:(id)arg1 andEndDate:(id)arg2;
- (id)NightbeginingOfDay;
- (id)PMbeginingOfDay;
- (id)MiddlebeginingOfDay;
- (id)AMbeginingOfDay;
- (_Bool)sameYearWithDate:(id)arg1;
- (id)firstDayOfTheYear;
- (id)firstDayOfTheFollowingYear;
- (id)firstDayOfThePreviousYear;
- (id)associateDayOfTheFollowingYear;
- (id)associateDayOfThePreviousYear;
- (id)getChineseCalendarMonthWithDate;
- (id)getChineseCalendarDaysWithDate;
- (id)getChineseCalendarWithDate;
- (id)getLocalComponents;
- (_Bool)sameMonthWithDate:(id)arg1;
- (_Bool)sameWeekWithDate:(id)arg1;
- (_Bool)sameDayWithDate:(id)arg1;
- (id)followingWholeHour;
- (id)followingHour;
- (id)adjustDays:(long long)arg1;
- (id)associateDayOfTheFollowingWeek;
- (id)associateDayOfThePreviousWeek;
- (unsigned long long)weekOfDayInYear;
- (unsigned long long)weekOfDayInMonth:(long long)arg1;
- (unsigned long long)weekOfDayInMonth;
- (unsigned long long)numberOfDaysInTheWeekInMonth;
- (id)firstDayOfTheWeekInTheMonth;
- (id)firstDayOfTheFirstWeekInFollowingMonth;
- (id)firstDayOfTheFollowingWeekInTheMonth;
- (id)firstDayOfTheLastWeekInPreviousMonth;
- (id)firstDayOfThePreviousWeekInTheMonth;
- (id)lastDayOfTheWeek;
- (id)firstDayOfTheWeek;
- (unsigned long long)numberOfWeeksInMonth;
- (unsigned long long)numberOfDaysInMonth;
- (id)associateDayOfTheFollowingMonth;
- (id)associateDayOfThePreviousMonth;
- (id)firstDayOfTheFollowingMonth;
- (id)firstDayOfThePreviousMonth;
- (id)lastDayOfTheMonth;
- (id)firstDayOfTheMonth;
- (id)endOfDay;
- (id)beginOfDayString;
- (id)beginingOfDay;
- (unsigned long long)week;
- (id)weekdayDescription;
- (unsigned long long)weekday;
- (unsigned long long)second;
- (unsigned long long)minute;
- (unsigned long long)hour;
- (unsigned long long)day;
- (unsigned long long)month;
- (unsigned long long)year;
- (long long)weekdayOrdinal;
- (id)componentsOfDay;
@end

