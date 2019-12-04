//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSMutableArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding>
{
    long long _activationCount;
    NSMutableArray *_URLsBeingAccessed;
    NSArray *_securityScopedResources;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *securityScopedResources; // @synthesize securityScopedResources=_securityScopedResources;
- (id)accessibleURLs;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic) _Bool isActive; // @dynamic isActive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)securityScopedResourcesMatchingPredicate:(id /* block */)arg1;
- (id)description;
- (id)initWithSecurityScopedResources:(id)arg1;

@end
