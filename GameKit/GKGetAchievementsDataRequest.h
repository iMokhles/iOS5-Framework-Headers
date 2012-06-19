/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class GKGame, GKPlayer;

@interface GKGetAchievementsDataRequest : GKDataRequest
{
    GKGame *_game;
    GKPlayer *_player;
}

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (id)request;
- (id)key;
- (void)dealloc;

@end

