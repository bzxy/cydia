/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <PhotoBoothEffects/PBFilter.h>
#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>


@class NSString, PBCompiledFilter;

@interface PBFilter : NSObject {
	void *_priv;	// 4 = 0x4
}
+ (id)filterWithName:(id)name;	// 0x1a6d
- (id)init;	// 0x1a0d
- (id)name;	// 0x1dad
- (void)dealloc;	// 0x1d51
- (void)setDefaults;	// 0x1975
- (id)inputKeys;	// 0x1d05
- (id)localizedName;	// 0x1ca5
- (id)description;	// 0x1ae1
@end

@interface PBFilter (Gestures)
- (float)floatValueForKeyIfSupported:(id)keyIfSupported;	// 0x2205
- (void)setFloatValue:(float)value forKeyIfSupported:(id)keyIfSupported;	// 0x226d
- (CGPoint)pointValueForKeyIfSupported:(id)keyIfSupported;	// 0x2985
- (void)setPointValue:(CGPoint)value forKeyIfSupported:(id)keyIfSupported;	// 0x22e1
- (void)handleTapGesture:(CGPoint)gesture viewSize:(CGSize)size mirror:(BOOL)mirror;	// 0x235d
- (void)handleGestureAtLocations:(CGPoint *)locations count:(int)count translation:(CGPoint)translation viewSize:(CGSize)size stateBegan:(BOOL)began mirror:(BOOL)mirror;	// 0x2d51
- (void)handlePanGesture:(CGPoint)gesture viewSize:(CGSize)size stateBegan:(BOOL)began mirror:(BOOL)mirror;	// 0x29f1
- (void)handlePinchGesture:(float)gesture stateBegan:(BOOL)began;	// 0x2461
- (void)handleRotateGesture:(float)gesture stateBegan:(BOOL)began mirror:(BOOL)mirror;	// 0x2575
@end

@interface PBFilter (OpenCL)
@property(readonly, assign, nonatomic) unsigned kernelArgCount;	// G=0x19b9; 
@property(readonly, retain, nonatomic) NSString *openCLKernelName;	// G=0x19ad; 
// declared property getter: - (id)openCLKernelName;	// 0x19ad
- (/*function-pointer*/ void *)kernelWrapper;	// 0x19b1
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x19b5
// declared property getter: - (unsigned long)kernelArgCount;	// 0x19b9
@end

@interface PBFilter (PBFilterPrivate)
@property(retain, nonatomic) PBCompiledFilter *compiledFilter;	// G=0x197d; S=0x2059; @dynamic
+ (id)defaultValueForKey:(id)key;	// 0x266d
+ (BOOL)needsDisplayForKey:(id)key;	// 0x2165
- (BOOL)allowAbsoluteGestures;	// 0x1979
- (id)_presentationName;	// 0x2049
// declared property getter: - (id)compiledFilter;	// 0x197d
// declared property setter: - (void)setCompiledFilter:(id)filter;	// 0x2059
- (const char *)_vertexShaderSource;	// 0x1991
- (const char *)_fragmentShaderSource;	// 0x19a1
- (id)_glesAttributes;	// 0x209d
- (id)_glesUniforms;	// 0x2119
- (id)_lookupTableNames;	// 0x19a5
- (id)_lookupTableForName:(id)name;	// 0x27d9
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x19a9
@end