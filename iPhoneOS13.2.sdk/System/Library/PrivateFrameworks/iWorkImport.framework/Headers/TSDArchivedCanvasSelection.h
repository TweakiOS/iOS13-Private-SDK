//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection;
@protocol TSDCanvasSelection;

__attribute__((visibility("hidden")))
@interface TSDArchivedCanvasSelection : TSPObject <TSKArchivedSelection>
{
    TSKSelection<TSDCanvasSelection> *mSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mSelection;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
