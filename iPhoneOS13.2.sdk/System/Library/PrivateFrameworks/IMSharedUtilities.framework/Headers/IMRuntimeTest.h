//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject
{
    IMRuntimeTestRun *_testRun;
    id /* block */ _completion;
}

+ (void)testLog:(id)arg1;
+ (id)testName;
+ (id)logHandle;
@property(copy) id /* block */ completion; // @synthesize completion=_completion;
@property(retain) IMRuntimeTestRun *testRun; // @synthesize testRun=_testRun;
- (void)testLog:(id)arg1;
- (void)finishTestAfterInterval:(double)arg1;
- (void)dispatchAfter:(double)arg1 block:(id /* block */)arg2;
- (id)testName;
- (void)runTest:(id /* block */)arg1;
- (Class)testRunClass;
- (void)finishTest;
- (id)logHandle;
- (void)startTest;
- (void)tearDown;
- (void)setUp;

@end
