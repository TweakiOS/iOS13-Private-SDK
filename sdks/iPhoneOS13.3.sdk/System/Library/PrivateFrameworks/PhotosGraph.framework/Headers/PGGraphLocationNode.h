//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphLocationCoordinates-Protocol.h>
#import <PhotosGraph/PGGraphLocationNaming-Protocol.h>

@class NSString;

@interface PGGraphLocationNode : PGGraphNode <PGGraphLocationNaming, PGGraphLocationCoordinates>
{
    PGGraphLocationNode *_densestCloseLocationNode;
    struct CLLocationCoordinate2D _centroidCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D centroidCoordinate; // @synthesize centroidCoordinate=_centroidCoordinate;
// - (void).cxx_destruct;
- (id)deepParentLocationNodes;
- (struct CLLocationCoordinate2D)coordinate;
- (id)associatedNodesForRemoval;
- (id)keywordDescription;
- (id)addressNodes;
- (void)enumerateChildLocationNodesWithLabel:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)childLocationNodesWithLabel:(id)arg1;
- (id)parentLocationNodeWithLabel:(id)arg1;
- (id)anyAddressNode;
- (NSUInteger)locationMask;
@property(readonly) NSString *fullname;
@property(readonly) __weak PGGraphLocationNode *densestCloseLocationNode; // @synthesize densestCloseLocationNode=_densestCloseLocationNode;

@end

