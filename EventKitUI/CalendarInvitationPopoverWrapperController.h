/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class CalendarModel, EKEventViewController;

@interface CalendarInvitationPopoverWrapperController : UINavigationController
{
    CalendarModel *_model;
    EKEventViewController *_eventViewController;
}

@property(retain, nonatomic) EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
- (void)dealloc;
- (id)initForEventUID:(int)arg1;

@end

