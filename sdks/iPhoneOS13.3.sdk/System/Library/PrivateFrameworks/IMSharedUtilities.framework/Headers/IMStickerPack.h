//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, NSURL;

@interface IMStickerPack : NSObject
{
    NSMutableSet *_stickers;
    NSString _GUID;
    NSString *_name;
    NSURL *_displayAssetURL;
    NSURL *_fileURL;
    NSString *_appBundleIdentifier;
    NSString *_appVersion;
}

@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSURL *displayAssetURL; // @synthesize displayAssetURL=_displayAssetURL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (id)initWithStickerPackProperties:(id)arg1 stickerPackBundleURL:(id)arg2 appBundleIdentifier:(id)arg3 appVersion:(id)arg4;
- (id)_generatePackGUIDWithPackID:(id)arg1 appBundleID:(id)arg2 appVersion:(id)arg3;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)addSticker:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSSet *stickers;
- (id)initWithGUID:(NSString )arg1 name:(id)arg2 displayAssetURL:(id)arg3 fileURL:(id)arg4 appBundleIdentifier:(id)arg5 appVersion:(id)arg6;

@end

