//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _entireMusicLibrary;
    NSString *_playlistName;
    NSNumber *_persistentIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(readonly, nonatomic) BOOL entireMusicLibrary; // @synthesize entireMusicLibrary=_entireMusicLibrary;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaylistName:(id)arg1 persistentIdentifier:(id)arg2;
- (id)initWithEntireMusicLibrary;

@end

