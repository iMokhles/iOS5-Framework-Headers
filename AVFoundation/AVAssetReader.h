/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, AVAssetReaderInternal, NSArray, NSError;

@interface AVAssetReader : NSObject
{
    AVAssetReaderInternal *_priv;
}

+ (id)assetReaderWithAsset:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(readonly, nonatomic, getter=_figAssetReader) struct OpaqueFigAssetReader *figAssetReader;
- (void)_handleServerDiedNotification;
- (void)cancelReading;
- (BOOL)startReading;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addOutput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 exceptionReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *outputs;
@property(nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly) NSError *error;
- (void)_transitionToStatus:(int)arg1 failureError:(id)arg2;
@property(readonly) int status;
@property(readonly, nonatomic) AVAsset *asset;
- (id)description;
- (void)_tearDownFigAssetReader;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 error:(id *)arg2;
- (id)init;

@end

