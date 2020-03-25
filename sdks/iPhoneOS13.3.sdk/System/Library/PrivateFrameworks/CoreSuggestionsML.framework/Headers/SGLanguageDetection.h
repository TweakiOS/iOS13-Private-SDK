//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGLanguageDetection : NSObject
{
}

+ (void)logMatchingForRange:(_NSRange)arg1 lowercaseRange:(_NSRange)arg2 text:(id)arg3 lowercaseText:(id)arg4;
+ (_NSRange)tokenRangeForText:(id)arg1 maxTruncatedLength:(NSUInteger)arg2 tagger:(id)arg3 taggerOptions:(NSUInteger)arg4 prevTextTokenMaxRange:(NSUInteger)arg5 originalLengthShortfall:(NSUInteger)arg6 lowercaseText:(id)arg7 lowercaseRange:(_NSRange)arg8;
+ (id)languageTagsFromText:(id)arg1 withMaxLength:(NSUInteger)arg2 withMaxTags:(NSUInteger)arg3;
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1 withMinimumCount:(NSUInteger)arg2 withMinimumAgreement:(double)arg3;
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1;
+ (id)dominantLanguageTagFromText:(id)arg1 withMaxLength:(NSUInteger)arg2 withMaxTags:(NSUInteger)arg3 withMinimumCount:(NSUInteger)arg4 withMinimumAgreement:(double)arg5;
+ (id)dominantLanguageTagFromText:(id)arg1;
+ (id)detectLanguageFromLanguageTags:(id)arg1 withMinimumCount:(NSUInteger)arg2 withMinimumAgreement:(double)arg3;
+ (id)detectLanguageFromLanguageTags:(id)arg1;
+ (id)detectLanguageFromText:(id)arg1 withMaxLength:(NSUInteger)arg2 withMaxTags:(NSUInteger)arg3 withMinimumCount:(NSUInteger)arg4 withMinimumAgreement:(double)arg5;
+ (id)detectLanguageFromText:(id)arg1;
+ (id)_defaultLanguage;
+ (id)languageForLocaleIdentifier:(id)arg1;

@end
