//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSSet;
@protocol FCContentContext;

@interface FCGreatStoriesYouMissedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    id <FCContentContext> _context;
    NSUInteger _limit;
}

+ (id)groupEmitterIdentifier;
+ (BOOL)greatStoriesMayEmit:(id)arg1;
+ (void)setShouldEmitOverride:(BOOL)arg1;
@property(nonatomic) NSUInteger limit; // @synthesize limit=_limit;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldEmitContentInFavoritesOnlyMode;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
@property(readonly, nonatomic) BOOL emitsSingletonGroups;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (BOOL)wantsToInsertGroupInContext:(id)arg1;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;

@end

