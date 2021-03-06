//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMultiDict.h>

@interface CKMultiCache : IMMultiDict
{
    BOOL _cacheEligibleForPrewarm;
    BOOL _punchoutCacheEligibleForPrewarm;
    NSUInteger _limit;
}

@property(nonatomic) BOOL punchoutCacheEligibleForPrewarm; // @synthesize punchoutCacheEligibleForPrewarm=_punchoutCacheEligibleForPrewarm;
@property(nonatomic) BOOL cacheEligibleForPrewarm; // @synthesize cacheEligibleForPrewarm=_cacheEligibleForPrewarm;
@property(nonatomic) NSUInteger limit; // @synthesize limit=_limit;
- (void)markPunchoutCacheAsPrewarmed;
- (void)markCacheAsPrewarmed;
- (void)removeAllObjects;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end

