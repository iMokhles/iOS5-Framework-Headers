/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

#import "NSCoding-Protocol.h"

@class NSCalendar, NSDate, NSLocale, NSTimeZone, UIPickerView;

@interface UIDatePicker : UIControl <NSCoding>
{
    UIPickerView *_pickerView;
}

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) int minuteInterval; // @dynamic minuteInterval;
@property(nonatomic) double countDownDuration; // @dynamic countDownDuration;
@property(retain, nonatomic) NSDate *maximumDate; // @dynamic maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @dynamic minimumDate;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSCalendar *calendar; // @dynamic calendar;
@property(retain, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) NSLocale *locale; // @dynamic locale;
- (void)_setLocale:(id)arg1;
- (id)_locale;
@property(nonatomic) int datePickerMode; // @dynamic datePickerMode;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_insertPickerView;

@end

