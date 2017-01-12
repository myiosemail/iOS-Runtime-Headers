/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface _HUGridActionSetTitleAndDescriptionView : UIView {
    UILabel * _descriptionLabel;
    NSArray * _titleAndDescriptionConstraints;
    float  _titleDescriptionLineSpacing;
    NSLayoutConstraint * _titleDescriptionSpacingConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSArray *titleAndDescriptionConstraints;
@property (nonatomic) float titleDescriptionLineSpacing;
@property (nonatomic, retain) NSLayoutConstraint *titleDescriptionSpacingConstraint;
@property (nonatomic, retain) UILabel *titleLabel;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 titleLabelSuperview:(id)arg2;
- (void)setDescriptionLabel:(id)arg1;
- (void)setTitleAndDescriptionConstraints:(id)arg1;
- (void)setTitleDescriptionLineSpacing:(float)arg1;
- (void)setTitleDescriptionSpacingConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleAndDescriptionConstraints;
- (float)titleDescriptionLineSpacing;
- (id)titleDescriptionSpacingConstraint;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateTitleText:(id)arg1 descriptionText:(id)arg2;

@end