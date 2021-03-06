//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDMediaInfo.h>

#import <iWorkImport/TSDAttachmentAwareContainerInfo-Protocol.h>
#import <iWorkImport/TSDCompatibilityAwareMediaContainer-Protocol.h>
#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDReducibleImageContainer-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>

@class NSArray, NSObject, NSSet, TSDImageAdjustments, TSDImageDataHelper, TSDInfoGeometry, TSDMaskInfo, TSDMediaStyle, TSPData, TSUBezierPath;
@protocol TSDContainerInfo;

__attribute__((visibility("hidden")))
@interface TSDImageInfo : TSDMediaInfo <TSDReducibleImageContainer, TSDContainerInfo, TSDMixing, TSSPresetSource, TSKTransformableObject, TSDCompatibilityAwareMediaContainer, TSDAttachmentAwareContainerInfo>
{
    TSUBezierPath *mInstantAlphaPath;
    CGSize mNaturalSize;
    TSDImageDataHelper *mImageDataHelper;
    TSPData *mImageData;
    TSPData *mThumbnailImageData;
    TSPData *mOriginalImageData;
    TSDImageAdjustments *mImageAdjustments;
    TSPData *mAdjustedImageData;
    TSPData *mThumbnailAdjustedImageData;
    TSDImageDataHelper *mAdjustedImageDataHelper;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSDMaskInfo *mMaskInfo;
    TSUBezierPath *mTracedPath;
    BOOL mCurrentlyInDocument;
    double mDescentForInlineLayout;
    BOOL mDescentForInlineLayoutValid;
}

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(NSUInteger)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)bootstrapPropertyMapForPresetIndex:(NSUInteger)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(CGSize)arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
+ (id)i_thumbnailForImageData:(id)arg1;
@property(retain, nonatomic) TSPData *adjustedImageData; // @synthesize adjustedImageData=mAdjustedImageData;
@property(copy, nonatomic) TSDImageAdjustments *imageAdjustments; // @synthesize imageAdjustments=mImageAdjustments;
@property(retain, nonatomic) TSDMaskInfo *maskInfo; // @synthesize maskInfo=mMaskInfo;
- (id)style;
@property(retain, nonatomic) TSPData *originalImageData; // @synthesize originalImageData=mOriginalImageData;
@property(retain, nonatomic) TSPData *thumbnailImageData; // @synthesize thumbnailImageData=mThumbnailImageData;
@property(retain, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
// - (void).cxx_destruct;
- (id)mediaDataForDragging;
- (void)acceptVisitor:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (unsigned short)propertyIdForOriginalSizeCommand;
- (unsigned short)propertyIdForFlagsCommand;
- (id)propertyNameForOriginalSizeCommand;
- (id)propertyNameForFlagsCommand;
@property(nonatomic) CGSize naturalSize;
@property(readonly, nonatomic) TSUBezierPath *tracedPath;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (void)scaleDownSizeToFitWithinSize:(CGSize)arg1;
- (CGPoint)centerForReplacingWithNewMedia;
- (id)promisedDataForType:(id)arg1;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (BOOL)hasPDFDataForCopy;
- (BOOL)isPDF;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(CGPoint)arg1;
- (id)defaultMaskInfo;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (BOOL)maskCanBeReset;
- (BOOL)isMasked;
- (id)objectForProperty:(int)arg1;
@property(readonly, nonatomic) double descentForInlineLayout;
- (void)setAdjustedImageData:(id)arg1 thumbnailData:(id)arg2;
@property(readonly, nonatomic) BOOL canAdjustImage;
@property(retain, nonatomic) TSUBezierPath *instantAlphaPath;
- (id)i_instantAlphaPathIgnoringNaturalSize;
@property(readonly, nonatomic) BOOL canBeMasked;
- (BOOL)canResetMediaSize;
- (CGSize)rawDataSize;
- (CGSize)defaultOriginalSize;
- (CGSize)originalSize;
- (void)setStyle:(id)arg1;
@property(readonly, nonatomic) TSPData *imageDataForExport;
- (void)setImageData:(id)arg1 thumbnailData:(id)arg2;
- (id)mediaFileType;
- (id)mediaDisplayName;
- (BOOL)p_canCopy:(id)arg1;
- (BOOL)canCopyData;
- (BOOL)needsDownload;
- (long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2;
- (CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
@property(readonly, nonatomic) NSSet *infosToObserveForAttachedInfo;
- (BOOL)p_aspectRatioUnlockedResizeWouldCauseSkew;
- (BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (CGAffineTransform)computeFullTransform;
- (id)geometryWithMask;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childInfos;
- (id)styleIdentifierTemplateForNewPreset;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (BOOL)canAspectRatioLockBeChangedByUser;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly, nonatomic) TSDMediaStyle *imageStyle;
- (id)presetKind;
- (Class)repClass;
- (Class)layoutClass;
- (Class)styleClass;
- (void)setExteriorTextWrap:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 thumbnailImageData:(id)arg5 originalImageData:(id)arg6 imageAdjustments:(id)arg7 adjustedImageData:(id)arg8 thumbnailAdjustedImageData:(id)arg9;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
@property(retain, nonatomic) TSPData *enhancedImageData;
@property(retain, nonatomic) TSPData *thumbnailAdjustedImageData;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ImageArchive )arg1 archiver:(id)arg2;
- (void)p_upgradeImageThumbnail;
- (void)p_upgradeImageGeometry;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ImageArchive )arg1 unarchiver:(id)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

@end

