/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (_NSCoreDataSPI)
+ (void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;
- (id)_orderedSetWithResultsFromFetchRequest:(id)arg1;
- (void)_stopConflictDetectionForObject:(id)arg1;
- (void)_mergeChangesFromRemoteContextSave:(id)arg1;
@end

