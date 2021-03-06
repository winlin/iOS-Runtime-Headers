/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageView, UIActivityIndicatorView, UIImage, UIImageView, UIView;

@interface PLCameraImportItemView : UIImageView <PLStackableImage> {
    PLImageView *_imageView;
    UIView *_movieBadgeView;
    UIActivityIndicatorView *_shadowSpinner;
    UIActivityIndicatorView *_spinner;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frameOfImage;
@property(retain) UIImage * image;
@property(readonly) UIImageView * imageView;
@property(readonly) BOOL isBeingManipulated;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property BOOL showProgressSpinner;
@property float transitionProgress;

+ (id)completedBadgeImage;
+ (float)importItemViewBorderWidth;

- (void)dealloc;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBeingManipulated;
- (BOOL)isShadowEnabled;
- (void)setDrawsBorders:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setShowProgressSpinner:(BOOL)arg1;
- (void)setTextBadgeString:(id)arg1;
- (void)setTransitionProgress:(float)arg1;
- (BOOL)showProgressSpinner;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (float)transitionProgress;

@end
