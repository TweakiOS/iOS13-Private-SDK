//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSIndexSet;

@protocol PXGSpriteTexture 
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) struct CGImage *imageRepresentation;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly, nonatomic) unsigned int spriteCount;
- (_Bool)containsSpriteIndex:(unsigned int)arg1;
- (void)enumerateSpriteIndexes:(void (^)(unsigned int, _Bool *))arg1;
- (void)getSpriteIndexes:(unsigned int *)arg1 maxSpriteCount:(unsigned int)arg2;
@end
