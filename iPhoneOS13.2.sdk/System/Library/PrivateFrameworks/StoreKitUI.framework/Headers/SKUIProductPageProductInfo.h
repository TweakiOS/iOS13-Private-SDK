//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIProductPageProductInfo : NSObject
{
    NSMutableArray *_labels;
    NSMutableArray *_values;
}

@property(readonly, nonatomic) long long numberOfEntries;
- (void)enumerateEntriesWithBlock:(id /* block */)arg1;
- (id)initWithInfoSectionDictionaries:(id)arg1;

@end
