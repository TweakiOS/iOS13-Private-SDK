//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSCoder (LPExtras)
- (id)_lp_strictlyDecodeColorForKey:(id)arg1;
- (void)_lp_encodeColorIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeURLIfNotNilOrLocalFile:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeArrayIfNotEmpty:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeDictionaryOfObjectsWithKeysOfClass:(Class)arg1 andObjectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)_lp_strictlyDecodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)_lp_strictlyDecodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)_lp_strictlyDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeLPVideoForKey:(id)arg1;
- (id)_lp_strictlyDecodeArrayOfLPImagesForKey:(id)arg1;
- (id)_lp_strictlyDecodeLPImageForKey:(id)arg1;
- (id)_lp_strictlyDecodeNSAttributedStringForKey:(id)arg1;
- (id)_lp_strictlyDecodeNSStringForKey:(id)arg1;
- (id)_lp_strictlyDecodeNSDataForKey:(id)arg1;
@end
