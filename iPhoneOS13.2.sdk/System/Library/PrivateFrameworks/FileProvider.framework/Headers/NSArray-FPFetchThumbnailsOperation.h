//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSArray (FPFetchThumbnailsOperation)
+ (id)fp_sortDescriptorByDocumentSize;
+ (id)fp_sortDescriptorByLastUsedDate;
+ (id)fp_sortDescriptorByModifiedDateDescending;
+ (id)fp_sortDescriptorByDisplayName;
- (id)fp_shortDescriptionExpandingAtMost:(unsigned long long)arg1;
- (id)fp_removingObjectsNotKindOfClasses:(id)arg1;
- (id)fp_pickItemsFromArray:(id)arg1 correspondingToIndexesOfItemsInArray:(id)arg2;
- (id)fp_categorize:(id /* block */)arg1;
- (id)fp_filter:(id /* block */)arg1;
- (id)fp_map:(id /* block */)arg1;
- (id)fp_mapWithIndex:(id /* block */)arg1;
- (id)fp_itemIDs;
- (id)fp_itemIdentifiers;
- (long long)fp_compareItem:(id)arg1 toItem:(id)arg2;
- (id /* block */)fp_comparator;
- (id)_fp_componentsWrappedInQuotes;
- (id)_fp_componentsJoinedByAnd;
- (id)_fp_componentsJoinedByOr;
- (id)_fp_filter:(id /* block */)arg1;
- (id)_fp_map:(id /* block */)arg1;
@end
