//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _OTSVGParserDelegate : NSObject <NSXMLParserDelegate>
{
    BOOL errorOccurred;
    unsigned int skipDepth;
    unsigned int unitsPerEm;
    unsigned int elementCount;
    unique_ptr_bd23540c root;
    vector_61f1bb43 stack;
    unordered_map_aadc992e namespaces;
}

@property unordered_map_aadc992e namespaces; // @synthesize namespaces;
@property vector_61f1bb43 stack; // @synthesize stack;
@property unique_ptr_bd23540c root; // @synthesize root;
@property unsigned int elementCount; // @synthesize elementCount;
@property unsigned int unitsPerEm; // @synthesize unitsPerEm;
@property unsigned int skipDepth; // @synthesize skipDepth;
@property BOOL errorOccurred; // @synthesize errorOccurred;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (id)initWithUnitsPerEm:(unsigned int)arg1;

@end
