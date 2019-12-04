//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSScanner;

@interface PXMiniXMLParser : NSObject
{
    id /* block */ _parsedCharactersBlock;
    id /* block */ _parsedTagBlock;
    id /* block */ _parsedEntityBlock;
    id /* block */ _parsedErrorBlock;
    NSScanner *__scanner;
    NSCharacterSet *__syntaxMarkerCharactersSet;
}

@property(readonly, nonatomic) NSCharacterSet *_syntaxMarkerCharactersSet; // @synthesize _syntaxMarkerCharactersSet=__syntaxMarkerCharactersSet;
@property(readonly, nonatomic) NSScanner *_scanner; // @synthesize _scanner=__scanner;
@property(copy, nonatomic) id /* block */ parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property(copy, nonatomic) id /* block */ parsedEntityBlock; // @synthesize parsedEntityBlock=_parsedEntityBlock;
@property(copy, nonatomic) id /* block */ parsedTagBlock; // @synthesize parsedTagBlock=_parsedTagBlock;
@property(copy, nonatomic) id /* block */ parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
- (_Bool)_tryScanningUsingBlock:(id /* block */)arg1;
- (_Bool)_parseEntity;
- (_Bool)_parseTag;
- (_Bool)_parseCharacters;
- (_Bool)_isAtEnd;
- (void)parse;
- (id)initWithString:(id)arg1;
- (id)init;

@end
