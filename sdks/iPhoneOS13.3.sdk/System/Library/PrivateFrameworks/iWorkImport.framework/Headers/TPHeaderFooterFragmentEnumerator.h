//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class TPPageMaster;

__attribute__((visibility("hidden")))
@interface TPHeaderFooterFragmentEnumerator : NSEnumerator
{
    TPPageMaster *_pageMaster;
    long long _fragmentIndex;
    long long _headerFooterType;
}

@property(nonatomic) long long headerFooterType; // @synthesize headerFooterType=_headerFooterType;
@property(nonatomic) long long fragmentIndex; // @synthesize fragmentIndex=_fragmentIndex;
@property(retain, nonatomic) TPPageMaster *pageMaster; // @synthesize pageMaster=_pageMaster;
// - (void).cxx_destruct;
- (void)p_incrementHeaderFooterType;
- (void)p_incrementFragmentIndex;
- (id)nextObject;
- (id)initWithPageMaster:(id)arg1;

@end

