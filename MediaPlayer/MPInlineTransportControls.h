/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPTransportControls.h>

@class UIActivityIndicatorView, UILabel;

@interface MPInlineTransportControls : MPTransportControls
{
    UILabel *_loadingMovieLabel;
    UIActivityIndicatorView *_loadingMovieIndicator;
}

@property(readonly, nonatomic) struct CGRect availableProgressControlAreaFrame;
- (void)layoutSubviews;
- (void)setDisabledParts:(unsigned int)arg1;
- (id)pauseButtonImage;
- (id)playButtonImage;
- (id)buttonImageForPart:(unsigned int)arg1;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

