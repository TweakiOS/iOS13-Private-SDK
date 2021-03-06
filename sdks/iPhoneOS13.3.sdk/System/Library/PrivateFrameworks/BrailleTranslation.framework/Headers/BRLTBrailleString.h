//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray, NSString;

@interface BRLTBrailleString : NSObject <NSCopying>
{
    NSMutableArray *_brailleChars;
}

+ (id)unicodeToBestEffortBrf:(id)arg1;
+ (BOOL)isValidBRF:(id)arg1;
+ (id)brfToUnicode:(id)arg1;
+ (id)brfTable;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger length;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBrailleString:(id)arg1;
- (id)description;
- (id)bestEffortBrf;
@property(readonly, nonatomic) NSArray *brailleChars;
- (id)initWithBrf:(id)arg1;
@property(readonly, nonatomic) NSString *unicode;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithUnicode:(id)arg1;
- (id)initWithBrailleChars:(id)arg1;
- (id)init;

@end

