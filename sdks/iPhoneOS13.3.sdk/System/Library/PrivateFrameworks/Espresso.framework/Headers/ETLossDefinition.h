//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ETLossDefinition : NSObject
{
    NSString *_inputName;
    NSString *_targetInputName;
    NSString *_lossOutputName;
    NSUInteger _mode;
    NSString *_outputName;
}

+ (id)L2LossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3;
+ (id)crossEntropyLossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3;
@property(retain) NSString *outputName; // @synthesize outputName=_outputName;
@property(readonly) NSUInteger mode; // @synthesize mode=_mode;
@property(readonly) NSString *lossOutputName; // @synthesize lossOutputName=_lossOutputName;
@property(readonly) NSString *targetInputName; // @synthesize targetInputName=_targetInputName;
@property(readonly) NSString *inputName; // @synthesize inputName=_inputName;
// - (void).cxx_destruct;
- (id)initWithMode:(NSUInteger)arg1 inputName:(id)arg2 targetName:(id)arg3 lossOutputName:(id)arg4;

@end

