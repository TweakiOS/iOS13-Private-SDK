//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    struct SignalPack _innerSignalPack;
}

+ (_Bool)supportsSecureCoding;
+ (id)signalPackFromData:(id)arg1;
+ (id)extractFromDestinationMapItem:(struct GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
+ (id)extractFromDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id).cxx_construct;
- (id)description;
- (struct SignalPack *)innerSignalPack;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (id)encodedFeatureDictionary;
- (id)mutableCopy;
- (id)copy;
- (_Bool)mergeIntoSignalPack:(id)arg1;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (float)valueForSignalType:(long long)arg1;
- (_Bool)hasType:(long long)arg1;
- (id)initWithSignalPack:(id)arg1;

@end
