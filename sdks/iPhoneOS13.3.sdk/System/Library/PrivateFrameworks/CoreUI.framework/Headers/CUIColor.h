//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CUIColor : NSObject <NSCopying>
{
    CGColor _cgColor;
}

+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithCGColor:(CGColor )arg1;
@property(readonly, nonatomic) CGColor CGColor; // @synthesize CGColor=_cgColor;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)colorUsingCGColorSpace:(CGColorSpace )arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCGColor:(CGColor )arg1;

@end

