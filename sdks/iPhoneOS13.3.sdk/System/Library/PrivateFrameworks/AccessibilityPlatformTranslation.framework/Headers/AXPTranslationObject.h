//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface AXPTranslationObject : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isApplicationElement;
    BOOL _didPopuldateAppInfo;
    int _pid;
    NSUInteger _objectID;
    NSString *_remoteDebugDescription;
    NSString *_bridgeDelegateToken;
    NSData *_rawElementData;
}

+ (BOOL)supportsSecureCoding;
+ (id)allowedDecodableClasses;
+ (void)initialize;
@property(nonatomic) BOOL didPopuldateAppInfo; // @synthesize didPopuldateAppInfo=_didPopuldateAppInfo;
@property(copy, nonatomic) NSData *rawElementData; // @synthesize rawElementData=_rawElementData;
@property(copy, nonatomic) NSString *bridgeDelegateToken; // @synthesize bridgeDelegateToken=_bridgeDelegateToken;
@property(copy, nonatomic) NSString *remoteDebugDescription; // @synthesize remoteDebugDescription=_remoteDebugDescription;
@property(nonatomic) BOOL isApplicationElement; // @synthesize isApplicationElement=_isApplicationElement;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) NSUInteger objectID; // @synthesize objectID=_objectID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end
