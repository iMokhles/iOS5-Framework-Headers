/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterHelper, AVAssetWriterInternal, NSArray, NSError, NSString, NSURL;

@interface AVAssetWriter : NSObject
{
    AVAssetWriterInternal *_internal;
}

+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (void)_transitionToFailedStatusWithError:(id)arg1;
- (BOOL)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)startWriting;
@property(copy, nonatomic) NSArray *metadata;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
@property(readonly, nonatomic) NSArray *inputs;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
@property(nonatomic) BOOL shouldOptimizeForNetworkUse;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)movieFragmentInterval;
@property(readonly) NSError *error;
@property(readonly) int status;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, nonatomic) NSString *outputFileType;
@property(readonly, nonatomic) NSURL *outputURL;
@property(retain, getter=_helper, setter=_setHelper:) AVAssetWriterHelper *helper;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
- (id)init;

@end

