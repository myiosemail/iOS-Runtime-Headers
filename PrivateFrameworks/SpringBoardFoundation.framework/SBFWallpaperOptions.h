/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSString;

@interface SBFWallpaperOptions : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    BOOL _isPortrait;
    NSString *_name;
    float _parallaxFactor;
    BOOL _supportsCropping;
    float _zoomScale;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cropRect;
@property(readonly) BOOL isPortrait;
@property(copy,readonly) NSString * name;
@property(readonly) BOOL parallaxEnabled;
@property(readonly) float parallaxFactor;
@property(readonly) BOOL supportsCropping;
@property(readonly) float zoomScale;

+ (id)optionsWithName:(id)arg1 parallaxFactor:(float)arg2 zoomScale:(float)arg3 supportsCropping:(BOOL)arg4 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 portrait:(BOOL)arg6;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (id)initWithName:(id)arg1 parallaxFactor:(float)arg2 zoomScale:(float)arg3 supportsCropping:(BOOL)arg4 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 portrait:(BOOL)arg6;
- (BOOL)isPortrait;
- (id)name;
- (BOOL)parallaxEnabled;
- (float)parallaxFactor;
- (BOOL)supportsCropping;
- (float)zoomScale;

@end