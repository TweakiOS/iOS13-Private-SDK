//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPHeaderRep.h>

@class NSTimer, TPPaginatedPageInfo;

__attribute__((visibility("hidden")))
@interface TPHeaderRep : TSWPHeaderRep
{
    BOOL _hideKnobs;
    NSTimer *editingDidBeginTimer;
}

@property(nonatomic) BOOL hideKnobs; // @synthesize hideKnobs=_hideKnobs;
@property(retain, nonatomic) NSTimer *editingDidBeginTimer; // @synthesize editingDidBeginTimer;
// - (void).cxx_destruct;
- (BOOL)p_isMiddleFooterRep;
- (BOOL)p_isMiddleHeaderRep;
- (BOOL)p_shouldCreateArrowKnobs;
- (BOOL)p_isInDocumentSetup;
@property(readonly, nonatomic) TPPaginatedPageInfo *pageInfo;
- (id)pageLayout;

@end

