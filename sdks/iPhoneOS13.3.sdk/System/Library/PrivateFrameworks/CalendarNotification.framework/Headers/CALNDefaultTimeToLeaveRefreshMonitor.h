//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CADModule-Protocol.h>
#import <CalendarNotification/CALNTimeToLeaveRefreshMonitor-Protocol.h>

@protocol CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor, CADModule>
{
    BOOL _active;
    BOOL _registeredForBackgroundTaskAgentJobs;
    id <CALNTimeToLeaveRefreshMonitorDelegate> _delegate;
    id <CALNTimeToLeaveRefreshStorage> _storage;
}

+ (id)_refreshTimerBTAJobNameForEventExternalURL:(id)arg1;
@property(nonatomic, getter=isRegisteredForBackgroundTaskAgentJobs) BOOL registeredForBackgroundTaskAgentJobs; // @synthesize registeredForBackgroundTaskAgentJobs=_registeredForBackgroundTaskAgentJobs;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) id <CALNTimeToLeaveRefreshStorage> storage; // @synthesize storage=_storage;
@property(nonatomic) __weak id <CALNTimeToLeaveRefreshMonitorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_refreshTimerFiredForEventExternalURL:(id)arg1;
- (void)removeRefreshTimerForEventExternalURL:(id)arg1;
- (void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)handleBTAJob:(id)arg1 named:(const char )arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)deactivate;
- (void)activate;
- (id)initWithStorage:(id)arg1;

@end

