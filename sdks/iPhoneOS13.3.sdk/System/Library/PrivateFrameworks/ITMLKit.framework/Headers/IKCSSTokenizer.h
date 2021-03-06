//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKCSSToken;

@interface IKCSSTokenizer : NSObject
{
    NSUInteger currentOffset;
    NSUInteger textBytesCharCount;
    unsigned short textBytes;
    IKCSSToken *reconsumeToken;
    IKCSSToken *_currentToken;
}

+ (BOOL)isNonPrintable:(unsigned short)arg1;
+ (BOOL)isHexDigit:(unsigned short)arg1;
+ (BOOL)isNameCodePoint:(unsigned short)arg1;
+ (BOOL)isNameStartCodePoint:(unsigned short)arg1;
+ (BOOL)isLetter:(unsigned short)arg1;
+ (BOOL)isLowercaseLetter:(unsigned short)arg1;
+ (BOOL)isUppercaseLetter:(unsigned short)arg1;
+ (BOOL)isNonASCIICodePoint:(unsigned short)arg1;
+ (BOOL)isDigit:(unsigned short)arg1;
+ (BOOL)isNewline:(unsigned short)arg1;
+ (BOOL)isWhitespace:(unsigned short)arg1;
@property(readonly, nonatomic) IKCSSToken *currentToken; // @synthesize currentToken=_currentToken;
// - (void).cxx_destruct;
- (id)_consumeComment:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeString:(NSUInteger)arg1 consumed:(NSUInteger )arg2 toEndChar:(unsigned short)arg3;
- (id)_consumeWhitespace:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeNumeric:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeNumber:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeSlash:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeDot:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeUrl:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (void)_consumeBadUrlRemnants:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeIdentLike:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeMinus:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumePlus:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeNameStart:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeUnicodeRange:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeBackslash:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeAt:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeLessThan:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeTilde:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumePipe:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeCaret:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeAsterisk:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeDollar:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeHash:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (id)_consumeName:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (unsigned short)_consumeEscapedCodePoint:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (BOOL)wouldStartNumber:(NSUInteger)arg1;
- (BOOL)wouldStartIdentifier:(NSUInteger)arg1;
- (BOOL)isValidEscape:(NSUInteger)arg1;
- (unsigned short)_getChar:(NSUInteger)arg1;
- (BOOL)isEOF:(NSUInteger)arg1;
- (id)_consumeToken:(NSUInteger)arg1 consumed:(NSUInteger )arg2;
- (void)reconsumeToken:(id)arg1;
- (id)getNextToken;
- (void)dealloc;
- (id)initWithText:(id)arg1;

@end

