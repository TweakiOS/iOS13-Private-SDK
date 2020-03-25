//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTInterprocessChangeNotifier, NSDictionary, NSString;

@interface MTIDNamespaceFile : NSObject
{
    NSString *_fileName;
    NSDictionary *_options;
    MTInterprocessChangeNotifier *_changeNotifier;
}

+ (id)optionsFromData:(id)arg1 error:(id )arg2;
+ (id)dataFromOptions:(id)arg1 error:(id )arg2;
@property(retain, nonatomic) MTInterprocessChangeNotifier *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
// - (void).cxx_destruct;
- (id)lockFileWithFlags:(int)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)optionsWithCachePolicy:(long long)arg1;
- (id)deleteFile;
- (id)updateOptions:(id)arg1 resetSeed:(BOOL)arg2;
- (id)initWithFileName:(id)arg1 shouldDisableChangeNotifications:(BOOL)arg2;

@end
