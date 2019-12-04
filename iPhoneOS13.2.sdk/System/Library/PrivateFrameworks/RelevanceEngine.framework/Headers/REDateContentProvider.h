//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface REDateContentProvider : RETextContentProvider
{
    NSDate *_date;
    unsigned long long _units;
    NSTimeZone *_timeZone;
}

+ (id)dateContentProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) unsigned long long units; // @synthesize units=_units;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)clockKitTextProviderRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributedStringRepresentation;
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;

@end
