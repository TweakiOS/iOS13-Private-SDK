//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDParagraph : WDBlock
{
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
    NSUInteger identifier;
}

@property NSUInteger identifier; // @synthesize identifier;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (void)removeLastCharacter:(unsigned short)arg1;
- (float)maxReflectionDistance;
- (id)addMath:(id)arg1;
- (id)addDateTime:(id)arg1;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (id)addBookmark;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (id)addHyperlinkFieldMarker:(int)arg1;
- (id)addHyperlinkFieldMarker;
- (id)addFieldMarker:(int)arg1;
- (id)addFieldMarker;
- (id)addEndnote;
- (id)addFootnote;
- (id)addAnnotation:(int)arg1;
- (id)addAnnotation:(int)arg1 atIndex:(NSUInteger)arg2;
- (id)addCharacterRun;
- (void)clearRuns;
- (void)removeRun:(id)arg1;
- (void)insertRun:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addRun:(id)arg1;
- (id)runAt:(NSUInteger)arg1;
- (NSUInteger)runCount;
- (id)runs;
- (void)clearProperties;
- (id)properties;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (id)initWithText:(id)arg1;
- (BOOL)isContinuationOf:(id)arg1;
- (BOOL)isTextFrame;

@end

