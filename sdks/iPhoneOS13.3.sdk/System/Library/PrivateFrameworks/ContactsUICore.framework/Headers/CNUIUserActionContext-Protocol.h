//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSServiceConnectionEndpoint, NSString;
@protocol CNUIUserActionCurator, CNUIUserActionDialRequestOpener, CNUIUserActionRecorder, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

@protocol CNUIUserActionContext <NSObject>
@property(copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;
@property(copy, nonatomic) NSString *channelIdentifier;
@property(readonly, nonatomic) id <CNUIUserActionCurator> actionCurator;
@property(readonly, nonatomic) id <CNUIUserActionRecorder> actionRecorder;
@property(readonly, nonatomic) id <CNUIUserActionDialRequestOpener> dialRequestOpener;
@property(readonly, nonatomic) id <CNUIUserActionUserActivityOpener> userActivityOpener;
@property(readonly, nonatomic) id <CNUIUserActionURLOpener> urlOpener;
@end
