//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (SafariCoreExtras)
+ (id)safari_dictionaryWithObjectsInFastEnumerationCollection:(id)arg1 groupedUsingBlock:(id /* block */)arg2;
+ (id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;
+ (id)safari_dictionaryWithPropertyListData:(id)arg1;
- (id)safari_diffWithDictionary:(id)arg1;
- (id)_safari_sortedTupleArray;
- (id)safari_mapAndFilterKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_mapTableForKey:(id)arg1;
- (id)safari_userActivityForKey:(id)arg1;
- (id)safari_setForKey:(id)arg1;
- (id)safari_UUIDForKey:(id)arg1;
- (id)safari_URLForKey:(id)arg1;
- (id)safari_dictionaryForKey:(id)arg1;
- (id)safari_arrayContainingObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)safari_arrayForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1 returningNilIfEmpty:(_Bool)arg2;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1;
- (_Bool)safari_boolForKey:(id)arg1;
@end
