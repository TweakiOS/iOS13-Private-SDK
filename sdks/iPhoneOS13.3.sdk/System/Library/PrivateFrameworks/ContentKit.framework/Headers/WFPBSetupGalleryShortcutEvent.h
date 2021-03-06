//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBSetupGalleryShortcutEvent : PBCodable <NSCopying>
{
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryCategoryIdentifier;
    NSString *_galleryIdentifier;
    NSString *_key;
    BOOL _completed;
    struct {
        unsigned int completed:1;
    } _has;
}

@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(retain, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(retain, nonatomic) NSString *galleryCategoryIdentifier; // @synthesize galleryCategoryIdentifier=_galleryCategoryIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCompleted;
@property(readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property(readonly, nonatomic) BOOL hasGalleryIdentifier;
@property(readonly, nonatomic) BOOL hasGalleryCategoryIdentifier;
@property(readonly, nonatomic) BOOL hasKey;

@end

