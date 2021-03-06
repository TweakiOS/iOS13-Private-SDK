//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class REMFetchResultToken, _REMFetchExecutor;

@interface REMFetchRequest : NSObject <NSSecureCoding>
{
    NSUInteger _fetchLimit;
    _REMFetchExecutor *_fetchExecutor;
    REMFetchResultToken *_fetchResultToken;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) REMFetchResultToken *fetchResultToken; // @synthesize fetchResultToken=_fetchResultToken;
@property(retain, nonatomic) _REMFetchExecutor *fetchExecutor; // @synthesize fetchExecutor=_fetchExecutor;
@property(nonatomic) NSUInteger fetchLimit; // @synthesize fetchLimit=_fetchLimit;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copyWithType:(long long)arg1;
- (id)fetchRequestWithFetchResultToken:(id)arg1;
- (id)metadataFetchRequest;
- (id)objectIDsOnlyFetchRequest;
- (id)countOnlyFetchRequest;
- (id)storagesOnlyFetchRequest;
- (id)storagesAndParentFetchRequest;
- (id)initWithFetchExecutor:(id)arg1;

@end

