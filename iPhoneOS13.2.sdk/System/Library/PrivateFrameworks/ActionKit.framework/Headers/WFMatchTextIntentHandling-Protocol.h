//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class WFMatchTextIntent;

@protocol WFMatchTextIntentHandling 
- (void)resolveCaseSensitiveForMatchText:(WFMatchTextIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolvePatternForMatchText:(WFMatchTextIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)resolveTextForMatchText:(WFMatchTextIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)handleMatchText:(WFMatchTextIntent *)arg1 completion:(void (^)(WFMatchTextIntentResponse *))arg2;

@optional
- (void)confirmMatchText:(WFMatchTextIntent *)arg1 completion:(void (^)(WFMatchTextIntentResponse *))arg2;
@end
