//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1
{
    double _minimumTextIndentation;
}

@property(nonatomic) double minimumTextIndentation; // @synthesize minimumTextIndentation=_minimumTextIndentation;
- (CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3;
- (CGRect)_adjustedTextFrameWithOriginalTextFrame:(CGRect)arg1 forCell:(id)arg2;

@end

