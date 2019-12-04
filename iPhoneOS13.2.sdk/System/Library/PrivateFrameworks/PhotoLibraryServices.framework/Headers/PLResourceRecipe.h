//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface PLResourceRecipe : NSObject <NSCopying>
{
}

+ (id)recipeFromID:(unsigned int)arg1;
+ (Class)classFromRecipeID:(unsigned int)arg1;
- (long long)adjustedIngredientsForAsset:(id)arg1 ingredients:(id)arg2 version:(unsigned int)arg3;
- (unsigned short)recipeClassID;
- (_Bool)isDerivative;
- (_Bool)isMarkedFullSize;
- (id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (_Bool)colorSpaceIsNativeForDisplay;
- (id)utiInContext:(id)arg1;
- (id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id *)arg5 completion:(id /* block */)arg6;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)codecInContext:(id)arg1;
- (unsigned int)recipeID;
- (id)initWithRecipeID:(unsigned int)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
