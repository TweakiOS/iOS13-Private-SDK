//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface FPItemCollectionIndexPathBasedDiffs : FPItemCollectionDiffs
{
    NSMutableArray *_movedSourceIndexPaths;
    NSMutableArray *_movedDestinationIndexPaths;
    NSMutableIndexSet *_deletedIndexes;
    NSMutableIndexSet *_insertedIndexes;
    NSMutableIndexSet *_updatedIndexes;
}

@property(retain) NSMutableIndexSet *updatedIndexes; // @synthesize updatedIndexes=_updatedIndexes;
@property(retain) NSMutableIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property(retain) NSMutableIndexSet *deletedIndexes; // @synthesize deletedIndexes=_deletedIndexes;
@property(retain) NSMutableArray *movedDestinationIndexPaths; // @synthesize movedDestinationIndexPaths=_movedDestinationIndexPaths;
@property(retain) NSMutableArray *movedSourceIndexPaths; // @synthesize movedSourceIndexPaths=_movedSourceIndexPaths;
- (_Bool)containsChanges;

@end
