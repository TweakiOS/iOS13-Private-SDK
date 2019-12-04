//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding>
{
    TIUserDictionaryEntryValue *_valueToDelete;
    TIUserDictionaryEntryValue *_valueToInsert;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) TIUserDictionaryEntryValue *valueToInsert; // @synthesize valueToInsert=_valueToInsert;
@property(retain, nonatomic) TIUserDictionaryEntryValue *valueToDelete; // @synthesize valueToDelete=_valueToDelete;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
