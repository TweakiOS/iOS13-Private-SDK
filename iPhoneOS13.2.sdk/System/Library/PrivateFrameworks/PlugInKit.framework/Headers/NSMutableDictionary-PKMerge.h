//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (PKMerge)
- (id)_createOrConvertToMutableDictionaryFromDictionary:(id)arg1;
- (id)_mutableDictionaryAtKeyPath:(struct NSArray *)arg1;
- (void)_overlayCustomValueAtKeyPath:(struct NSArray *)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 handler:(id /* block */)arg4;
- (void)_overlayValueAtKey:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 targetTakePrecedent:(_Bool)arg4 nestedDictionaryHandler:(id /* block */)arg5;
- (void)pk_removeItemsAtKeyPaths:(struct NSSet *)arg1;
- (void)pk_overlayDictionary:(id)arg1 existingValuesTakePrecedent:(_Bool)arg2 exceptKeyPaths:(struct NSSet *)arg3 exemptionHandler:(id /* block */)arg4;
@end
