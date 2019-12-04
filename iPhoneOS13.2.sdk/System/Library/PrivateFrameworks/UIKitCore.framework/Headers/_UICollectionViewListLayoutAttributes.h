//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayoutAttributes.h>

#import <UIKitCore/UICollectionViewListItemAttributes-Protocol.h>
#import <UIKitCore/UICollectionViewListSectionHeaderFooterAttributes-Protocol.h>
#import <UIKitCore/UICollectionViewListSeparatorAttributes-Protocol.h>

@class UIColor, UIVisualEffect;

@interface _UICollectionViewListLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewListSeparatorAttributes, UICollectionViewListItemAttributes, UICollectionViewListSectionHeaderFooterAttributes>
{
    UIColor *_separatorColor;
    UIVisualEffect *_separatorEffect;
    long long _appearanceStyle;
}

@property(nonatomic) long long appearanceStyle; // @synthesize appearanceStyle=_appearanceStyle;
@property(retain, nonatomic) UIVisualEffect *separatorEffect; // @synthesize separatorEffect=_separatorEffect;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
