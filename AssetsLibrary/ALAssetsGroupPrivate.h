/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ALAssetsLibraryAsset-Protocol.h"

@class ALAssetsFilter, ALAssetsLibrary, NSMutableDictionary, NSObject<PLAssetContainer>, PLPhotoLibrary;

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset>
{
    BOOL _loadedAssets;
    ALAssetsLibrary *_library;
    NSObject<PLAssetContainer> *_album;
    ALAssetsFilter *_assetsFilter;
    unsigned int _groupType;
    BOOL _isValid;
    NSMutableDictionary *_propertyValues;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(retain, nonatomic) NSMutableDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned int groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) ALAssetsFilter *assetsFilter; // @synthesize assetsFilter=_assetsFilter;
@property(retain, nonatomic) NSObject<PLAssetContainer> *album; // @synthesize album=_album;
- (void)_performBlockAndWait:(id)arg1;
- (void)libraryWillDisappear;
- (void)libraryDidChange;
@property(nonatomic) ALAssetsLibrary *library;
- (void)populateAssets;
- (void)resetAssets;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1 library:(id)arg2;

@end

