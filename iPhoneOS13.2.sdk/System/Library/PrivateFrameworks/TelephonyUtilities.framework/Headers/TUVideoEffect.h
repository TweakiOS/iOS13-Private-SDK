//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface TUVideoEffect : NSObject
{
    NSString *_name;
    UIImage *_thumbnailImage;
}

@property(readonly, copy, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (_Bool)isEqualToEffect:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 thumbnailImage:(id)arg2;
- (id)init;

@end
