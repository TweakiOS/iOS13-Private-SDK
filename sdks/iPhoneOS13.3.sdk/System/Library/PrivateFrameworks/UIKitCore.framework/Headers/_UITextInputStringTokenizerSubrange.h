//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UITextPosition;

__attribute__((visibility("hidden")))
@interface _UITextInputStringTokenizerSubrange : NSObject
{
    NSString *_substring;
    UITextPosition *_basePosition;
    long long _indexOfBase;
    _NSRange _relevantRange;
}

+ (id)subrangeWithSubstring:(id)arg1 basePosition:(id)arg2;
@property(nonatomic) _NSRange relevantRange; // @synthesize relevantRange=_relevantRange;
@property(nonatomic) long long indexOfBase; // @synthesize indexOfBase=_indexOfBase;
@property(readonly, nonatomic) UITextPosition *basePosition; // @synthesize basePosition=_basePosition;
@property(readonly, nonatomic) NSString *substring; // @synthesize substring=_substring;
- (void)dealloc;

@end
