/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class NSData, NSString;

@interface GKTargetCancelInviteRequest : GKDataRequest
{
    NSData *_sessionToken;
    NSString *_playerID;
    NSData *_pushToken;
}

@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
- (id)request;
- (id)key;
- (void)dealloc;

@end

