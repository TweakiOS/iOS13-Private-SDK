//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OAXDrawingState.h>

@class EXReadState;

__attribute__((visibility("hidden")))
@interface EXOfficeArtState : OAXDrawingState
{
    EXReadState *mExcelState;
}

@property(readonly) __weak EXReadState *excelState; // @synthesize excelState=mExcelState;
// - (void).cxx_destruct;
- (id)initWithExcelState:(id)arg1;

@end

