/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "MPDetailSliderDelegate-Protocol.h"

@class CABasicAnimation, MPAVController, MPAVItem, MPButton, MPDetailSlider, MPTimeMarker, UIActivityIndicatorView, UILabel;

@interface MPPlaybackControlsView : UIView <MPDetailSliderDelegate>
{
    id <MPPlaybackControlsDelegate> _delegate;
    MPAVController *_player;
    MPAVItem *_item;
    MPTimeMarker *_markerForProgressControlDuration;
    UIActivityIndicatorView *_activityIndicator;
    MPDetailSlider *_progressControl;
    MPButton *_repeatButton;
    MPButton *_shuffleButton;
    MPButton *_playbackSpeedButton;
    MPButton *_geniusButton;
    MPButton *_rewindButton;
    MPButton *_mailButton;
    MPButton *_socialLikeButton;
    MPButton *_socialPostButton;
    UIView *_rewindButtonBezel;
    UILabel *_trackInfoLabel;
    CABasicAnimation *_rewindOpacityAnimation;
    double _progressOffset;
    double _tickInterval;
    unsigned int _visibleParts;
    unsigned int _wantsTick:1;
    unsigned int _geniusButtonDisabled:1;
    unsigned int _rewindButtonDisabled:1;
    unsigned int _playbackSpeedButtonDisabled:1;
    unsigned int _mailButtonDisabled:1;
    unsigned int _mailButtonHidden:1;
    unsigned int _socialLikeButtonHidden:1;
    unsigned int _socialLikeButtonSelected:1;
    unsigned int _socialPostButtonHidden:1;
    unsigned int _useMediaDetailSlider:1;
    unsigned int _detailScrubbing:1;
    unsigned int _needsUpdateButtonVisibility:1;
    float _seekedToValue;
}

+ (unsigned int)defaultVisibleParts;
@property(nonatomic) unsigned int visibleParts; // @synthesize visibleParts=_visibleParts;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) id <MPPlaybackControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)_setVisiblePartsNeedReload;
- (void)_updateForPlaybackSpeed;
- (void)_updateButtonVisibility;
- (BOOL)_shuffleIsOn;
- (id)_shuffleButtonImage;
- (id)_repeatButtonImage;
- (void)_changeGeniusImageToNormalImage:(id)arg1;
- (void)_changeGeniusImageToPressedImage:(id)arg1;
- (void)_resetGeniusButtonImages;
- (id)_mailButtonImage;
- (void)_initializeControls;
- (id)_geniusButtonImage:(unsigned int)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_isGeniusEnabledDidChangeNotification:(id)arg1;
- (void)crossedURLTimeMarker:(id)arg1;
- (void)crossedArtworkTimeMarker:(id)arg1;
- (void)crossedChapterTimeMarker:(id)arg1;
- (void)_contentsChangedNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)_socialPostButton:(id)arg1;
- (void)_socialLikeButton:(id)arg1;
- (void)_shuffleButton:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_rewindButton:(id)arg1;
- (void)_repeatButton:(id)arg1;
- (void)_playbackSpeedButton:(id)arg1;
- (void)_mailButton:(id)arg1;
- (void)_handleGeniusButtonClick;
- (void)_geniusButton:(id)arg1;
- (unsigned int)displayablePartsInPartMask:(unsigned int)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)updateForEndOfDetailScrubbing;
- (void)setCurrentTime:(double)arg1;
- (void)stopTicking;
- (void)startTicking;
@property(readonly, nonatomic) unsigned int shuffleType;
- (void)resetDetailSlider:(id)arg1;
@property(readonly, nonatomic) BOOL isScrubbing;
@property(readonly, nonatomic) unsigned int repeatType;
- (void)reloadView;
- (void)reloadButtonVisibility;
- (double)_updatedDisplayDurationForTime:(double)arg1;
- (double)_currentDisplayTime;
- (BOOL)progressBarClipsToChapterDuration;
@property(readonly, nonatomic) BOOL hideGeniusButton;
- (void)handleChangeToShuffleType:(unsigned int)arg1;
- (void)handleChangeToRepeatType:(unsigned int)arg1;
- (id)newProgressIndicator;
- (id)newButtonForPart:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

