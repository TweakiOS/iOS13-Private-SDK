//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMailboxPredictor-Protocol.h>

@class NSCache, NSDictionary, NSMutableString;
@protocol EDMailboxPredictionQueryAdapter, EMUserProfileProvider;

@interface EDHeuristicsMailboxPredictor : NSObject <EDMailboxPredictor>
{
    id <EMUserProfileProvider> _userProfileProvider;
    id <EDMailboxPredictionQueryAdapter> _library;
    NSDictionary *_parameters;
    NSCache *_mailboxIDCache;
    NSMutableString *_debugLog;
}

@property(retain, nonatomic) NSMutableString *debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) NSCache *mailboxIDCache; // @synthesize mailboxIDCache=_mailboxIDCache;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) id <EDMailboxPredictionQueryAdapter> library; // @synthesize library=_library;
@property(retain, nonatomic) id <EMUserProfileProvider> userProfileProvider; // @synthesize userProfileProvider=_userProfileProvider;
// - (void).cxx_destruct;
- (id)_allowedRecipientsForMessage:(id)arg1;
- (BOOL)_isAllowedRecipient:(id)arg1;
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2;
- (id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1;
- (id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2;
- (id)_userCreatedMailboxIDs;
- (id)_recipientCountsForMessage:(id)arg1;
- (id)_listIDCountsForMessage:(id)arg1;
- (id)_senderCountsForMessage:(id)arg1;
- (id)_conversationIDCountsForMessage:(id)arg1;
- (id)_groupedMessagesCountByMailboxMatchingQuery:(NSUInteger)arg1 variable:(id)arg2;
- (BOOL)_limitToRecents;
- (id)_countsForField:(id)arg1 message:(id)arg2;
- (id)_weightedModePredictionsForMessage:(id)arg1;
- (id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(NSUInteger)arg2;
- (id)_orderedModePredictionForMessage:(id)arg1;
- (id)_predictionsForMessage:(id)arg1 limit:(NSUInteger)arg2;
- (BOOL)_modeParameterIs:(id)arg1;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(NSUInteger)arg2 diagnostics:(id )arg3;
- (id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2;
- (id)initWithUserProfileProvider:(id)arg1 queryAdapter:(id)arg2 parameters:(id)arg3;
- (id)initWithUserProfileProvider:(id)arg1 queryAdapter:(id)arg2;

@end
