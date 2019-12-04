//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSAudioFileReaderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSAudioFileReader : NSObject
{
    struct OpaqueExtAudioFile *_fFile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_audioFeedTimer;
    double _bufferDuration;
    struct AudioStreamBasicDescription _outASBD;
    id <CSAudioFileReaderDelegate> _delegate;
}

@property(nonatomic) __weak id <CSAudioFileReaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)close;
- (id)readSamplesFromChannelIdx:(unsigned int)arg1;
- (void)dealloc;
- (void)stopRecording;
- (void)_readAudioBufferAndFeed;
- (_Bool)startRecording;
- (_Bool)prepareRecording:(id)arg1;
- (_Bool)setRecordBufferDuration:(double)arg1;
- (id)initWithURL:(id)arg1;

@end
