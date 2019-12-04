//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NULayoutContext-Protocol.h>

@class NSString, UITraitCollection;

@interface NULayoutContext : NSObject <NULayoutContext>
{
    UITraitCollection *_traitCollection;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isLandscape) _Bool landscape;
- (id)initWithTraitCollection:(id)arg1 bounds:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
