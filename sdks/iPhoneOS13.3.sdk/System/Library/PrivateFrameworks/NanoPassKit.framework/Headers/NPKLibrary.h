//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPKLibrary : NSObject
{
    BOOL _needsRelevancyInformation;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL needsRelevancyInformation; // @synthesize needsRelevancyInformation=_needsRelevancyInformation;
- (void)addPassData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;

@end

