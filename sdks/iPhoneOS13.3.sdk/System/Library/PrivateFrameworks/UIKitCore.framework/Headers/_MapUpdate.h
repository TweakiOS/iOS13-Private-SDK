//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _MapUpdate : NSObject
{
    BOOL _isSectionUpdate;
    BOOL _isInsert;
    BOOL _isDelete;
    BOOL _isMove;
    NSIndexPath *_indexPath;
    NSIndexPath *_moveFromIndexPath;
    NSIndexPath *_moveToIndexPath;
    long long _index;
    long long _section;
    long long _moveFromSection;
    long long _moveToSection;
    _NSRange _insertRange;
    _NSRange _deleteRange;
    _NSRange _moveFromRange;
    _NSRange _moveToRange;
}

+ (id)itemMoveFromIndexIndexPath:(id)arg1 toIndexPath:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4;
+ (id)itemMoveSection:(long long)arg1 toSection:(long long)arg2 fromRange:(_NSRange)arg3 toRange:(_NSRange)arg4;
+ (id)itemDeleteItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemDeleteSection:(long long)arg1 deleteRange:(_NSRange)arg2;
+ (id)itemInsertItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemInsertSection:(long long)arg1 insertRange:(_NSRange)arg2;
@property(nonatomic) _NSRange moveToRange; // @synthesize moveToRange=_moveToRange;
@property(nonatomic) _NSRange moveFromRange; // @synthesize moveFromRange=_moveFromRange;
@property(nonatomic) long long moveToSection; // @synthesize moveToSection=_moveToSection;
@property(nonatomic) long long moveFromSection; // @synthesize moveFromSection=_moveFromSection;
@property(nonatomic) _NSRange deleteRange; // @synthesize deleteRange=_deleteRange;
@property(nonatomic) _NSRange insertRange; // @synthesize insertRange=_insertRange;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSIndexPath *moveToIndexPath; // @synthesize moveToIndexPath=_moveToIndexPath;
@property(retain, nonatomic) NSIndexPath *moveFromIndexPath; // @synthesize moveFromIndexPath=_moveFromIndexPath;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) BOOL isMove; // @synthesize isMove=_isMove;
@property(nonatomic) BOOL isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) BOOL isInsert; // @synthesize isInsert=_isInsert;
@property(nonatomic) BOOL isSectionUpdate; // @synthesize isSectionUpdate=_isSectionUpdate;
// - (void).cxx_destruct;
- (id)reverseUpdateItem;
- (id)description;

@end

