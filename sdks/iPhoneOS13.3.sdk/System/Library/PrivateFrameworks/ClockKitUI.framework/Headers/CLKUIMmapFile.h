//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKUIMmapFile : NSObject
{
    int _descriptor;
    NSString *_path;
    NSUInteger _length;
    const void _bytes;
}

+ (id)mmapFileWithPath:(id)arg1;
@property(readonly, nonatomic) const void bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) NSUInteger length; // @synthesize length=_length;
@property(readonly, nonatomic) int descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)arg1 descriptor:(int)arg2 length:(NSUInteger)arg3 bytes:(const void )arg4;

@end

