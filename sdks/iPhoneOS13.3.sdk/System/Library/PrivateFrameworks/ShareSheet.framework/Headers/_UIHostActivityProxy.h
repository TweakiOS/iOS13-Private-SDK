//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSUUID;

@interface _UIHostActivityProxy : NSObject <NSSecureCoding>
{
    BOOL _disabled;
    BOOL _favorite;
    BOOL _restricted;
    NSUUID *_proxyIdentifier;
    NSNumber *_imageSlot;
    NSNumber *_labelSlot;
    double _platterTextHeight;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isRestricted) BOOL restricted; // @synthesize restricted=_restricted;
@property(nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) double platterTextHeight; // @synthesize platterTextHeight=_platterTextHeight;
@property(retain, nonatomic) NSNumber *labelSlot; // @synthesize labelSlot=_labelSlot;
@property(retain, nonatomic) NSNumber *imageSlot; // @synthesize imageSlot=_imageSlot;
@property(retain, nonatomic) NSUUID *proxyIdentifier; // @synthesize proxyIdentifier=_proxyIdentifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
