//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditingData : NSObject
{
    UITableViewCell *_cell;
    long long _editingStyle;
    UITableViewCellEditControl *_editControl;
    UITableViewCellReorderControl *_reorderControl;
    UIView *_reorderSeparatorView;
}

- (id)reorderSeparatorView:(_Bool)arg1;
- (id)reorderControl:(_Bool)arg1;
- (id)editControl:(_Bool)arg1;
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
@property(readonly, nonatomic, getter=isDataRequired) _Bool dataRequired;
- (void)dealloc;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;

@end
