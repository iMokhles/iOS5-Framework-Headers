/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface NSCalendar : NSObject <NSCopying, NSCoding>
{
}

+ (id)currentCalendar;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (unsigned char)_diffComponents:(double)arg1:(double)arg2:(unsigned long)arg3:(const char *)arg4:(void *)arg5;
- (unsigned char)_addComponents:(double *)arg1:(unsigned long)arg2:(const char *)arg3:(void *)arg4;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1:(const char *)arg2:(void *)arg3;
- (unsigned char)_composeAbsoluteTime:(double *)arg1:(const char *)arg2:(void *)arg3;
- (unsigned char)_rangeOfUnit:(unsigned int)arg1 startTime:(double *)arg2 interval:(double *)arg3 forAT:(double)arg4;
- (long)_ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forAT:(double)arg3;
- (CDStruct_1ef3fb1f)_rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forAT:(double)arg3;
- (CDStruct_1ef3fb1f)_maximumRangeOfUnit:(unsigned int)arg1;
- (CDStruct_1ef3fb1f)_minimumRangeOfUnit:(unsigned int)arg1;
- (id)shortStandaloneQuarterSymbols;
- (id)standaloneQuarterSymbols;
- (id)shortQuarterSymbols;
- (id)quarterSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)standaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)standaloneMonthSymbols;
- (id)veryShortMonthSymbols;
- (id)longEraSymbols;
- (id)PMSymbol;
- (id)AMSymbol;
- (id)shortWeekdaySymbols;
- (id)weekdaySymbols;
- (id)shortMonthSymbols;
- (id)monthSymbols;
- (id)eraSymbols;
- (id)_gregorianStartDate;
- (void)_setGregorianStartDate:(id)arg1;
- (id)_copyTimeZone;
- (id)_copyLocale;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (BOOL)rangeOfUnit:(unsigned int)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange)rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange)maximumRangeOfUnit:(unsigned int)arg1;
- (struct _NSRange)minimumRangeOfUnit:(unsigned int)arg1;
- (id)gregorianStartDate;
- (void)setGregorianStartDate:(id)arg1;
- (unsigned int)minimumDaysInFirstWeek;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg1;
- (unsigned int)firstWeekday;
- (void)setFirstWeekday:(unsigned int)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)calendarIdentifier;
- (id)initWithCalendarIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned long)_cfTypeID;
- (id)init;

@end

