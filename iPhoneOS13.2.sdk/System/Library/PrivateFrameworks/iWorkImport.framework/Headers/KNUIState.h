//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class KNMacUILayout, KNSlideCollectionSelection, NSArray, NSMutableDictionary, NSSet, TSDFreehandDrawingToolkitUIState, TSKSelectionPath;

__attribute__((visibility("hidden")))
@interface KNUIState : NSObject <NSCopying>
{
    double _mobileCanvasViewScale;
    struct CGPoint _mobileCanvasOffset;
    double _desktopCanvasViewScale;
    struct CGPoint _desktopCanvasOffset;
    NSMutableDictionary *_chartUIState;
    _Bool _slideViewFitsContentInWindow;
    _Bool _lightTableHidesSkippedSlides;
    _Bool _showsMobileLightTable;
    _Bool _mobileLightTableHidesSkippedSlides;
    _Bool _desktopOutlineViewDefaultFixed;
    _Bool _showSlideGuides;
    _Bool _showMasterGuides;
    _Bool _showsComments;
    _Bool _showsRuler;
    TSKSelectionPath *_selectionPath;
    KNMacUILayout *_documentUILayout;
    double _lightTableZoomScale;
    double _mobileLightTableZoomScale;
    double _desktopElementListViewWidth;
    double _desktopNavigatorViewWidth;
    double _desktopOutlineViewWidth;
    double _desktopPresenterNotesHeight;
    double _desktopPresenterNotesScrollPosition;
    NSSet *_collapsedSlideNodes;
    NSSet *_outlineCollapsedSlideNodes;
    NSSet *_outlineHasBodySlideNodes;
    NSArray *_elementListExpandedGroups;
    TSDFreehandDrawingToolkitUIState *_freehandDrawingToolkitUIState;
    struct CGPoint _desktopMainWindowOrigin;
    struct CGSize _desktopMainContentSize;
}

@property(retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState; // @synthesize freehandDrawingToolkitUIState=_freehandDrawingToolkitUIState;
@property(nonatomic) _Bool showsRuler; // @synthesize showsRuler=_showsRuler;
@property(nonatomic) _Bool showsComments; // @synthesize showsComments=_showsComments;
@property(nonatomic) _Bool showMasterGuides; // @synthesize showMasterGuides=_showMasterGuides;
@property(nonatomic) _Bool showSlideGuides; // @synthesize showSlideGuides=_showSlideGuides;
@property(copy, nonatomic) NSArray *elementListExpandedGroups; // @synthesize elementListExpandedGroups=_elementListExpandedGroups;
@property(copy, nonatomic) NSSet *outlineHasBodySlideNodes; // @synthesize outlineHasBodySlideNodes=_outlineHasBodySlideNodes;
@property(copy, nonatomic) NSSet *outlineCollapsedSlideNodes; // @synthesize outlineCollapsedSlideNodes=_outlineCollapsedSlideNodes;
@property(copy, nonatomic) NSSet *collapsedSlideNodes; // @synthesize collapsedSlideNodes=_collapsedSlideNodes;
@property(nonatomic) _Bool desktopOutlineViewDefaultFixed; // @synthesize desktopOutlineViewDefaultFixed=_desktopOutlineViewDefaultFixed;
@property(nonatomic) double desktopPresenterNotesScrollPosition; // @synthesize desktopPresenterNotesScrollPosition=_desktopPresenterNotesScrollPosition;
@property(nonatomic) double desktopPresenterNotesHeight; // @synthesize desktopPresenterNotesHeight=_desktopPresenterNotesHeight;
@property(nonatomic) double desktopOutlineViewWidth; // @synthesize desktopOutlineViewWidth=_desktopOutlineViewWidth;
@property(nonatomic) double desktopNavigatorViewWidth; // @synthesize desktopNavigatorViewWidth=_desktopNavigatorViewWidth;
@property(nonatomic) double desktopElementListViewWidth; // @synthesize desktopElementListViewWidth=_desktopElementListViewWidth;
@property(nonatomic) struct CGSize desktopMainContentSize; // @synthesize desktopMainContentSize=_desktopMainContentSize;
@property(nonatomic) struct CGPoint desktopMainWindowOrigin; // @synthesize desktopMainWindowOrigin=_desktopMainWindowOrigin;
@property(nonatomic) _Bool mobileLightTableHidesSkippedSlides; // @synthesize mobileLightTableHidesSkippedSlides=_mobileLightTableHidesSkippedSlides;
@property(nonatomic) double mobileLightTableZoomScale; // @synthesize mobileLightTableZoomScale=_mobileLightTableZoomScale;
@property(nonatomic) _Bool showsMobileLightTable; // @synthesize showsMobileLightTable=_showsMobileLightTable;
@property(nonatomic) _Bool lightTableHidesSkippedSlides; // @synthesize lightTableHidesSkippedSlides=_lightTableHidesSkippedSlides;
@property(nonatomic) double lightTableZoomScale; // @synthesize lightTableZoomScale=_lightTableZoomScale;
@property(nonatomic) _Bool slideViewFitsContentInWindow; // @synthesize slideViewFitsContentInWindow=_slideViewFitsContentInWindow;
@property(copy, nonatomic) KNMacUILayout *documentUILayout; // @synthesize documentUILayout=_documentUILayout;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
-     // Error parsing type: v40@0:8^{UIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCH::ChartUIState>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{Reference}^{Reference}^{Size}^{Point}^{Point}^{Point}^{Reference}^{Point}^{Size}^{Point}^{SelectionPathArchive}^{Reference}^{Reference}fffffBBBBfffBBBBffB}16@24@32, name: saveToArchive:archiver:context:
-     // Error parsing type: v40@0:8r^{UIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCH::ChartUIState>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{Reference}^{Reference}^{Size}^{Point}^{Point}^{Point}^{Reference}^{Point}^{Size}^{Point}^{SelectionPathArchive}^{Reference}^{Reference}fffffBBBBfffBBBBffB}16@24@32, name: loadFromArchive:unarchiver:context:
- (id)debugDescription;
- (void)updateOutlineStateFromSlideTree:(id)arg1;
- (id)archivedUIStateInContext:(id)arg1;
@property(nonatomic) struct CGPoint canvasOffset;
@property(nonatomic) double canvasViewScale;
- (void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2;
@property(readonly, nonatomic) KNSlideCollectionSelection *slideTreeSelection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;

@end
