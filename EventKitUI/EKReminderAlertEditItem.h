/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKReminderEditItem.h>

@class NSString;

@interface EKReminderAlertEditItem : EKReminderEditItem
{
    NSString *_lastSeenFooterString;
}

- (BOOL)editItemViewControllerCommit:(id)arg1;
- (BOOL)editItemViewControllerCommit:(id)arg1 notify:(BOOL)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(int)arg2;
- (id)footerView;
- (float)footerHeightForWidth:(float)arg1;
- (id)_footerString;
- (id)cellForSubitemAtIndex:(int)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(int)arg2;
- (BOOL)applicationDidResume;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)dealloc;

@end

