//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray, TLKLabel;

__attribute__((visibility("hidden")))
@interface TLKContentsView : TLKStackView
{
    TLKLabel *_titleLabel;
    NSMutableArray *_detailsLabels;
}

+ (id)detailsLabel;
@property(retain, nonatomic) NSMutableArray *detailsLabels; // @synthesize detailsLabels=_detailsLabels;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)updateWithTitle:(id)arg1 contents:(id)arg2;
- (id)init;

@end
