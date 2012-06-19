/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface GLKEffectTexture : NSObject
{
    NSMutableArray *_imageData;
    unsigned int _name;
    unsigned int _width;
    unsigned int _height;
    unsigned int _internalFormat;
    BOOL _hasAlpha;
}

+ (id)textureWithContentsOfURL:(id)arg1;
+ (id)textureWithContentsOfFile:(id)arg1;
@property(readonly, nonatomic) BOOL hasAlpha; // @synthesize hasAlpha=_hasAlpha;
@property(readonly, nonatomic) unsigned int internalFormat; // @synthesize internalFormat=_internalFormat;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (BOOL)createGLTexture;
- (BOOL)unpackPVRData:(id)arg1;

@end

