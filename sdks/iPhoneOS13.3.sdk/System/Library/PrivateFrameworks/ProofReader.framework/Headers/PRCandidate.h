//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PRCandidate : NSObject
{
    NSArray *_candidateWords;
    _NSRange _replacementRange;
    double _errorScore;
    double _lmScore;
    BOOL _blacklisted;
    BOOL _hasCustomErrorScore;
}

+ (id)transpositionCandidateWithBuffer:(char )arg1 encoding:(unsigned int)arg2 transform:(NSUInteger)arg3 replacementRange:(_NSRange)arg4 intendedFirstCharacter:(unsigned short)arg5 intendedSecondCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8;
+ (id)replacementCandidateWithBuffer:(char )arg1 encoding:(unsigned int)arg2 transform:(NSUInteger)arg3 replacementRange:(_NSRange)arg4 intendedCharacter:(unsigned short)arg5 actualCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8;
+ (id)candidateWithBuffer:(char )arg1 encoding:(unsigned int)arg2 transform:(NSUInteger)arg3 replacementRange:(_NSRange)arg4 errorType:(NSUInteger)arg5 errorModel:(id)arg6 capitalizationDictionaryArray:(id)arg7;
+ (id)candidateWithBuffer:(char )arg1 encoding:(unsigned int)arg2 transform:(NSUInteger)arg3 replacementRange:(_NSRange)arg4 errorScore:(double)arg5 capitalizationDictionaryArray:(id)arg6;
+ (id)transpositionCandidateWithString:(id)arg1 replacementRange:(_NSRange)arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4 errorModel:(id)arg5;
+ (id)replacementCandidateWithString:(id)arg1 replacementRange:(_NSRange)arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4 errorModel:(id)arg5;
+ (id)candidateWithString:(id)arg1 replacementRange:(_NSRange)arg2 errorType:(NSUInteger)arg3 errorModel:(id)arg4;
+ (id)candidateWithString:(id)arg1 replacementRange:(_NSRange)arg2 errorScore:(double)arg3;
+ (id)candidateWithWords:(id)arg1 replacementRange:(_NSRange)arg2 errorType:(NSUInteger)arg3 errorModel:(id)arg4;
+ (id)candidateWithWords:(id)arg1 replacementRange:(_NSRange)arg2 errorScore:(double)arg3;
- (double)score;
- (BOOL)hasCustomErrorScore;
- (void)setCustomErrorScore:(BOOL)arg1;
- (BOOL)isBlacklisted;
- (void)setBlacklisted:(BOOL)arg1;
- (double)languageModelScore;
- (void)setLanguageModelScore:(double)arg1;
- (double)errorScore;
- (void)setErrorScore:(double)arg1;
- (_NSRange)replacementRange;
- (id)string;
- (NSUInteger)numberOfWords;
- (id)candidateWords;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1 replacementRange:(_NSRange)arg2 errorScore:(double)arg3;
- (id)initWithCandidateWords:(id)arg1 replacementRange:(_NSRange)arg2 errorScore:(double)arg3;

@end

