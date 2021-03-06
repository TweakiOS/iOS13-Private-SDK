//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject
{
    TSTLayout *mLayout;
    TSTLayoutSpace *mSpace;
    TSTLayoutSpace *mFrozenHeaderColumnsSpace;
    TSTLayoutSpace *mFrozenHeaderRowsSpace;
    TSTLayoutSpace *mFrozenHeaderCornerSpace;
    TSTLayoutSpace *mRepeatHeaderColumnsSpace;
    TSTLayoutSpace *mRepeatHeaderRowsSpace;
    TSTLayoutSpace *mRepeatHeaderCornerSpace;
}

@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace; // @synthesize repeatHeaderCornerSpace=mRepeatHeaderCornerSpace;
@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace; // @synthesize repeatHeaderRowsSpace=mRepeatHeaderRowsSpace;
@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace; // @synthesize repeatHeaderColumnsSpace=mRepeatHeaderColumnsSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace; // @synthesize frozenHeaderCornerSpace=mFrozenHeaderCornerSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace; // @synthesize frozenHeaderRowsSpace=mFrozenHeaderRowsSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace; // @synthesize frozenHeaderColumnsSpace=mFrozenHeaderColumnsSpace;
@property(retain, nonatomic) TSTLayoutSpace *space; // @synthesize space=mSpace;
@property(nonatomic) TSTLayout *layout; // @synthesize layout=mLayout;
- (id)description;
- (BOOL)performActionOnRepeatLayoutSpaces:(id /* CDUnknownBlockType */)arg1;
- (BOOL)performActionOnFrozenLayoutSpaces:(id /* CDUnknownBlockType */)arg1;
- (void)performActionOnEachLayoutSpace:(id /* CDUnknownBlockType */)arg1;
- (int)validateLayoutSpaces;
- (id)getSpaceContainingCellID:(CDStruct_0441cfb5)arg1;
- (void)invalidateTableOffsets;
- (void)invalidateCoordinates;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

@end

