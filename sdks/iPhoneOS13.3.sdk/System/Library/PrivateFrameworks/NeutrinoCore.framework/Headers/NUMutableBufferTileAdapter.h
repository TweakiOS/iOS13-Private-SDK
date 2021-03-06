//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUMutableBufferTile-Protocol.h>

@protocol NUBuffer, NUMutableBuffer;

@interface NUMutableBufferTileAdapter : NSObject <NUMutableBufferTile>
{
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
    id <NUMutableBuffer> _buffer;
}

@property(readonly, nonatomic) id <NUMutableBuffer> mutableBuffer; // @synthesize mutableBuffer=_buffer;
@property(readonly, nonatomic) CDStruct_996ac03c contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) CDStruct_996ac03c frameRect; // @synthesize frameRect=_frameRect;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id <NUBuffer> buffer;
- (id)init;
- (id)initWithFrameRect:(CDStruct_996ac03c)arg1 contentRect:(CDStruct_996ac03c)arg2 buffer:(id)arg3;

@end

