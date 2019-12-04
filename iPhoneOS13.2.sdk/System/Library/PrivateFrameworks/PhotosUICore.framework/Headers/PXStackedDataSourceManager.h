//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXDataSectionManagerChangeObserver-Protocol.h>

@class NSArray, NSString;

@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <PXDataSectionManagerChangeObserver>
{
    _Bool _initialDataSourceCreated;
    NSArray *_dataSectionManagers;
}

@property(nonatomic) _Bool initialDataSourceCreated; // @synthesize initialDataSourceCreated=_initialDataSourceCreated;
@property(copy, nonatomic) NSArray *dataSectionManagers; // @synthesize dataSectionManagers=_dataSectionManagers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)createInitialDataSource;
- (void)_updateDataSourceWithSectionChanges:(id)arg1 itemChanges:(id)arg2;
- (id)_newDataSource;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (id)initWithDataSectionManagers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
