//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDLinkReference : NSObject
{
    NSUInteger mLinkIndex;
    NSUInteger mFirstSheetIndex;
    NSUInteger mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(NSUInteger)arg1 firstSheetIndex:(NSUInteger)arg2 lastSheetIndex:(NSUInteger)arg3;
- (id)description;
- (BOOL)isWorkbookLevelReference;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLinkReference:(id)arg1;
- (void)setLinkIndex:(NSUInteger)arg1;
- (NSUInteger)linkIndex;
- (void)setLastSheetIndex:(NSUInteger)arg1;
- (NSUInteger)lastSheetIndex;
- (void)setFirstSheetIndex:(NSUInteger)arg1;
- (NSUInteger)firstSheetIndex;
- (id)initWithLinkIndex:(NSUInteger)arg1 firstSheetIndex:(NSUInteger)arg2 lastSheetIndex:(NSUInteger)arg3;
- (id)init;

@end
