//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>


@class NSArray;

__attribute__((visibility("hidden")))
@interface KNSoundtrack : TSPObject <NSCopying>
{
    float _volume;
    long long _mode;
    NSArray *_media;
}

+ (BOOL)needsObjectUUID;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSoundtrackMedia:(id)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1;
@property(copy, nonatomic) NSArray *media;
@property(nonatomic) long long mode;
@property(nonatomic) float volume;

@end

