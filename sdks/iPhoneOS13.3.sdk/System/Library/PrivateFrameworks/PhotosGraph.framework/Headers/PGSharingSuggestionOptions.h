//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGSharingSuggestionOptions : NSObject
{
    BOOL _replaceMergeCandidates;
    BOOL _debugMode;
    BOOL _includeUnverified;
    BOOL _filterLowWeightResults;
    BOOL _useContactSuggestion;
    NSUInteger _sharingStream;
    NSUInteger _fetchLimit;
}

+ (NSUInteger)_shareSheetSharingStream;
+ (id)optionsForClient:(NSUInteger)arg1;
@property(nonatomic) BOOL useContactSuggestion; // @synthesize useContactSuggestion=_useContactSuggestion;
@property(nonatomic) BOOL filterLowWeightResults; // @synthesize filterLowWeightResults=_filterLowWeightResults;
@property(nonatomic) BOOL includeUnverified; // @synthesize includeUnverified=_includeUnverified;
@property(nonatomic) NSUInteger fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(nonatomic) BOOL debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) BOOL replaceMergeCandidates; // @synthesize replaceMergeCandidates=_replaceMergeCandidates;
@property(nonatomic) NSUInteger sharingStream; // @synthesize sharingStream=_sharingStream;
- (id)description;
- (id)init;

@end

