//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSAttributedString, NSString;

@interface RTIStyledIntermediateText : NSObject <NSSecureCoding>
{
    NSUInteger _selectionOffset;
    NSString *_inputString;
    NSAttributedString *_displayString;
    NSString *_searchString;
    long long _cursorVisibility;
}

+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(NSUInteger)arg3 searchString:(id)arg4;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(NSUInteger)arg3;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long cursorVisibility; // @synthesize cursorVisibility=_cursorVisibility;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) NSAttributedString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
// - (void).cxx_destruct;
@property(readonly, nonatomic) _NSRange selectedRange;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(NSUInteger)arg3 searchString:(id)arg4;

@end

