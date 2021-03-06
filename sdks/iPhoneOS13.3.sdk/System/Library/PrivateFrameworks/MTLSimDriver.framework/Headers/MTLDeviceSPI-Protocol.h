//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLDevice-Protocol.h>

@class MTLCommandQueueDescriptor, MTLComputePipelineDescriptor, MTLIndirectCommandBufferDescriptor, MTLRasterizationRateMapDescriptor, MTLRenderPipelineDescriptor, MTLStructType, MTLTextureDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSData, NSObject, NSString, _MTLIndirectArgumentBufferLayout;
@protocol MTLArgumentEncoder, MTLBuffer, MTLCommandQueue, MTLComputeCommandEncoder, MTLComputePipelineState, MTLDeserializationContext, MTLDevice, MTLDeviceSPI, MTLFunction, MTLIndirectArgumentEncoder, MTLIndirectCommandBuffer, MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder, MTLLibrary, MTLPipelineLibrarySPI, MTLRasterizationRateMap, MTLRenderCommandEncoder, MTLRenderPipelineState, MTLResourceGroupSPI, MTLSamplerState, MTLSharedEvent, MTLTexture, MTLTextureLayout, OS_dispatch_data;

@protocol MTLDeviceSPI <MTLDevice>
+ (void)registerDevices;
@property(readonly, getter=isPlacementHeapSupported) BOOL placementHeapSupported;
@property(readonly) NSUInteger maxRasterizationRateLayerCount;
@property NSUInteger currentUtilityBufferIndex;
@property(retain, nonatomic) NSArray *utilityBuffers;
@property(readonly, getter=isUtilityBufferRequired) BOOL utilityBufferRequired;
@property(nonatomic, getter=isResourceIndirectionEnabled) BOOL resourceIndirectionEnabled;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property(readonly) NSUInteger dedicatedMemorySize;
@property(readonly) NSUInteger sharedMemorySize;
@property(readonly) BOOL supportPriorityBand;
@property(readonly) NSUInteger minTilePixels;
@property(readonly) NSUInteger maxTileInlineDataSize;
@property(readonly) NSUInteger maxTileSamplers;
@property(readonly) NSUInteger maxTileTextures;
@property(readonly) NSUInteger maxTileBuffers;
@property(readonly) NSUInteger linearTextureArrayAlignmentSlice;
@property(readonly) NSUInteger linearTextureArrayAlignmentBytes;
@property(readonly) NSUInteger maxFramebufferStorageBits;
@property(readonly) NSUInteger maxComputeAttributes;
@property(readonly) NSUInteger maxTextureBufferWidth;
@property(readonly) NSUInteger maxVertexAmplificationCount;
@property(readonly) NSUInteger maxVertexAmplificationFactor;
@property(readonly) NSUInteger maxCustomSamplePositions;
@property(readonly) NSUInteger maxViewportCount;
@property(readonly) NSUInteger maxIndirectSamplersPerDevice;
@property(readonly) NSUInteger maxIndirectSamplers;
@property(readonly) NSUInteger maxIndirectTextures;
@property(readonly) NSUInteger maxIndirectBuffers;
@property(readonly) NSUInteger maxTessellationFactor;
@property(readonly) NSUInteger maxInterpolatedComponents;
@property(readonly) NSUInteger maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) NSUInteger maxFunctionConstantIndices;
@property(readonly) NSUInteger deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) NSUInteger deviceLinearTextureAlignmentBytes;
@property(readonly) NSUInteger iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) NSUInteger iosurfaceTextureAlignmentBytes;
@property(readonly) NSUInteger linearTextureAlignmentBytes;
@property(readonly) NSUInteger maxTextureLayers;
@property(readonly) NSUInteger maxTextureDimensionCube;
@property(readonly) NSUInteger maxTextureDepth3D;
@property(readonly) NSUInteger maxTextureHeight3D;
@property(readonly) NSUInteger maxTextureWidth3D;
@property(readonly) NSUInteger maxTextureHeight2D;
@property(readonly) NSUInteger maxTextureWidth2D;
@property(readonly) NSUInteger maxTextureWidth1D;
@property(readonly) NSUInteger minBufferNoCopyAlignmentBytes;
@property(readonly) NSUInteger minConstantBufferAlignmentBytes;
@property(readonly) NSUInteger maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) NSUInteger maxComputeThreadgroupMemory;
@property(readonly) NSUInteger maxTotalComputeThreadsPerThreadgroup;
@property(readonly) NSUInteger maxComputeLocalMemorySizes;
@property(readonly) NSUInteger maxComputeInlineDataSize;
@property(readonly) NSUInteger maxComputeSamplers;
@property(readonly) NSUInteger maxComputeTextures;
@property(readonly) NSUInteger maxComputeBuffers;
@property(readonly) NSUInteger maxFragmentInlineDataSize;
@property(readonly) NSUInteger maxFragmentSamplers;
@property(readonly) NSUInteger maxFragmentTextures;
@property(readonly) NSUInteger maxFragmentBuffers;
@property(readonly) NSUInteger maxInterpolants;
@property(readonly) NSUInteger maxVertexInlineDataSize;
@property(readonly) NSUInteger maxVertexSamplers;
@property(readonly) NSUInteger maxVertexTextures;
@property(readonly) NSUInteger maxVertexBuffers;
@property(readonly) NSUInteger maxVertexAttributes;
@property(readonly) NSUInteger maxColorAttachments;
@property(readonly) const CDStruct_a9d832e7 limits;
@property(readonly) NSUInteger featureProfile;
@property(nonatomic) BOOL metalAssertionsEnabled;
@property(readonly) NSUInteger doubleFPConfig;
@property(readonly) NSUInteger singleFPConfig;
@property(readonly) NSUInteger halfFPConfig;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) BOOL gpuAssertionsEnabled;
@property(readonly, nonatomic) BOOL supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) BOOL supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) BOOL supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) BOOL supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) BOOL supportsSIMDReduction;
@property(readonly, nonatomic) BOOL supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) BOOL supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) BOOL supportsSparseTextures;
@property(readonly, nonatomic) BOOL supportsASTCHDRTextureCompression;
@property(readonly, nonatomic) BOOL supportsYCBCRFormatsXR;
@property(readonly, nonatomic) BOOL supportsYCBCRFormats12;
@property(readonly, nonatomic) BOOL supportsYCBCRFormatsPQ;
@property(readonly, nonatomic) BOOL supportsYCBCRFormats;
@property(readonly, nonatomic) BOOL supportsVariableRateRasterization;
@property(readonly, nonatomic) BOOL supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) BOOL supportsShaderMinLODClamp;
@property(readonly, nonatomic) BOOL supportsSIMDGroup;
@property(readonly, nonatomic) BOOL supportsFP32TessFactors;
@property(readonly, nonatomic) BOOL supportsStencilFeedback;
@property(readonly, nonatomic) BOOL supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) BOOL supportsIndirectTessellation;
@property(readonly, nonatomic) BOOL supportsViewportAndScissorArray;
@property(readonly, nonatomic) BOOL supportsLayeredRendering;
@property(readonly, nonatomic) BOOL supports2DLinearTexArraySPI;
@property(readonly, nonatomic) BOOL supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) BOOL supportsNonSquareTileShaders;
@property(readonly, nonatomic) BOOL supportsLinearTexture2DArray;
@property(readonly, nonatomic) BOOL supportsRasterOrderGroups;
@property(readonly, nonatomic) BOOL supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) BOOL supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) BOOL supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) BOOL supportsTextureCubeArray;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureArguments;
@property(readonly, nonatomic) BOOL supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) BOOL supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) BOOL supportsPostDepthCoverage;
@property(readonly, nonatomic) BOOL supportsNativeHardwareFP16;
@property(readonly, nonatomic) BOOL supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) BOOL supportsTileShaders;
@property(readonly, nonatomic) BOOL supportsImageBlocks;
@property(readonly, nonatomic) BOOL supportsRenderTextureWrites;
@property(readonly, nonatomic) BOOL supportsQuadGroup;
@property(readonly, nonatomic) BOOL supportsMemoryOrderAtomics;
@property(readonly, nonatomic) BOOL supportsAlphaYUVFormats;
@property(readonly, nonatomic) BOOL supportsTextureSwizzle;
@property(readonly, nonatomic) BOOL supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) BOOL supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) BOOL supportsIndirectTextures;
@property(readonly, nonatomic) BOOL supportsIndirectStageInRegion;
@property(readonly, nonatomic) BOOL supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) BOOL supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) BOOL supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) BOOL supportsMSAAStencilResolve;
@property(readonly, nonatomic) BOOL supportsMSAADepthResolve;
@property(readonly, nonatomic) BOOL supportsSamplerCompareFunction;
@property(readonly, nonatomic) BOOL supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) BOOL supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) BOOL supportsArrayOfSamplers;
@property(readonly, nonatomic) BOOL supportsArrayOfTextures;
@property(readonly, nonatomic) BOOL supportsReadWriteBufferArguments;
@property(readonly, nonatomic) BOOL supportsTessellation;
@property(readonly, nonatomic) BOOL supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) BOOL supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) BOOL supportsCountingOcclusionQuery;
@property(readonly, nonatomic) BOOL supportsFragmentBufferWrites;
@property(readonly, nonatomic) BOOL supportsExtendedXR10Formats;
@property(readonly, nonatomic) BOOL supports3DASTCTextures;
@property(readonly, nonatomic) BOOL supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) BOOL supportsDepthClipMode;
@property(readonly, nonatomic) BOOL supportsSRGBwrites;
@property(readonly, nonatomic) BOOL supportsPublicXR10Formats;
@property(readonly, nonatomic) BOOL supportsExtendedYUVFormats;
@property(readonly, nonatomic) BOOL supportsASTCTextureCompression;
@property(readonly, nonatomic) BOOL supportsGPUStatistics;
@property(readonly, nonatomic) BOOL supportsSeparateDepthStencil;
@property(readonly, nonatomic) BOOL supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) BOOL supportsShaderLODAverage;
@property(readonly, nonatomic) BOOL supportsInvariantVertexPosition;
@property(readonly, nonatomic) BOOL supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) BOOL supportsMemorylessRenderTargets;
@property(readonly, nonatomic) BOOL supportsRenderToLinearTextures;
@property(readonly, nonatomic) BOOL supportsProgrammableBlending;
@property(readonly, nonatomic) BOOL supportsBufferWithIOSurface;
@property(readonly, nonatomic) BOOL supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) BOOL supportsPipelineLibraries;
@property(readonly, nonatomic) BOOL supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) BOOL supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) BOOL supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) BOOL supportsLimitedYUVFormats;
@property(readonly, nonatomic) BOOL supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) BOOL supportsPlacementHeaps;
@property(readonly, nonatomic) BOOL supportsVertexAmplification;
@property(readonly, nonatomic) BOOL supports32bpcMSAATextures;
@property(readonly, nonatomic) BOOL supportsSamplerAddressModeClampToHalfBorder;
@property(readonly, nonatomic) BOOL supportsCustomBorderColor;
@property(readonly, nonatomic) BOOL supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) BOOL supports3DBCTextures;
@property(readonly, nonatomic) BOOL supportsBCTextureCompression;
@property(readonly, nonatomic) BOOL supportsProgrammableSamplePositions;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) BOOL supportsArgumentBuffersTier2;
@property(readonly, nonatomic) BOOL supportsBufferlessClientStorageTexture;
@property(readonly, nonatomic) BOOL supportsQuadReduction;
- (id <MTLRasterizationRateMap>)newRasterizationRateMapWithDescriptor:(MTLRasterizationRateMapDescriptor *)arg1;
- (BOOL)supportsRasterizationRateMapWithLayerCount:(NSUInteger)arg1;
- (NSUInteger)offsetFromIndirectBufferAddress:(NSUInteger)arg1;
- (NSUInteger)resourceIndexFromIndirectBufferAddress:(NSUInteger)arg1;
- (NSUInteger)indirectBufferAddressForResourceIndex:(NSUInteger)arg1 offset:(NSUInteger)arg2;
- (void)removeResourceFromGlobalResourceTable:(NSUInteger)arg1 resourceType:(NSUInteger)arg2;
- (void)addIndirectCommandBufferToGlobalResourceTable:(id <MTLIndirectCommandBuffer>)arg1;
- (void)addRenderPipelineStateToGlobalResourceTable:(id <MTLRenderPipelineState>)arg1;
- (void)addComputePipelineStateToGlobalResourceTable:(id <MTLComputePipelineState>)arg1;
- (void)addSamplerStateToGlobalResourceTable:(id <MTLSamplerState>)arg1;
- (void)addTextureToGlobalResourceTable:(id <MTLTexture>)arg1;
- (void)addBufferToGlobalResourceTable:(id <MTLBuffer>)arg1;
- (BOOL)requiresIndirectionForAllResourceTypes;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void )arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 atResourceIndex:(NSUInteger)arg4 deallocator:(void (^)(void , NSUInteger))arg5;
- (id <MTLBuffer>)newBufferWithBytes:(const void )arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 atResourceIndex:(NSUInteger)arg4;
- (id <MTLBuffer>)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2 atResourceIndex:(NSUInteger)arg3;
- (BOOL)useDeviceResourceTableForType:(NSUInteger)arg1;
- (id <MTLBuffer>)utilityBufferForRenderCommandEncoder:(id <MTLRenderCommandEncoder>)arg1;
- (id <MTLBuffer>)utilityBufferForComputeCommandEncoder:(id <MTLComputeCommandEncoder>)arg1;
- (NSUInteger)createNewUtilityBuffer;
- (BOOL)setResourcesPurgeableState:(id )arg1 newState:(NSUInteger)arg2 oldState:(NSUInteger )arg3 count:(int)arg4;
- (id <MTLSharedEvent>)newSharedEventWithMachPort:(unsigned int)arg1;
- (id <MTLIndirectComputeCommandEncoder>)newIndirectComputeCommandEncoderWithBuffer:(id <MTLBuffer>)arg1;
- (id <MTLIndirectRenderCommandEncoder>)newIndirectRenderCommandEncoderWithBuffer:(id <MTLBuffer>)arg1;
- (id <MTLBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCount:(NSUInteger)arg2 options:(NSUInteger)arg3;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (_MTLIndirectArgumentBufferLayout *)newIndirectArgumentBufferLayoutWithStructType:(MTLStructType *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithDescriptor:(MTLCommandQueueDescriptor *)arg1;
- (BOOL)supportsSampleCount:(NSUInteger)arg1;
- (BOOL)copyShaderCacheToPath:(NSString *)arg1;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void)unloadShaderCaches;
- (id <MTLBuffer>)newBufferWithIOSurface:(struct __IOSurface )arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface )arg2 plane:(NSUInteger)arg3;
- (NSUInteger)minLinearTextureAlignmentForPixelFormat:(NSUInteger)arg1;
- (BOOL)deviceOrFeatureProfileSupportsFeatureSet:(NSUInteger)arg1;
- (BOOL)deviceSupportsFeatureSet:(NSUInteger)arg1;
- (id <MTLDevice>)_deviceWrapper;
- (void)_setDeviceWrapper:(id <MTLDeviceSPI>)arg1;
- (void)compilerPropagatesThreadPriority:(BOOL)arg1;
- (NSString *)productName;
- (NSString *)familyName;
- (NSString *)vendorName;
- (void)allowLibrariesFromOtherPlatforms;
- (NSString *)reportLeaks;

@optional
@property(readonly) NSUInteger sparseTexturesSupport;
@property(readonly, getter=isQuadDataSharingSupported) BOOL quadDataSharingSupported;
@property(readonly) const struct MTLTargetDeviceArch targetDeviceInfo;
@property BOOL shaderDebugInfoCaching;
- (id <MTLResourceGroupSPI>)newResourceGroupFromResources:(const id )arg1 count:(NSUInteger)arg2;
- (CDStruct_da2e99ad)tileSizeWithSparsePageSize:(NSUInteger)arg1 textureType:(NSUInteger)arg2 pixelFormat:(NSUInteger)arg3 sampleCount:(NSUInteger)arg4;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (id <MTLTextureLayout>)newTextureLayoutWithDescriptor:(MTLTextureDescriptor *)arg1 isHeapOrBufferBacked:(BOOL)arg2;
- (id <MTLTexture>)newTextureWithBytesNoCopy:(void )arg1 length:(NSUInteger)arg2 descriptor:(MTLTextureDescriptor *)arg3 deallocator:(void (^)(void , NSUInteger))arg4;
- (NSObject<OS_dispatch_data> *)serializeStructType:(MTLStructType *)arg1 version:(unsigned int)arg2;
- (NSObject<OS_dispatch_data> *)serializeStructType:(MTLStructType *)arg1;
- (MTLComputePipelineDescriptor *)newComputePipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (MTLRenderPipelineDescriptor *)newRenderPipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (NSObject<OS_dispatch_data> *)serializeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (NSObject<OS_dispatch_data> *)serializeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (NSData *)endCollectingPipelineDescriptors;
- (void)startCollectingPipelineDescriptorsUsingPrefixForNames:(NSString *)arg1;
- (void)startCollectingPipelineDescriptors;
- (id <MTLPipelineLibrarySPI>)newPipelineLibraryWithFilePath:(NSString *)arg1 error:(id )arg2;
- (id <MTLLibrary>)newLibraryWithCIFiltersForComputePipeline:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa )arg2 error:(id )arg3;
- (id <MTLLibrary>)newLibraryWithCIFilters:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa )arg2 error:(id )arg3;
- (id <MTLLibrary>)newLibraryWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa )arg2 error:(id )arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa )arg2 error:(id )arg3;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithArguments:(NSArray *)arg1;
- (void )getShaderCacheKeys;
- (id <MTLFunction>)newFunctionWithGLIR:(void )arg1 inputsDescription:(NSObject<OS_dispatch_data> *)arg2 functionType:(NSUInteger)arg3;
- (id <MTLFunction>)newFunctionWithGLIR:(void )arg1 functionType:(NSUInteger)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 error:(id )arg2;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id )arg2;
- (void)unmapShaderSampleBuffer;
- (BOOL)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a )arg1 capacity:(NSUInteger)arg2 size:(NSUInteger)arg3;
- (void)reserveResourceIndicesForResourceType:(NSUInteger)arg1 indices:(NSUInteger )arg2 indexCount:(NSUInteger)arg3;
- (NSUInteger)resourcePatchingTypeForResourceType:(NSUInteger)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable )arg1;
- (void)setIndirectArgumentBufferDecodingData:(NSObject<OS_dispatch_data> *)arg1;
- (NSObject<OS_dispatch_data> *)indirectArgumentBufferDecodingData;
- (BOOL)supportsPrimitiveType:(NSUInteger)arg1;
@end

