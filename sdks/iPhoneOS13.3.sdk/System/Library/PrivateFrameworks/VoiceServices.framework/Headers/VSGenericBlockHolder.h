//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/VSGenericUpdate-Protocol.h>

__attribute__((visibility("hidden")))
@interface VSGenericBlockHolder : NSObject <VSGenericUpdate>
{
    id /* CDUnknownBlockType */ _block;
}

// - (void).cxx_destruct;
- (void)invokeUpdateWithObject:(id)arg1;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;

@end
