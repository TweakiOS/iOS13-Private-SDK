//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDPCSData;

__attribute__((visibility("hidden")))
@interface CKDPCSMemoryCacheEntry : NSObject
{
    CKDPCSData *_pcsData;
    double _lastAccess;
}

@property double lastAccess; // @synthesize lastAccess=_lastAccess;
@property(retain, nonatomic) CKDPCSData *pcsData; // @synthesize pcsData=_pcsData;
- (id)description;
- (id)CKPropertiesDescription;
- (id)init;

@end
