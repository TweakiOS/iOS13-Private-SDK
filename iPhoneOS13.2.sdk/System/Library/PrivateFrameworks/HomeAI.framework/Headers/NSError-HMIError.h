//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSError (HMIError)
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hmiPrivateErrorWithCode:(long long)arg1;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hmiErrorWithCode:(long long)arg1;
+ (id)hmiErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)_hmiErrorWithCode:(unsigned long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
@end
