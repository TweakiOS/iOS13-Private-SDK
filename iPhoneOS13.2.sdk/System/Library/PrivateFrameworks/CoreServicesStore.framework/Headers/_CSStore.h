//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CSStore : NSObject <NSSecureCoding>
{
    // Error parsing type: {Store="dataContainer"@"tableOffsets"{array<unsigned int, 64>="__elems_"[64I]}"arrayTable"^{Table}"stringTable"^{Table}"enumerationState"{atomic<long long>="__a_"Aq}"getNSDataCallCount"{atomic<long long>="__a_"Aq}"pedigree"{Pedigree="family"Q"generationAtCopyTime"{optional<unsigned int>=""(?="__null_state_"c"__val_"I)"__engaged_"B}}}, name: _store
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)new;
+ (void)initialize;
- (id).cxx_construct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1 error:(id *)arg2;
- (void)setExpectedAccessQueue:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;
-     // Error parsing type: @24@0:8^{Store=@{array<unsigned int, 64>=[64I]}^{Table}^{Table}{atomic<long long>=Aq}{atomic<long long>=Aq}{Pedigree=Q{optional<unsigned int>=(?=cI)B}}}16, name: initByMovingStore:
- (id)init;

@end
