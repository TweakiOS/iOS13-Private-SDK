//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKSearchTargetProvider-Protocol.h>

@class NSArray;

@interface TSKAggregateSearchTargetProvider : NSObject <TSKSearchTargetProvider>
{
    NSArray *_searchTargetProviders;
}

@property(retain, nonatomic) NSArray *searchTargetProviders; // @synthesize searchTargetProviders=_searchTargetProviders;
- (NSUInteger)p_firstTargetIndexForProvider:(id)arg1;
- (void)p_enumerateTargetProvidersFromTargetIndex:(NSUInteger)arg1 direction:(NSUInteger)arg2 action:(id /* CDUnknownBlockType */)arg3;
- (NSUInteger)nextRootSearchTargetIndexFromIndex:(NSUInteger)arg1 forString:(id)arg2 options:(NSUInteger)arg3 inDirection:(NSUInteger)arg4;
- (void)withRootSearchTargetAtIndex:(NSUInteger)arg1 executeBlock:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)rootSearchTargetCountThroughIndex:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithSearchTargetProviders:(id)arg1;

@end

