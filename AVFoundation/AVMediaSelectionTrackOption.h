/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    AVAssetTrack *_track;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)propertyList;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (BOOL)isPlayable;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)mediaSubTypes;
- (id)mediaType;
- (int)trackID;
- (BOOL)displaysNonForcedSubtitles;
- (id)track;
- (id)_ancillaryDescription;
- (id)group;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAssetTrack:(id)arg1 group:(id)arg2;
- (id)initWithAssetTrack:(id)arg1 group:(id)arg2 displaysNonForcedSubtitles:(BOOL)arg3;

@end

