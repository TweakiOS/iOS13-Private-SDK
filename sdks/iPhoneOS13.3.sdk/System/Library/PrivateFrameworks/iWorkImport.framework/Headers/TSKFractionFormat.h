//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>


__attribute__((visibility("hidden")))
@interface TSKFractionFormat : TSKFormat <NSCopying>
{
    BOOL _usePlusSign;
    int _fractionAccuracy;
}

@property(readonly, nonatomic) BOOL usePlusSign; // @synthesize usePlusSign=_usePlusSign;
@property(readonly, nonatomic) int fractionAccuracy; // @synthesize fractionAccuracy=_fractionAccuracy;
- (id)asFractionFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithFractionAccuracy:(int)arg1;
- (id)initWithFormatType:(int)arg1;

@end

