/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSArray;

@interface _MFSearchAddResultsOperation : NSOperation
{
    id <_MFSearchResultsConsumer> _consumer;
    int _type;
    NSArray *_results;
}

+ (id)operationWithResults:(id)arg1 ofType:(int)arg2 consumer:(id)arg3;
- (void)dealloc;
- (void)main;

@end

