//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/NUIArrangementItem-Protocol.h>

@class NSString;

@interface SearchUISpacingHelper : NSObject <NUIArrangementItem>
{
    double _compressionResistance;
    struct CGRect _frame;
}

+ (double)idealHorizontalSpacingBetweenIcons;
@property(nonatomic) double compressionResistance; // @synthesize compressionResistance=_compressionResistance;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy) NSString *description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
