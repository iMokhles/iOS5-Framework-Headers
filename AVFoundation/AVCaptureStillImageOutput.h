/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput
{
    AVCaptureStillImageOutputInternal *_internal;
}

+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(struct __IOSurface *)arg1 size:(unsigned long)arg2;
+ (struct CGImage *)cgImageForBGRASurface:(struct __IOSurface *)arg1 size:(unsigned long)arg2;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface *)arg1 size:(unsigned long)arg2 metadata:(id)arg3;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg1;
+ (void)initialize;
- (void)_updateStillImageDataSizeForCaptureOptions:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handlePhotoTakenForRequest:(id)arg1 info:(id)arg2;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)configureAndInitiateCopyStillImageForRequest:(id)arg1;
- (id)scaleAndCropDictionary;
- (id)firstActiveConnection;
@property(readonly, getter=isCapturingStillImage) BOOL capturingStillImage;
- (BOOL)resumeVideoProcessing;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)arg1;
- (BOOL)suspendsVideoProcessingDuringStillImageCapture;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (BOOL)isChromaNoiseReductionEnabled;
- (void)setEV0CaptureEnabled:(BOOL)arg1;
- (BOOL)isEV0CaptureEnabled;
- (void)setHDRCaptureEnabled:(BOOL)arg1;
- (BOOL)isHDRCaptureEnabled;
- (unsigned long)imageDataFormatType;
- (void)setPreviewImageSize:(struct CGSize)arg1;
- (struct CGSize)previewImageSize;
- (long long)maxStillImageDataSize;
- (id)connectionMediaTypes;
@property(readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property(readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property(copy, nonatomic) NSDictionary *outputSettings;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)dealloc;
- (id)init;

@end

