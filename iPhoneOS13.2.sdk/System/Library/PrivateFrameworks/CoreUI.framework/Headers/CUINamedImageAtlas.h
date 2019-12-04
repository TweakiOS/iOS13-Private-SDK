//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSArray, NSDictionary;

@interface CUINamedImageAtlas : CUINamedLookup
{
    NSDictionary *_images;
    NSArray *_renditions;
    struct __CFArray *_atlasImages;
}

@property(readonly, nonatomic) _Bool completeTextureExtrusion;
@property(readonly, nonatomic) NSArray *imageNames;
- (id)imageWithName:(id)arg1;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct __CFArray *images;
@property(readonly, nonatomic) struct CGImage *image;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6;
- (_Bool)_dimension1ExistsInKeyFormatForThemeRef:(unsigned long long)arg1;
- (id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2;
- (void)dealloc;

@end
