//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DShaderVariable.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable <TSCHUnretainedParent>
{
    TSCH3DShaderVariable *mParent;
    NSUInteger mIndex;
}

+ (id)variableWithParentVariable:(id)arg1 index:(NSUInteger)arg2;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParentVariable:(id)arg1 index:(NSUInteger)arg2;

@end

