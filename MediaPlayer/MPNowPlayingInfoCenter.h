/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface MPNowPlayingInfoCenter : NSObject
{
    struct MPNowPlayingInfoCenterInternal _internal;
}

+ (id)defaultCenter;
@property(nonatomic) struct MPNowPlayingInfoCenterInternal _internal; // @synthesize _internal;
@property(copy) NSDictionary *nowPlayingInfo;
- (id)init;
- (id)_init;

@end

