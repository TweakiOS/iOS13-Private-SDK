//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDStroke;

__attribute__((visibility("hidden")))
@interface TSTTableStrokePresetData : NSObject
{
    TSDStroke *mHorizontalStroke;
    TSDStroke *mVerticalStroke;
    TSDStroke *mExteriorStroke;
    unsigned int mVisibleMask;
}

@property(nonatomic) unsigned int mask; // @synthesize mask=mVisibleMask;
@property(retain, nonatomic) TSDStroke *exteriorStroke; // @synthesize exteriorStroke=mExteriorStroke;
@property(retain, nonatomic) TSDStroke *verticalStroke; // @synthesize verticalStroke=mVerticalStroke;
@property(retain, nonatomic) TSDStroke *horizontalStroke; // @synthesize horizontalStroke=mHorizontalStroke;
- (_Bool)isEqual:(id)arg1;
-     // Error parsing type: v32@0:8^{StrokePresetDataArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}i}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{Deprecated_StrokePresetDataArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}i}16@24, name: initWithDeprecatedArchive:unarchiver:
-     // Error parsing type: @32@0:8r^{StrokePresetDataArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}i}16@24, name: initWithArchive:unarchiver:
- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;
- (void)dealloc;
- (id)init;

@end
