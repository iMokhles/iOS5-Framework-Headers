/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKSetPlayerDataRequest.h>

@class NSString;

@interface GKSetStatusRequest : GKSetPlayerDataRequest
{
    NSString *_status;
}

@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (void)send;
- (id)request;
- (id)key;
- (void)dealloc;

@end

