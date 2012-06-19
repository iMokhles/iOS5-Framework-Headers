/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKPredicate.h>

@class NSDate, NSString;

@interface EKRemindersPredicate : EKPredicate
{
}

- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int querySortOrder;
@property(readonly, nonatomic) NSString *querySearchTerm;
- (BOOL)queryIncludeRemindersDueBefore;
@property(readonly, nonatomic) BOOL queryUseDueDateAsCompletionDate;
@property(readonly, nonatomic) NSDate *queryDueBefore;
@property(readonly, nonatomic) NSDate *queryDueAfter;
@property(readonly, nonatomic) BOOL queryCompleted;
@property(readonly, nonatomic) BOOL queryLimitToCompletedOrIncomplete;
@property(readonly, nonatomic) NSString *queryListTitle;
@property(readonly, nonatomic) NSString *queryTitle;

@end

